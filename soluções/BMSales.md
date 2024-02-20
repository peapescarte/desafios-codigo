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

O programa utiliza 3 variáveis e um for loop para gerar os números. As variáveis `a` e `b` representam os dois números iniciais da sequência, além de também representar os dois números anteriores ao novo número a ser encontrado, que é representado pela variável `c`.

Pelo for loop, `c` recebe o valor da soma de `a` e `b`, achando-se então o novo número da sequência. Para achar o próximo número, é necessário que `a` e `b` mudem de valor. 

Seguindo a lógica de que `a` e `b` representam os dois números anteriores à variável `c`, que representa o número seguinte a ser encontrado, `a` recebe o valor de `b` e `b` recebe o valor de `c`. Ou seja, essas variáveis avançam um passo na série, possibilitando a busca pelo próximo número.
