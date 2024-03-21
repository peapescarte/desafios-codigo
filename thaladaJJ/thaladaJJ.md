## Exercicio 1 - Sequência de Fibonacci

> O código a seguir implementa um método que imprime os n primeiros números da sequência de Fibonacci, começando sempre com 0 e 1.

```C

#include <stdio.h>

void generateFibonacciNumbers (int number) {

    int fibonacciSequence [100] = {0, 1};

    for (int i = 0; i < number; i++) {

        if (i > 1) 
            fibonacciSequence [i] = fibonacciSequence [i - 1] + fibonacciSequence [i - 2];

        printf ("%d ", fibonacciSequence [i]);
    }

    printf ("\n");
}

int main () {

    generateFibonacciNumbers (10);

    return 0;
}

```

## Exercicio 2 - Inverter uma String

> Esse algoritmo recebe uma string do usuário e a retorna invertida através de uma função com um loop
que a cada iteração adiciona, no final da string a ser retornada (append), o ultimo caractere que ainda não foi adicionado da string original

```Java 

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

```

## Exercicio 3 - Verificação de palíndromo

> Esse algoritmo recebe uma sequência de caracteres do usuário e chama uma função de retorno booleano, em que
é realizada uma expressão regular para remover pontuação, espaços e capitalização e em seguida itera sobre
cada caractere da entrada limpa, sendo que a iteração ocorre simultaneamente do início para o fim e do fim para o 
início, retornando falso se encontrar uma instância em que os caracteres não são iguais.

```Java

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

```

## Exercicio 4 - Encontrar o maior e o menor número

> Esse algoritmo preenche uma lista com 10 valores aleatórios e a exibe na tela; então, chama uma função cujo retorno será
um array com os extremos numéricos da lista e a imprimir na tela. A função declara um maior numero e um menor numero com base
nos limites possíveis de inteiros da lista a receber como parâmetro e a percorre, mudando o valor do maior numero e menor número quando
encontra, respectivamente, um número maior ou menor que o valor atual das variáveis.

```Java 

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

```

## Exercicio 5 - Mapeamento de lista

> Esse algoritmo preenche uma lista com valores aleatórios de 0 a 30 e chama uma função para retornar uma nova lista,
que mapeia a lista original percorrendo seus elementos e realizando a operação potência de dois neles, através de uma expressão lambda.

```Java

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

```