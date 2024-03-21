import java.util.ArrayList;
import java.util.List;
import java.util.Random;

public class ListExtremes {

    public static void main (String[] args) {

        List <Integer> numbers_list = new ArrayList<>();
        Random random = new Random();

        for (int i = 0; i < 10; i++) {
            numbers_list.add(i, random.nextInt(101));
            System.out.print(numbers_list.getLast() + " ");
        }

        System.out.println();

        int[] Extremes = getListExtremes(numbers_list);

        for (int number : Extremes)
            System.out.print(number + " ");

    }

    public static int[] getListExtremes (List<Integer> list) {

        int minorNumber = 100, biggestNumber = 0;

        for (Integer number : list) {

            if (number > biggestNumber)
                biggestNumber = number;

            if (number < minorNumber)
                minorNumber = number;
        }

        return new int[] {minorNumber, biggestNumber};
    }

}