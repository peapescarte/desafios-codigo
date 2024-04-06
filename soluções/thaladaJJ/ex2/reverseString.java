import java.util.Scanner;

public class reverseString {

    public static void main (String[] args) {

        Scanner sc = new Scanner(System.in);
        String userInput = sc.nextLine();

        String userOut = userReversedString(userInput);
        System.out.println(userOut);
    }

    public static String userReversedString (String input) {

        StringBuilder reversed = new StringBuilder();

        for (int i = input.length() - 1; i >= 0; i--)
            reversed.append(input.charAt(i));

        return reversed.toString();
    }

}