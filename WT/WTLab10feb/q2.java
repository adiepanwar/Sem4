public class q2 {
    public static void main(String[] args) {
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < args.length; i++) {
            int num = Integer.parseInt(args[i]);
            if (num % 2 == 0) {
                c1++;
            } else {

                c2++;
            }
        }
        System.out.println("Even=" + c1);
        System.out.println("Odd= " + c2);
    }

}