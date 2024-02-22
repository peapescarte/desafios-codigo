# Minhas soluções

Segue abaixo as minhas soluções dos desafios, junto com suas explicações

## Exercício 1: Fibonacci

**Objetivo:** gerar os primeiros 10 números da sequência de Fibonacci

```c
int main(){
	int a = 0;
	int b = 1;
	int c = 0;
	
	printf("%d %d ", a, b);
	for(int i = 0; i < 8; i++){
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}

	...
```

O programa utiliza 3 variáveis e um for loop para gerar os números. As variáveis `a` e `b` representam os dois
números iniciais da sequência, além de também representar os dois números anteriores ao novo número a ser
encontrado, que é representado pela variável `c`.

Pelo for loop, `c` recebe o valor da soma de `a` e `b`, achando-se então o novo número da sequência. Para achar o
próximo número, é necessário que `a` e `b` mudem de valor. 

Seguindo a lógica de que `a` e `b` representam os dois números anteriores à variável `c`, que representa o número
seguinte a ser encontrado, `a` recebe o valor de `b` e `b` recebe o valor de `c`. Ou seja, essas variáveis 
avançam um passo na série, possibilitando a busca pelo próximo número.

## Exercício 2: Inverter uma string

**Objetivo:** receber uma string e retornar ela invertida

```c
...

void Array_Invert(char* string, int size){
	int j =	size - 1;
	for(int i = 0; i <= j; i++){
		Swap(&string[i], &string[j]);
		j--;
	}
}

...
```

A forma que o programa inverte a string é por meio da troca de posição de seus caracteres. Segue-se a lógica de
trocar o primeiro elemento da string com o último elemento, o segundo elemento com o penúltimo, terceiro com o
antepenúltimo... assim até que todos caracteres forem trocados de posição.

Na função `Array_Invert`, utiliza-se as variáveis `i` e `j` no for loop para informar para a função `Swap` quais
elementos da string vão realizar a operação de troca de posição. `i` começa no inicio da string e vai subindo de
acordo com o loop, enquanto `j` começa no fim e vai descendo. O loop finaliza quando `i` assumir um valor maior
que `j`.
