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
Apenas chama a função 'void Fibonacci(int)' e fecha o progrma em sequência.

Função Fibonacci:
```c
void Fibonacci(int depth) {
	FibonacciHelper(0, 1, depth);
}
```
Inicia a sequência de Fibonacci com 0 e 1 como seus dois números iniciais, e pede por uma profundidade de 'depth'

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

A iteração em si consiste de escrever no console o número atual de Fibonacci, diminuir 'depth' em 1 e chamar a si mesma novamente passando como parametros: y (anterior),  x+y (atual) e depth. 

