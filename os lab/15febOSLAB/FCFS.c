// 2005775_Aditya Singh Panwar
#include <stdio.h>
#include <string.h>
int main()
{
    char pn[10][10], t[10];
    int arrival[10], burst[10], start[10], finish[10], TAT[10], WT[10], i, j, n, temp;
    int totalWT = 0, totalTAT = 0;
    printf("Total no. of proccess:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the ProcName, AT & BT:");
        scanf("%s%d%d", &pn[i], &arrival[i], &burst[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arrival[i] < arrival[j])
            {
                temp = arrival[i];
                arrival[i] = arrival[j];
                arrival[j] = temp;
                temp = burst[i];
                burst[i] = burst[j];
                burst[j] = temp;
                strcpy(t, pn[i]);
                strcpy(pn[i], pn[j]);
                strcpy(pn[j], t);
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (i == 0)
            start[i] = arrival[i];
        else
            start[i] = finish[i - 1];
        WT[i] = start[i] - arrival[i];
        finish[i] = start[i] + burst[i];
        TAT[i] = finish[i] - arrival[i];
    }
    printf("\nPName arrivaltime Burtime WaitTime Start   TAT  Finish");
    for (i = 0; i < n; i++)
    {
        printf("\n%s\t%3d\t%3d\t%3d\t%3d\t%6d\t%6d", pn[i], arrival[i], burst[i], WT[i], start[i], TAT[i], finish[i]);
        totalWT += WT[i];
        totalTAT += TAT[i];
    }
    printf("\nTotal Waiting time:%f", (float)totalWT);
    printf("\nTotal Response time:%f", (float)totalWT);
    printf("\nTotal Turn Around Time:%f", (float)totalTAT);
    return 0;
}