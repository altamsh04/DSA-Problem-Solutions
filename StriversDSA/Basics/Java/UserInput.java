import java.util.Scanner;

public class UserInput {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a, b, c;

        System.out.println("Enter number a : ");
        a = scanner.nextInt();

        System.out.println("Enter number b : ");
        b = scanner.nextInt();

        c = a+b;
        System.out.println("Addition of a + b is "+c);

    }
}