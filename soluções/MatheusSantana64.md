# Solução de Matheus Cerqueira Santana - RA 743579

## Exercício 1: Sequência de Fibonacci
Descrição: Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

```C
#include <stdio.h>

int main() {
    int n1 = 0, n2 = 1, soma = 0;

    for(int i = 1; i <= 10; i++){
        printf("%d", n1);
        if(i < 10)
            printf(", ");
        soma = n1 + n2;
        n1 = n2;
        n2 = soma;
    }

    return 0;
}
```
### Explicação:
O algoritmo inicia com os números 0 e 1 e, em seguida, itera 10 vezes para gerar os próximos números. A cada iteração, ele imprime o número atual e atualiza as variáveis para os próximos números da sequência.

## Exercício 2: Inverter uma String
Descrição: Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".

```C
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char strInv[100];

    printf("Insira uma string: ");
    scanf("%s", str);

    int compr = strlen(str);

    for (int i = 0; i < compr; i++) {
        strInv[i] = str[compr - i - 1];
    }
    strInv[compr] = '\0';

    printf("String invertida: %s\n", strInv);

    return 0;
}
```

### Explicação:
O algoritmo calcula o comprimento da string usando strlen, e usa um loop for para iterar sobre a string de trás pra frente, inserindo cada caractere na string invertida na ordem reversa. 

## Exercício 3: Verificação de Palíndromo
Descrição: Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, ignorando espaços, pontuação e capitalização.

```C
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int ehPalindromo(char str[]) {
    int compr = strlen(str);
    int inicio = 0;
    int fim = compr - 1;

    while (inicio < fim) {
        if (tolower(str[inicio]) != tolower(str[fim])) {
            return 0;
        }
        inicio++;
        fim--;
    }

    return 1;
}

int main() {
    char str[100];

    printf("Insira uma string: ");
    scanf("%s", str);

    if (ehPalindromo(str)) {
        printf("Eh palindromo\n");
    } else {
        printf("Nao eh palindromo\n");
    }
    return 0;
}
```

### Explicação:
A função ehPalindromo recebe uma string e usa um loop while para comparar caracteres de ambos os lados da string, começando do inicio e fim, e simultaneamente se aproximando do meio. Se os caracteres não forem iguais, retorna 0, indicando que a string não é um palíndromo.

## Exercício 4: Encontrar o Maior e o Menor Número
Descrição: Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista `[1, 2, 3, 4, 5]`, o maior número é 5 e o menor é 1.

```C
#include <stdio.h>

int main() {
    int n;
    printf("Insira o numero de elementos na lista: ");
    scanf("%d", &n);

    int v[n];
    printf("Insira os elementos da lista: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    int men = v[0], mai = v[0];
    for(int i = 1; i < n; i++){
        if(v[i] > mai)
            mai = v[i];
        if(v[i] < men)
            men = v[i];
    }
    
    printf("Menor: %d\n", men);
    printf("Maior: %d\n", mai);

    return 0;
}
```

### Explicação:
O algoritmo recebe a lista de números do usuário, e assume q o primeiro número como menor e maior a fim de comparar com os próximos números em um loop for sequencial, quando encontrar um número maior que o maior atual, ele é armazenado em seu lugar como o maior número. O menor segue a mesma lógica. Após percorrer todo o vetor, imprime o menor e maior números da lista.

## Exercício 5: Mapeamento de Lista
Descrição: Escreva um algoritmo que, dada uma lista de números, aplique a função `f(x) = x^2` a cada elemento da lista, retornando uma nova lista com os resultados. Por exemplo, dada a lista `[1, 2, 3, 4]`, o resultado deve ser `[1, 4, 9, 16]`.

```C
#include <stdio.h>

int main() {
    int n;
    printf("Insira o numero de elementos na lista: ");
    scanf("%d", &n);

    int v[n];
    printf("Insira os elementos da lista: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < n; i++){
        v[i] = v[i] * v[i];
    }
    
    printf("Lista apos aplicar a funcao f(x)=x^2: ");
    for(int i = 0; i < n; i++){
        printf("%d", v[i]);
        if(i < n - 1)
            printf(", ");
    }

    return 0;
}
```

### Explicacao:
O algoritmo recebe uma lista de números do usuário e, em seguida, utiliza um loop for para iterar sobre cada elemento da lista, substituindo o elemento por ele mesmo ao quadrado após multiplicá-lo por si mesmo. Após percorrer toda a lista, imprime a lista, agora com os elementos ao quadrado. 