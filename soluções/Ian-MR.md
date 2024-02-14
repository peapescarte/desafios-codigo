# Soluções e Explicações dos Desafios
As questões dessa lista foram resolvidas usando javascript.
## Exercício 1: Sequência de Fibonacci
Descrição: Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.
### Solução
  - Explicação:
  > Este algoritmo implementa uma função que gera os valores da sequência de Fibonacci como base na quantidade que foi solicitada, utilizando uma lista que já contem os dois números inicias da sequência de fibonacci e então com uso de uma estrutura de repetição que começa a partir do terceiro valor da sequência soma os dois valores anteriores a ele e então adiciona a lista.
  - Código:
  ```javascript
  function fibonacci(num){
    let sequencia = [0,1]
    for(let i=2;i<num;i++){
        sequencia[i] = sequencia[i-1]+sequencia[i-2]
    }
    console.log(sequencia)
  }
  fibonacci(10)
  ```
  
## Exercício 2: Inverter uma String
Descrição: Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".
### Solução
  - Explicação:
  > Este algoritmo implementa duas funções que dado uma palavra ele a inverte, na primeira função é usado uma estrutura de repetição que está decrescendo, onde o caracter da palavra está sendo concatenada a uma nova variavel indo do último caracter ao primeiro. Na segunda função foram usuados metodos do javascript para simplificar a solução onde o split divide cada caracter da palavra em um elemento de uma lista, então é usado o metodo reverse para inverter a lista e por ultimo usando o join para unir a lista em uma string novamente.
  - Código:
  ```javascript
  function inverterString(string){
    let reverseString = ""
    for(let i = string.length - 1; i>=0;i--){
        reverseString += string[i]
    }
    console.log(reverseString)
  }
  function inverterStringArray(string){
    console.log(string.split("").reverse().join(""))
  }  
  inverterString("paralelepipedo")
  inverterStringArray("quadrado")
  ```
## Exercício 3: Verificação de Palíndromo
Descrição: Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, ignorando espaços, pontuação e capitalização.
### Solução
  - Explicação:
  > Este algoritmo implementa uma função que recebe uma string que é então tratada para todos os caracteres serem minusculos e então remove os espaços e pontuações com o uso de uma expressao regular, a partir dessa string é gerada uma nova onde ele é invertida utilizando metodos do javascript, no final a função retorna verdadeiro ou falso caso as duas strings sejam iguais ou não.
  - Código:
  ```javascript
  function isPalindrome(string){
    let stringTratada = string.toLowerCase().replace(/([^a-z0-9])/g,"")
    let stringTratadaInvertida = stringTratada.split("").reverse().join("")
    console.log(stringTratada)
    console.log(stringTratadaInvertida)
    return stringTratada === stringTratadaInvertida
  }

  console.log(isPalindrome("12331")? "é":"não é" + " palindromo")
  ```
## Exercício 4: Encontrar o Maior e o Menor Número
Descrição: Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista `[1, 2, 3, 4, 5]`, o maior número é 5 e o menor é 1.
### Solução
  - Explicação:
  > Este algoritmo implementa uma função que dada uma lista inicializa duas variaveis que recebem o primeiro elemento da lista e então percorrem a lista com uma estrutura de repetição a partir do segundo elemento fazendo comparações das variaveis com o elemento atual e trocando ou não o valor armazenado caso a condição seja verdadeira ou falsa.
  - Código:
  ```javascript
  function MaiorMenor(lista){
    let maior = lista[0], menor = lista[0]
    for(let i=1; i<lista.length;i++){
       maior =  maior>lista[i]? maior:lista[i]
       menor =  menor<lista[i]? menor:lista[i]
    }
    console.log(`O maior numero é ${maior} e o menor é ${menor}`)
  }

  MaiorMenor([32,58,1,54,-5])
  ```
## Exercício 5: Mapeamento de Lista
Descrição: Escreva um algoritmo que, dada uma lista de números, aplique a função `f(x) = x^2` a cada elemento da lista, retornando uma nova lista com os resultados. Por exemplo, dada a lista `[1, 2, 3, 4]`, o resultado deve ser `[1, 4, 9, 16]`.
### Solução
  - Explicação:
  > Este algoritmo implementa duas funções dado uma lista aplica uma função, na primeira função cria uma nova lista e com o uso de uma estrutura de repetição percorre todos os elementos da lista e faz com que o elemento da nova lista receba o valor do elemento da lista ao quadrado, apos percorrer todos os elementos, retorna a nova lista. Na segunda função utilizando um metodo map do javascript que percorre todos os elementos da lista e aplica a função definida a eles e então retorna uma nova lista.
  - Código:
  ```javascript
  function mapearLista(lista){
    let novaLista =[]
    for(let i=0;i<lista.length;i++){
        novaLista[i] = lista[i]**2
    }
    return novaLista
  }

  function mapearLista2(lista){
    return lista.map(x => x**2)
  }

  lista = [1,2,3,4,5]

  lista2 = mapearLista(lista)
  console.log(lista, lista2)

  lista3 = mapearLista2(lista)
  console.log(lista, lista3)
  ```