# Exercício 1 - Fibonacci
## Descrição: 
Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.
## Explicação:
O código calcula os 10 primeiros números da sequência Fibonacci por meio de um loop "for", o qual utiliza um algoritmo para criar a sequência e imprimi-la na tela, sendo o primeiro e o segundo valores da sequência
pré-definidos como 0 e 1. __O número da posição atual é a soma dos seus dois antecessores mais próximos [i] = [i-1] + [i-2].__ 
## Código em C:
```C
int fibonacci(){
    int vetor[10];
    vetor[0] = 0;
    vetor[1] = 1;
    for (int i = 0; i < 10; i++){
        if (i > 1){
            vetor[i] = vetor[i - 1] + vetor[i - 2];
        }
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
```
# Exercício 2 - Inverter String
## Descrição: 
Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".
## Explicação: 
A função abaixo recebe uma string como argumento e utiliza um loop "for" para invertê-la e, no final, imprimi-la na tela. __Para descobrir qual a letra de dada posição, o código utiliza o tamanho total da string (size) 
para calcular a letra oposta a essa, assim invertendo-a: string[size - i - 1].__
## Código em C:
```C
void inverteString(char *string){
    int size = strlen(string);
    char invertido[size];
    for(int i = 0; i < size; i++){
        invertido[i] = string[size - i - 1];
    }
    printf("%s\n", invertido);
    return;
}
```
# Exercício 3 - Palíndromo
## Descrição:
Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, 
ignorando espaços, pontuação e capitalização.
## Explicação: 
A função abaixo recebe uma string como parâmetro e verifica se a string é ou não é um palíndromo, escrevendo na tela "Nao eh palindromo" caso não seja e "Eh palindromo" caso seja. __Para fazer essa verificação, 
o código utiliza um loop "while" que percorre a string, comparando as letras opostas em relação ao início e ao fim da string. Caso uma dessas letras seja diferente da sua oposta, a string não é um palíndromo e a função
termina.__
## Código em C:
```C
void palindromo(char *string){
    int size = strlen(string);
    int inicio = 0;
    int fim = size - 1;
    while(inicio < fim){
        if(string[inicio] != string[fim]){
            printf("Nao eh palindromo\n");
            return;
        }
        inicio++;
        fim--;    
    }
    printf("Eh palindromo\n");
    return;
}
```
# Exercício 4 - Maior e menor número
## Descrição: 
Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista [1, 2, 3, 4, 5], o maior número é 5 e o menor é 1.
## Explicação:
O código recebe um vetor de números e o tamanho desse como argumentos. __Ele cria duas váriaveis: uma para encontrar o maior valor e outra para o menor, comparando essas com cada valor do vetor por meio de um loop "while". 
No final do loop, a variável "menor" terá o menor valor e a "maior", o maior valor, sendo essas imprimidas na tela.__
## Código em C:
```C
void maiorMenor(int *vetor, int size){
    int menor = vetor[0], maior = vetor[0], i = 1;
    while(size > i){
        if(vetor[i] < menor){
            menor = vetor[i];
        }
        if(vetor[i] > maior){
            maior = vetor[i];
        }
        i++;
    }
    printf("Maior: %d\nMenor: %d\n", maior, menor);
    return;
}
```
# Exercício 5 - Função ao Quadrado (x²)
## Descrição: 
Escreva um algoritmo que, dada uma lista de números, aplique a função f(x) = x^2 a cada elemento da lista, retornando uma nova lista com os resultados. 
Por exemplo, dada a lista [1, 2, 3, 4], o resultado deve ser [1, 4, 9, 16].
## Explicação: 
A função recebe um vetor de números e o seu tamanho como argumentos. Então, cria um segundo vetor de mesmo tamanho do original, o qual conterá os valores ao quadrado, e utiliza um loop "for" para calcular os valores.
__No loop, ele multiplica cada número do vetor original por ele mesmo, atribuindo para o novo vetor os resultados das multiplicações e imprimindo os resultados.__
## Código em C:
```C
void funcaoQuadrado(int *vetor, int size){
    int vetorQuadrado[size];
    for(int i = 0; i < size; i++){
        vetorQuadrado[i] = vetor[i] * vetor[i];
        printf("%d ", vetorQuadrado[i]);
    }
    return;
}
```
