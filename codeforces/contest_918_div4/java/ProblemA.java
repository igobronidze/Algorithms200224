package contest_918;

import java.util.Scanner;

public class ProblemA {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {
            int a = scanner.nextInt();
            int b = scanner.nextInt();
            int c = scanner.nextInt();
            if (a == b) {
                System.out.println(c);
            } else if (a == c) {
                System.out.println(b);
            } else {
                System.out.println(a);
            }
        }
    }
}
