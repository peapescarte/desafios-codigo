# Soluções da Sophia para voluntáriado Pescarte

Todos os exercícios solucionados usando C com uso mínimo de funções de biblioteca.

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
