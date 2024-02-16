# Soluções

Nesses desafios eu tentei ao máximo, não usar funções embutidas, que auxiliram na resolução dos desafios, por exemplo a função min e max do próprio Python.

## Fibonacci (Exercício 1)

Esse desafio eu resolvi realizar utilizando o Python, pois é uma linguagem que não utilizo muito e acho interessante.

- **Exercício 1:** Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

- **Explicação:** Para resolver esse algoritmo eu resolvi criar uma função que recebe um número que seja maior ou igual a 1. Ou seja quando não estiver no alcance 1 até n, será retornado uma mensagem dizendo para o usuário fornecer um número válido. Em seguida resolvi criar duas variáveis `atual` e `prox`, essas variáveis vão ser uteís para armazenar e atualizar os valores atuais (oque serão mostrados a cada iteração) e o próximo (como o nome já diz o próximo valor da sequência) respectivamente. Então assim a cada iteração realizada após o valor da sequência em dada posição seja printada, o valor atual receberá o próximo (atual = prox) e o próximo somará a si mesmo com o atual (prox = atual + prox), assim consequetemente até chegar no caso de parada n(posição desejada).

Resumidamente essa função recebe um número maior que 0, e printa no console todas as ocorrências do fibonacci até dado número n=10. [0, 1, 1, 2, 3, 5, 8, 13, 21, 34].

```python
def fibonacci(n):
    if n <= 0: return print("Informe um número maior que 0")
    atual, prox = 0, 1
    print(f"Sequência de Fibonacci({n})")
    for _ in range(0, n):
        print(atual, end=" ")
        atual, prox = prox, atual + prox

fibonacci(10)
```

## Inverter uma String (Exercício 2)

Esse desafio foi feito utilizando C.

- **Exercício 2:** Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".

- **Explicação:** Nesse algoritmo criei uma função que recebe uma string (um ponteiro de uma sequência de caracteres) e após calcular com o `strlen` o tamanho da string de entrada, ela é usada para criar uma nova referência na memória para a string de saída e posteriormente para inserir os caracteres da string de entrada na string de saída. Ou seja considerando que i comece em 0 e vai até o tamanho da string, será feito entrada[i] = saida[tamanho - i - 1]. Esse -1 é justamente para evitar o caracter nulo que indica o final da string (sem esse -1, a posição 0 já seria o final da string '\0' e tudo após isso seria desconsiderado), na variável tamanho não se leva isso em consideração, pois o `strlen` desconsidera ele.

Resumidamente essa função recebe uma string e a percorre de trás para frente, inserindo cada caracter da mesma em outra string (a partir da sua posição inicial até a final -1, pois a final receberá o caracter nulo).

```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* s)
{
    size_t tamanho = strlen(s);
    int i = 0;

    // +1 para contemplar o caracter de fim da string
    char *nova_string = malloc((tamanho + 1) * sizeof(char));

    memset(nova_string, 0, tamanho); // Limpa o valor da nova_string, evitando lixo residual.

    for(i = 0; i < tamanho; i++)
        nova_string[i] = s[tamanho - i - 1];
    nova_string[tamanho] = '\0'; // Adiciona o caracter de fim no final da string

    printf("Entrada: %s\n", s);
    printf("Saída: %s", nova_string);

    free(nova_string);
}

int main()
{
    reverseString("abcd");
    return 0;
}
```
