# Soluções

Nesses desafios eu tentei ao máximo, não usar funções embutidas, que auxiliram na resolução dos desafios, por exemplo a função min e max do próprio Python.

## Fibonacci (Exercício 1)

Esse desafio eu resolvi realizar utilizando o Python, pois é uma linguagem que não utilizo muito e acho interessante.

-   **Exercício 1:** Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

-   **Explicação:** Para resolver esse algoritmo eu resolvi criar uma função que recebe um número que seja maior ou igual a 1. Ou seja quando não estiver no alcance 1 até n, será retornado uma mensagem dizendo para o usuário fornecer um número válido. Em seguida resolvi criar duas variáveis `atual` e `prox`, essas variáveis vão ser uteís para armazenar e atualizar os valores atuais (oque serão mostrados a cada iteração) e o próximo (como o nome já diz o próximo valor da sequência) respectivamente. Então assim a cada iteração realizada após o valor da sequência em dada posição seja printada, o valor atual receberá o próximo (atual = prox) e o próximo somará a si mesmo com o atual (prox = atual + prox), assim consequetemente até chegar no caso de parada n(posição desejada).

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

-   **Exercício 2:** Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".

-   **Explicação:** Nesse algoritmo criei uma função que recebe uma string (um ponteiro de uma sequência de caracteres) e após calcular com o `strlen` o tamanho da string de entrada, ela é usada para criar uma nova referência na memória para a string de saída e posteriormente para inserir os caracteres da string de entrada na string de saída. Ou seja considerando que i comece em 0 e vai até o tamanho da string, será feito entrada[i] = saida[tamanho - i - 1]. Esse -1 é justamente para evitar o caracter nulo que indica o final da string (sem esse -1, a posição 0 já seria o final da string '\0' e tudo após isso seria desconsiderado), na variável tamanho não se leva isso em consideração, pois o `strlen` desconsidera ele.

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

## Verificação de Palíndromo (Exercício 3)

Esse desafio foi feito utilizando C.

-   **Exercício 3:** Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, ignorando espaços, pontuação e capitalização.

-   **Explicação:** Nesse algoritmo é feito um tratamento da entrada visto na função `remover_caracteres`, onde alguns espaços e pontuações são ignorados. Também dentro dessa função, todo caracter é convertido para sua versão lowercase e logo após isso ocorrer todos caracteres que estão definidos no switch vão ser trocadas por um equivalente sem acentuação. Após esse tratamento ser feito, começa a parte de verificar se é palíndromo ou não (1 ou 0), começando pelo caso base verdadeiro que pode ocorrer de duas formas quando o indice da esquerda(start) e o da direita(end), se interligam, isso ocorre quando a palavra tem tamanho ímpar, no caso par é verificado se a distância dos indices das palavras é de apenas 1, se for e ambas forem iguais é retornado 1 verdadeiro. Fora isso tem a condição para a chamada recursiva que é similar ao caso verdadeiro, porém aqui só importa saber se os caracteres são o mesmo, se forem continua a recursividade até achar o caso verdadeiro ou, ou senão caso nenhum das duas condições sejam atendidas retorna 0, ou seja não é palíndromo.

Resumindo, primeiro é feito um tratamento da string para remover todos os caracteres inválidos ou converter eles de forma a ficarem válidos, e logo após é feita a verificação para ver se é palíndromo ou não de forma recursiva, passando como parâmetro o indice da esquerda (start), o da direita(end) e o ponteiro da imagem em questão a ser analisada.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int verificar_palindromo(char *str, int start, int end);
void remover_caracteres(char *str);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	char string_test[] = "Á. grama,. é amarga,.,";
	remover_caracteres(string_test);
	printf("\nString Modificada: %s\n", string_test);

	int v = verificar_palindromo(string_test, 0, strlen(string_test)-1);
	if(v == 1) printf("E um Palindromo");
	else printf("Nao e um Palindromo");

	return 0;
}

int verificar_palindromo(char *str, int start, int end)
{
	if( (start == end) || (abs(start-end) == 1 && str[start] == str[end]) ) return 1;
	else if(str[start] == str[end]) return verificar_palindromo(str, start+1, end-1);
	return 0;
}

char trocar_caracteres_especiais(char letter)
{
	switch(letter)
	{
		case 'á': case 'à': case 'ã': case 'â': case 'ä': return 'a';
		case 'é': case 'è': case 'ê': case 'ë': return 'e';
		case 'í': case 'ì': case 'î': return 'i';
		case 'ó': case 'ò': case 'õ': case 'ô': case 'ö': return 'o';
		case 'ú': case 'ù': case 'û': case 'ü': return 'u';
		case 'ç': return 'c';
		default: return letter;
	}
}

void remover_caracteres(char *str)
{
	int i = 0, str_index = 0;
	int str_len = strlen(str);
	char* temp_str = (char *)malloc((str_len + 1) * sizeof(char));
	while(i < str_len)
	{
		if(str[i] != ' ' && str[i] != '.' && str[i] != ',')
		{
			temp_str[str_index] = trocar_caracteres_especiais(tolower(str[i]));
			str_index++;
		}
		i++;
	}
	temp_str[str_index] = '\0';
	strcpy(str, temp_str);
	free(temp_str);
}
```

## Encontrar o Maior e o Menor Número (Exercício 4)

Esse desafio foi feito utilizando Python.

-   **Exercício 4:** Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista [1, 2, 3, 4, 5], o maior número é 5 e o menor é 1.

-   **Explicação:** Nesse algoritmo optei por criar uma função que registra ambos indices do menor numero e maior (começando tudo no indice de 0), de forma que desde que uma das condições sejam cumpridas o indice do menor (se o valor no indice menor for maior que o elemento atual, troca o valor) ou maior (segue o mesmo contexto do anterior, porém nesse é se ele for menor que o atual troca) é atualizado.

Basicamente oque esse algoritmo faz é registrar a primeira ocorrência de índice onde localizou ambos os extremos (menor e maior) de uma array e no final mostrar tanto sua posição quanto valor.

```python
def encontrar_menor_maior(arr):
    if len(arr) <= 0: return print("Array Inválida")
    menorI, maiorI = 0, 0
    for i in range(1, len(arr)):
        menorI = i if arr[menorI] > arr[i] else menorI
        maiorI = i if arr[maiorI] < arr[i] else maiorI
    print(f"O maior elemento na posição({maiorI}) = {arr[maiorI]}")
    print(f"O menor elemento na posição({menorI}) = {arr[menorI]}")

encontrar_menor_maior([1, 2, 3, 4, 5])
# encontrar_menor_maior([4, 2, 3, 1, -1, 9, 6, 2, -1, 7, 9, 7, 6, 6])
```

## Mapeamento de Lista (Exercício 5)

Esse desafio foi feito utilizando C.

-   **Exercício 5:** Escreva um algoritmo que, dada uma lista de números, aplique a função f(x) = x^2 a cada elemento da lista, retornando uma nova lista com os resultados. Por exemplo, dada a lista [1, 2, 3, 4], o resultado deve ser [1, 4, 9, 16].

-   **Explicação:** Nesse resolvi criar duas funções para mapeamento `mapArray` que atualiza os dados do vetor introduzido e `mapNewArray` que pega os valores de uma array(entrada) e mapeia as mudanças em uma nova array(saída). Indo ao assunto principal ambas as funções de mapeamento recebem um ponteiro com a array de entrada, o tamanho dessa array em si, e por fim um ponteiro referenciando uma função (resolvi fazer dessa forma, para tentar deixar um pouco mais customizável, a questão da aplicação da função). O `calcFunction` em si no main recebe a função `calcQuadratico` que aplicará a função quadrática em cada valor do array. Dentro da função de mapeamento não tem muito segredo, só fiz uma iteração por todos elementos do array e apliquei em cada o cálculo da função quadrática. E por fim criei outra função `printArray` que é responsável por iterar entre os elementos de uma array e os exibir.

Em resumo nesse algoritmo é feito uma iteração pelos n elementos do vetor e no momento dessa iteração o valor atual(x) é multiplicado por si mesmo x\*x ou x^2. De forma que no final o usuário possa visualizar tais mudanças em uma novo ou no mesmo vetor.

A diferença principal entre os dois algoritmos é que no `mapArray` o `calcFunction` é retornado diretamente na array original e na outra é jogado diretamente respectivamente em sua posição entre as n posições iteradas da nova array.

```c
#include <stdio.h>
#include <stdlib.h>

float calcQuadratico(float* arg)
{
    return (*arg) * (*arg);
}

void mapArray(float *arr, int n, float (*calcFunction)(float* arg))
{
    int i = 0;

    for(i = 0; i < n; i++)
        arr[i] = calcFunction(&arr[i]);
}

float* mapNewArray(float *originalArr, int n, float (*calcFunction)(float* arg))
{
    int i = 0;
    float * arr = (float *) malloc(sizeof(float) * n);
    for(i = 0; i < n; i++)
        arr[i] = calcFunction(&originalArr[i]);

    return arr;
}
void printArray(float *arr, int n)
{
    int i = 0;
    printf("\n");
    for(i = 0; i < n; i++)
        printf("%.f ", arr[i]);
}

int main()
{
    float arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array Original");
    printArray(arr, n);

    float* newArray = mapNewArray(arr, n, calcQuadratico);
    mapArray(arr, n, calcQuadratico);

    printf("\n\nArray Original Modificada");
    printArray(arr, n);

    printf("\n\nArray Nova");
    printArray(newArray, n);

    free(newArray);
    return 0;
}
```
