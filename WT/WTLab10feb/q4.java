class Box {
    int volume(int a, int b, int c) {
        return (a * b * c);
    }
}

public class q4 {
    public static void main(String args[]) {
        String arg1 = args[0];
        String arg2 = args[1];
        String arg3 = args[2];
        int lenght = Integer.parseInt(arg1);
        int width = Integer.parseInt(arg2);
        int height = Integer.parseInt(arg3);

        Box box = new Box();
        int result = box.volume(lenght, width, height);
        System.out.println(result);
    }
}