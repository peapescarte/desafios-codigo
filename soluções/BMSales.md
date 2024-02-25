# Minhas soluções

Segue abaixo explicações das minhas soluções dos desafios, código completo de cada exercício pode ser acessadoem 
sua respectiva pasta enumerada.

## Exercício 1: Fibonacci

**Objetivo:** gerar os primeiros 10 números da sequência de Fibonacci

```c
	...

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
que `j`, significando que todas as trocas necessárias para inverter foram realizadas, restando ao programa
retornar o resultado da operação ao usuário.

## Exercício 3: Palíndromo

**Objetivo:** Verificar se uma sequência de caracteres é um palíndromo ou não, independente da presença de espaços,
pontuação ou capitalização

```c
	...

int Is_Punctuation(char character){
	switch (character){
		case ' ':
			return 1;
		case '.':
			return 1;
		case '!':
			return 1;
		case '?':
			return 1;
		case ',':
			return 1;
		case ':':
			return 1;
		case ';':
			return 1;
		case '(':
			return 1;
		case ')':
			return 1;
		case '-':
			return 1;
		case '"':
			return 1;
	}
	return 0;
}

int String_Clean(char* dirty, char* clean, int size_dirty){
	int j = 0;
	for(int i = 0; i < size_dirty; i++){
		if(!Is_Punctuation(dirty[i])){
			if(dirty[i] >= 65 && dirty[i] <= 90){
				clean[j] = dirty[i] + 32;
				j++;
			}
			else if(dirty[i] != '\0'){
				clean[j] = dirty[i];
				j++;
			}
		}
	}

	return j;
}

	...
```

Antes de verificar se a string recebida pelo programa é um palíndromo, é necessário "limpa-la", isto é, remover
espaços e pontuações presentes na string e transformar letras maiúsculas em letras minúsculas. Esse processo é 
realizado com o uso de uma array "limpa", sendo preenchida somente com os caracteres relevantes da string original.

Esse processo de limpeza é realizada com duas funções, o `String_Clean` e o `Is_Punctuation`.

`String_Clean` percorre pela array `dirty` por meio de um loop. De caractere para caractere, ele verifica primeiro
se o símbolo encontrado é diferente de alguma pontuação ou de um espaço por meio da função `Is_Punctuation`, que 
retorna	um valor booleano por meio de um `switch` statement. 

Se `Is_Punctuation` retornar falso, então verifica se o caractere é a uma letra maiúscula, adicionando a sua forma
minúscula na array `clean` e incrementado a variável `j` em 1 (`j` informa o tamanho da string na array `clean`).
Não sendo letra maiúscula, adiciona-se o caractere em `clean` caso ela não for o fim da string, e incrementa j.

Terminando o loop em `String_Clean`, a função retorna o valor de `j`, informando o novo tamanho da string após a
limpeza.

```c
	...

	size_clean = String_Clean(string_a, clean, size_a);
	Array_Print(clean, size_clean);
	
	Is_Palindrome(clean, size_clean);

	...

```

```c

	...

void Is_Palindrome(char* string, int size){
	int j = size - 1;
	for(int i = 0; i <= j; i++){
		if(string[i] != string[j]){
			printf("Not a palindrome\n");
			return;
		}
		else{
			j--;
		}
	}
	printf("Is a palindrome\n");
}

	...

```

Utilizando a string limpa e o tamanho dela informado pela função `String_Clean`, a função `Is_Palindrome` verifica
se a string é de fato um palíndromo ou não por meio de comparações. Compara-se o primeiro elemento com o último,
o segundo com o penúltimo, assim em diante até que seja encontrada uma descrepância, significando que não é um
palíndromo. Ou até terminar de percorrer a string inteira, significando que não foram encontrados caracteres
diferentes em posições simétricas da array, podendo afirmar então que a string é um palíndromo.
