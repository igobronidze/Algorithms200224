// https://leetcode.com/problems/palindrome-number/description/

package leetcode;

import java.util.Scanner;

public class Problem_9 {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();

        System.out.println(isPalindrome(n));
    }

    public static boolean isPalindrome(int n) {
        int p = n;
        if (n < 0) {
            return false;
        } else {
            int s = 0;
            while (n != 0) {
                s = s * 10;
                int x = n % 10;
                s = s + x;
                n = n / 10;
            }
            if (s == p) {
                return true;
            } else {
                return false;
            }
        }
    }
}
