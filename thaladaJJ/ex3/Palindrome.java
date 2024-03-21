import java.util.Scanner;

public class Palindrome {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        if (isPalindrome(input))
            System.out.println("A sequência entregue é um palindromo.");
        else
            System.out.println("Essa sequência não é um palindromo.");

    }

    public static boolean isPalindrome (String input) {

        String newInput = input.replaceAll("[^a-zA-Z]", "").toLowerCase();

        int left = 0;
        int right = newInput.length() - 1;

        while (left < right) {

            if (newInput.charAt(left) != newInput.charAt(right))
                return false;

            left++;
            right--;
        }

        return true;
    }

}
