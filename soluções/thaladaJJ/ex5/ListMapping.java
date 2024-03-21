import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.stream.Collectors;

public class ListMapping {

    public static void main(String[] args) {

        List<Integer> list = new ArrayList<>();
        Random random = new Random();

        for (int i = 0; i < 10; i++) {
            list.add (random.nextInt (30));
            System.out.print(list.getLast() + " ");
        }

        System.out.println();

        List<Integer> mappedList = mapQuadraticList(list);

        for (Integer number : mappedList)
            System.out.print(number + " ");
    }

    public static List<Integer> mapQuadraticList (List<Integer> numbers_list) {

        return numbers_list.stream().map(x -> x*x).collect(Collectors.toList());
    }

}