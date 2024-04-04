# Renan Matulianes Arnaldo - soluções dos desafios aos volutariados
Observação: todos os exercícios foram feitos em linguagem C.

# Sequencia de Fibonacci
Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

## Código:
```C
#include <stdio.h>

void fibonacci(int n){

    int fib1 = 0, fib2 = 1;

    for (int i = 0; i < n; i++)
    {
        int soma = fib1 + fib2;

        printf("%d ", fib1);

        fib1 = fib2;
        fib2 = soma;
    }
    
}

int main(){

    fibonacci(10);

    return 0;
}
```

## Explicação:
O algoritmo tem como objetivo imprimir todos os números da sequência de Fibonacci, da posição 1 até n. Para tanto, é utilizado duas variáveis: fib1 e fib2, inicializadas em 0 e 1, que são os primeiros números da sequência. Para calcular os próximos números, as duas variáveis são somadas subsequentemente n vezes e são atualizadas conforme cada passo, de modo que seja possível calcular o próximo elemento.

> __Complexidade: O(n) em tempo e O(1) em memória.__

# Inverter uma String
Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".

## Código:
```C
#include <stdio.h>
#include <stdlib.h>

char* reverseString(char *string){

    int len = 0;

    for (int i = 0; string[i]; i++)
        len++;

    char *reversedString = (char*) malloc ((len+1) * sizeof(char));

    for (int i = 0; i < len; i++)
    {
        reversedString[i] = string[len - i - 1];
    }

    reversedString[len] = '\0';
    
    return reversedString;
}

int main(){

    char string[] = "Hello, World!";

    char *reversedString = reverseString(string);

    printf("%s", reversedString);

    free(reversedString);

    return 0;
}
```

## Explicação:
O algoritmo tem como objetivo retornar uma string invertida passada como parâmetro da função, mantendo a primeira. Para isso, uma nova string é alocada e, através de um laço for, a primeira posição recebe o conteúdo da ultima posição, a segunda recebe a antepenúltima, e assim por diante.

> __Complexidade: O(n) em tempo e O(n) em memória.__

# Verificação de Palíndromo
Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, ignorando espaços, pontuação e capitalização.

## Código:
```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char string[]) {
    int len = strlen(string);
    int result = 1;
    
    for (int i = 0, j = len - 1; i < j;) {
        
        if (!isalnum(string[i])) {
            i++;
            continue;
        }
        
        if (!isalnum(string[j])) {
            j--;
            continue;
        }
        
        if (tolower(string[i]) != tolower(string[j])) {
            result = 0;
            break;
        } 
        else 
        {
            i++;
            j--;
        }
    }
    
    return result;
}

int main(){

    char frase[] = "Socorram-me, subi no onibus em marrocos";

    palindromo(frase) ? printf("Palindromo") : printf("Nao palindromo");

    return 0;
}
```

## Explicação:
Para identificar se a frase é palíndroma, primeiro supõe-se que a frase é palíndroma, e através de um laço for comparar se as posições espelhadas contém a mesma letra ou número. Caso alguma comparação falhe, a frase não será palíndroma. O índice i começa na posição 0 e j na última e a cada iteração as duas posições são comparadas caso não sejam caracteres especiais.

> __Complexidade: O(n) em tempo e O(1) em memória.__

# Encontrar o Maior e o Menor Número
Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista [1, 2, 3, 4, 5], o maior número é 5 e o menor é 1.

## Código:
```C
#include <stdio.h>

void imprimir_maior_e_menor(int lista[], int tamanho){

    int maior = lista[0];
    int menor = lista[0];

    for (int i = 0; i < tamanho; i++)
    {
        if (lista[i] < menor)
            menor = lista[i];

        if (lista[i] > maior)
            maior = lista[i];
        
    }
    
    printf("Maior: %d\nMenor: %d", maior, menor);
}

int main(){

    int lista[] = {1, 2, 3, 4, 5};

    imprimir_maior_e_menor(lista, 5);

    return 0;
}
```

## Explicação:
Para encontrar o maior número de um vetor, primeiro supõe-se que ele está na posição 0 e, ao percorrer o vetor todo através de um laço for, atualiza-se a varíavel que contenha o maior número caso a posição atual conter um elemento maior do que o atual e no final essa variável guardará o maior elemento. Idem para o menor número.

> __Complexidade: O(n) em tempo e O(1) em memória.__

# Mapeamento de Lista
Escreva um algoritmo que, dada uma lista de números, aplique a função f(x) = x^2 a cada elemento da lista, retornando uma nova lista com os resultados. Por exemplo, dada a lista [1, 2, 3, 4], o resultado deve ser [1, 4, 9, 16].

```C
#include <stdio.h>
#include <stdlib.h>

int* aplicarfuncao(int lista[], int tamanho){

    int *novalista = (int*) malloc (tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++)
    {
        novalista[i] = lista[i] * lista[i];
    }
    
    return novalista;
}

int main(){

    int lista[] = {1, 2, 3, 4};
    int *novalista = aplicarfuncao(lista, 4);

    for (int i = 0; i < 4; i++)
    {
        printf("%d ", novalista[i]);
    }

    free(novalista);

    return 0;
}
```

## Explicação:
A função retorna um novo vetor com a função f(x) = x² aplicada a todos os elementos do original. Para isso, utiliza um laço for e cada posição do novo vetor recebe o resultado da função quando aplicada ao elemento original.
