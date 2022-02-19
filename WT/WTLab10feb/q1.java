public class q1 {
    public static void main(String[] args) {
        System.out.println("The command line arguments are");
        String a = args[0];
        String b = args[1];
        String c = args[2];
        int firstNo = Integer.parseInt(a);
        int secondNumber = Integer.parseInt(b);
        int thirdNumber = Integer.parseInt(c);

        if (firstNo > secondNumber && firstNo > thirdNumber) {
            System.out.println("Greatest= " + firstNo);
        } else if (secondNumber > firstNo && secondNumber > thirdNumber) {
            System.out.println("Greatest= " + secondNumber);
        } else {
            System.out.println("Greatest= " + thirdNumber);
        }
    }
}