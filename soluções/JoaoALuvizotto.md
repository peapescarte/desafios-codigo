## João Augusto Luvizotto RA:823078 - Desafio Voluntariado 

## Exercicio 1: Sequência de Fibonacci

### Explicação: 
Este algoritmo faz a implementação de uma função que gera os números de fibonacci até a quantidade determinada pela variável n. Para se realizar o cálculo dos números da sequência, se é realizada a soma das variáveis diversas vezes até o número solicitado.

> __Complexidade de tempo: O(N)__

> __Complexidade de memória: O(1)__

### Código

```C
#include <stdio.h>

void fibonacci(int n);

int main()
{
    int n = 10;
    fibonacci(n);
    return 0;
}

void fibonacci(int n)
{
    int soma, fibo1 = 0, fibo2 = 1;

    for (int i = 0; i < n; i++)
    {
        
        printf("%d ", fibo1);
        
        soma = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = soma;
    }
    
}
```

## Exercicio 2: Inverter String

### Explicação: 
Este algoritmo faz a implementação de uma função que inverte uma string dada pelo usuário. Se é alocado uma outra string, onde esta será usada para armazenar a string fornecida já invertida, onde primeiramente se é copiada a string origem para a variável e após isso ocorre a inversão trocando as letras do começo com as do final até chegar ao meio da frase, onde todas já foram trocadas. Ao termino disso a string foi invertida com sucesso.

> __Complexidade de tempo: O(N)__

> __Complexidade de memória: O(N)__

### Código

```C
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char string[], char* invertida);
void swap(int indice1, int indice2, char string[]);

int main()
{

    char frase[] = "eu amo pescar";
    char* invertida = (char*)malloc(sizeof(char)*strlen(frase));

    inverter(frase, invertida);

    printf("%s", invertida);
    
    free(invertida);
    return 0;
}

void inverter(char string[],char* invertida)
{
    strcpy(invertida, string);
    for (int i = 0, j = strlen(string)-1; i < j; i++, j--)
        swap(i,j,invertida);
}

void swap(int indice1, int indice2, char string[])
{
    char aux;

    aux = string[indice1];
    string[indice1] = string[indice2];
    string[indice2] = aux;
}
```

## Exercicio 3: Inverter String

### Explicação: 
Este algoritmo implementa uma função que verifica se a frase/número é palíndromo ou não. A verificação é feita ao se retirando todos os caracteres que não são alfanuméricos, e, após isso, todas as letras são colocadas em minúsculo e ocorre a verificação de se é palíndromo ou não, analisando de trás para frente e de frente para trás cada letra e as comparando.


> __Complexidade de tempo: O(N)__

> __Complexidade de memória: O(N)__

### Código

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindromo(char frase[]);

int main()
{
    char frase[] = "socorram-me, subi no onibus em marrocos";

    int palin = 0;

    palin = palindromo(frase);

    if (palin)
        printf("eh palindromo");
    else
        printf("nao eh palindromo");
    
    return 0;
}

int palindromo(char frase[])
{
    int palindro = 1, tamfrase = strlen(frase);
    char novafrase[tamfrase];

    int h = 0;
    for (int k = 0; frase[k] != '\0'; )
    {
        if (isalnum(frase[k]))
        {
            novafrase[h] = frase[k];
            h++;
        }
        else
        {
            k++;
            continue;
        }
        k++;
        novafrase[h] = '\0';
    }

    for (int i = 0, j = strlen(novafrase)-1; i < j;)
    {
        novafrase[i] = tolower(novafrase[i]);
        novafrase[j] = tolower(novafrase[j]);

        if (novafrase[i] != novafrase[j])
            palindro = 0;

        i++;
        j--;
    }

    return palindro;
}
```

## Exercicio 3: Inverter String

### Explicação: 
Este algoritmo encontra o maior e o menor número em um vetor. Uma verificação no vetor é feita no intuito de achar o menor e o maior número substituindo as variáveis maior e menor caso se encontre um número maior ou menor que o que está na variável.


> __Complexidade de tempo: O(N)__

> __Complexidade de memória: O(1)__

### Código

```C
#include <stdio.h>

#define MAX 5

void maioremenor(int vetor[]);

int main()
{
    int numeros[MAX];
    
    for (int i = 0; i < MAX; i++)
        scanf("%d", &numeros[i]);

    maioremenor(numeros);
    
    return 0;
}  

void maioremenor(int vetor[])
{
    int maior = vetor[0];
    int menor = vetor[0];
    
    for (int i = 0; i < MAX; i++)
    {
        if (vetor[i] > maior)
            maior = vetor[i];
        
        if (vetor[i] < menor)
            menor = vetor[i];
    }

    printf("maior: %d \nmenor: %d", maior, menor);
    
}
```

## Exercicio 3: Inverter String

### Explicação: 
Este algoritmo aplica a função f(x) = x² nos números de determinado vetor. Faz isso criando um vetor que irá armazenar os números após a aplicação da função f(x).


> __Complexidade de tempo: O(N)__

> __Complexidade de memória: O(N)__

### Código

```C
#include <stdio.h>
#include <stdlib.h>
#define MAX 5

void aoquadrado(int numeros[], int* aoquadrado);

int main()
{
    int vetor[MAX] = {1, 2, 3, 4, 5};
    int* vetornovo = (int*) malloc(sizeof(int)*MAX);

    aoquadrado(vetor, vetornovo);
    for (int i = 0; i < MAX; i++)
        printf("%d ", vetornovo[i]);

    free(vetornovo);
    return 0;
}

void aoquadrado(int numeros[], int* aoquadrado)
{
    for (int i = 0; i < MAX; i++)
        aoquadrado[i] = numeros[i] * numeros[i];

}
```
