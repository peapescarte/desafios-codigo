# Soluções da Sophia para voluntáriado Pescarte

Todos os exercícios solucionados usando C com uso mínimo de funções de biblioteca.

`AVISO:`
**Todas as resoluções poderiam ser mais robustas e implementar mais verificações de erros, mas por questão de simplicidade e como o objetivo era apenas resolver o exercício isso foi evitado, caso seja desejado é só entrar em contato que eu amplio qualquer um dos exercícios :)**

## Exercício 1: Fibonacci

Função main:
```c
int main() {
	Fibonacci(10);
	return 0;
}
```
Apenas chama a função `void Fibonacci(int)` e fecha o progrma em sequência.

Função Fibonacci:
```c
void Fibonacci(int depth) {
	FibonacciHelper(0, 1, depth);
}
```
Inicia a sequência de Fibonacci com 0 e 1 como seus dois números iniciais, e pede por uma profundidade de `depth`

Função FibonacciHelper:
```c
void FibonacciHelper(int x, int y, int depth) {
	if (depth == 0) return;
	printf("%d\n", x + y);
	depth -= 1;
	FibonacciHelper(y, x+y, depth);
}
```
'FibonacciHelper' por ser uma função recursiva começa verificando se seu caso de saída foi comprido. Seu caso de saída verifica se a profundidade desejada já foi atingida, caso tenha sido, retorna, caso não faz sua próxima iteração.

A iteração em si consiste de escrever no console o número atual de Fibonacci, diminuir `depth` em 1 e chamar a si mesma novamente passando como parametros: `y`(anterior),  `x+y`(atual) e `depth`(profundidade). 

Bibliotecas usadas: `stdio.h`

## Exercício 2: Inverter String

Função main:
```c
int main() {
	char text[] = "Banana e melhor do que maca";
	int len = strlen(text);
	char* a = text, *b = text + len - 1;
	puts(text);
	while (a < b) {
		*a ^= *b;
		*b ^= *a; 
		*a ^= *b;
		a++;
		b--;
	}
	puts(text);
	return 0;
}
```
Inicializa um array de texto usando um `string literal` o qual vai ser invertido.

`IMPORTANTE:`
- `string literals` são pedaços da memória que são apenas para leitura, neste exemplo só é possível modificar o texto pois o mesmo foi colocado em um array de tamanho indefinido que a linguagem usa como uma copia do texto original, onde modificações podem ser feitas. O `string literal` original não foi modificado de maneira alguma e ainda pode ser encontrado na memória.

Em seguida o código pega o tamanho do texto através da função `strlen` disponibilizada pela linguagem.
Ponteiros então são criados no inicio e no fim do texto, os mesmos são trocados usando o método XOR, que troca duas variáveis de lugar sem a necessidade de uma terceira variavel. O ponteiro no inicio então avança uma posição e o do final regride uma posição até que ambos se passem ou se encontrem na mesma posição, assim o texto estará revertido e programa acaba.

## Exercício 3: Palíndromo

Função main:
```c
int main() {
	char* inputs = calloc(50, sizeof(char));
	
	fgets(inputs, 50, stdin);

    ...

}
```
Um array de caracteres(string) é alocado para o input do usuário com tamanho 50.
Então se pega a entrada do usuário, caso seja escrito mais do que 50 caracteres estes são descartados.

Função main:
```c
    ...

    char* pos;
	if ((pos=strchr(inputs, '\n')) != NULL) {
		*pos = '\0';
	}

    ...
```
Este trecho do código remove o nova linha deixado pra trás pelo usuário ao confirmar seu texto.

Função main:
```c
    ...

	InputToLower(inputs);
	RemoveSpaces(inputs);
	RemovePunct(inputs);

    ...
```
Onde a limpeza do input do usuário é feita, ocorrendo a remoção de maiúsculas, espaços e pontuação.

Função InputToLower:
```c
char* InputToLower(char* input) {
    char* tmp = input;
    for (; *input; ++input) {
	    *input = tolower(*input);
    }
    input = tmp;
    return input;
}
```
A função começa salvando a posição inicial do ponteiro input. Então se itera por `input` usando a função `tolower()` fornecida pela biblioteca `ctype.h` em todos os caracteres, até que se acabe o texto. então retornamos o ponteiro para a posição inicial do texto e retornamos.

Função RemoveSpaces:
```c
char* RemoveSpaces(char* input) {
    char* tmp = input, *start = input;
    do {
       	while (*tmp == ' ') {
            tmp++;
        }
    } while (*input++ = *tmp++);
    input = start;
    return input;
}
```
Na fução `RemoveSpaces` salvamos o inicio do ponteiro e criamos uma copia temporaria para nos ajudar no processamento. Então entramos no loop `do-while` e se/enquanto o caracter atual for um espaço, nós avançamos o ponteiro temporário mas não o ponteiro principal. Assim, se estivermos apontando para o espaço no texto "ab c" acabaremos com o ponteiro principal apontando para o espaço e o temporário para a letra 'c', então verificamos a clausula de saída do `do-while` que pega o que está no ponteiro temporario e coloca no principal assim colocando a letra c sobre o espaço, removendo o mesmo. Essa operação acaba quando puxamos o caracter de fim de texto, dado que ele é '0' e funciona como falso, fechando o loop.

Função RemovePunct:
```c
char* RemovePunct(char* input) {
	char* tmp = input, *start = input;
	do {
		while (ispunct(*tmp)) {
			tmp++;
		}
	} while (*input++ = *tmp++);
	input = start;
	return input;
}
```
Exatamente igual a função `RemoveSpaces` mas verificamos se o caracter atual é algum tipo de pontuação usandoa função `ispunct` fornecida pela biblioteca `ctype.h`.

Função main:
```c
    ...

    puts(inputs);

	if (isPalindrome(inputs)) {
		printf("The input is a palindrome");
		return 0;
	} 
	printf("The input is not a palindrome");
	return 0;
}
```
O fim da função main escreve no console a entrada do usuário ja limpa e chama a função `isPalindrome`, caso `input` seja um palindromo ele escreve que é fecha o programa, caso não seja, escreve que não é e fecha o programa.

Função isPalindrome:
```c
int isPalindrome(char* inputs) {
	int len_a = 0; 
	int len_b = strlen(inputs) - 1;
	
	for (int i = len_a, j = len_b; i < j; i++, j--) {
		if (inputs[i] != inputs[j]) {
			printf("%d:%c != %d:%c", i, inputs[i], j, inputs[j]);
			return 0;
		}	
	}
	return 1;
}
```
A função cria dois iteradores, um na posição '0' e um na última posição do texto, verifica se essas duas posições são iguais, se não forem ja retorna falso, se forem, aumenta o iterador `len_a` e diminui o iterador `len_b` e continua verificando, se os iteradores se cruzarem sem retornar o texto todo foi verificado e se retorna '1' como verdadeiro.

Bibliotecas usadas: `stdio.h`, `stdlib.h`, `string.h`, `ctype.h`

## Exercício 4: Menor e Maior

Função main:
```c
int main() {
    int size = 5;
	int array[5] = {-7, 9, 0, -5, 7};
	int maior = array[0], menor = array[0];

	for (int i = 1; i < size; i++) {
		if (array[i] > maior) {
			maior = array[i];
		} else if (array[i] < menor) {
			menor = array[i];
		}
	}

	printf("Maior: %d\nMenor: %d", maior, menor);

	return 0;
}
```
A função começa inicializando um vetor de 5 digitos para o exercício mas seu método preferido de coletar dados do usuário pode ser usado.

Duas variáveis são inicializadas já com o primeiro valor do vetor, `maior` e `menor`.

Então se itera pelo loop já começando pela segunda posição do vetor, caso o número atual seja maior que `maior`, então atribuimos essa variável à `maior` e caso seja menor do que `menor`, atribuimos ela à `menor`. Assim no final do loop temos ambos os valores desejados e podemos escreve-los no console.

Bibliotecas usadas: `stdio.h`

## Exercício 5: Mapear

Função main:
```c
int main() {
	int size = 0, *array_b;
	printf("Size of array to map: ");
	scanf("%d", &size);
	int* array_a = (int*)calloc(size, sizeof(int));
	getInts(array_a, size);

    ...
```
A função main começa inicializando uma variável `size` e o ponteiro que guardará o resultado do mapeamento de uma função sobre o array. Ela então pede o tamanho do array que será mapeado, aloca e inicializa o array com calloc, e chama uma função para o usuário preencher o array.

Função getInts:
```c
void getInts(int* arr, int size) {
	int value = 0;
	for (int i = 0; i < size; i++) {
		scanf("%d", &value);
		arr[i] = value;
	}
	return;
}
```
A função recebe o nosso array inicial vazio e o tamanho do mesmo, e itera sob o array perguntando ao usuário qual valor deseja até que o array esteja cheio e retorna para main.

Função main:
```c
    ...

    array_b = mapear(array_a, size);

    ...
```
A função `main` chama mapear e coloca seus resultados no `array_b`

Função mapear:
```c
int* mapear(int* array, int size) {
	int* tmp = (int*)calloc(size, sizeof(int));
	for (int i = 0; i < size; i++) {
		tmp[i] = pow(array[i], 2);
	}
	return tmp;
}
```
A função mapear itera sob o array aplicando a cada elemento a formula `y = x^2` e colocando o resultado em um array temporario alocado dentro da própria função `mapear`, ao terminar ela retorna o ponteiro do array temporário que vira `array_b` na função `main`.

Função main:
```c
	...

	printArr(array_a, size);
	printArr(array_b, size);
	return 0;
}
```
+
Função printArr:
```c
void printArr(int* array, int size) {
	for(int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	} printf("\n");
	return;
}

```

A função `main` então escreve os arrays no console usando um loop que itera sob o array e escreve seus elementos no console, em sequência finaliza o programa.
