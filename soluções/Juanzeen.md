## Fibonacci

```javascript

const fibonacciSequence = (limitNum) => {
  const sequence = [0, 1, 1];
  i = sequence.length;

  if (limitNum <= 0 || typeof limitNum !== "number") {
    return console.log("Impossível continuar");
  } else if (limitNum === 1) {
    return 0;
  } else if (limitNum === 2 || limitNum === 3) {
    return 1;
  } else {
    while (i < limitNum) {
      let actual =
        sequence[sequence.length - 1] + sequence[sequence.length - 2];
      sequence.push(actual);
      i++;
    }
    return sequence;
  }
};
```


Normalmente vejo Fibonacci sendo feita de maneira recursiva, mas para testar um pouco mais a lógica optei por fazer de outra maneira. 

A lógica utilizada para fazer esse algoritmo é realmente a definição da sequência, criei condicionais para os valores que são fixos e para os seguintes passei a utilizar a definição.

Defino uma variável como atual, que vai receber os valorei do array que no inicio da função é composto por `[0,1,1]` e coloco ela pra receber os valores da última e da penúltima posição do array, isso feito utilizando a propriedade length do JavaScript, que é o que me permite realizar o código dessa maneira, pois logo após dar valor a essa variável eu insiro ela na última posição do meu array, assim para todas as próximas posições a função realiza as somas do último com o penúltimo elemento, que são trocados até que o laço termine e o usuário receba o valor desejado.

## Inverter String

```javascript
const stringReverser = (str) => {
  arrayS = str.split("");
  let reverseString = [];
  // let reverseString = arrayS.reverse(); também funciona!

  for (i = str.length - 1; i >= 0; i--) {
    reverseString.push(arrayS[i]);
  }

  return reverseString.join("");
};
```

Nesse desafio eu tive duas soluções, mas em ambas o primeiro passo foi converter a String em um array. 

Na primeira eu utilizo o método `reverse();` que tem o trabalho de inverter o array e depois eu converto o array novamente para string com o método `join();`. 

Na segunda solução eu utilizei o laço for, que começa da última posição do array e vai até a primeira, com isso eu passo para outro array todos os caracteres com o método `push();` que vai inserindo cada um ao fim do array. Também pensei em realizar esse desafio usando um for com iteração normal, indo do 0 até a última posição do array e utilizando o método `shift();` que adiciona os elementos no início do array, mas me senti mais confortável com o `push();`

## Palindromo

```javascript
const checkPalindromo = (word) => {
  let left = 0,
    right = word.length - 1;
  let wordArr = word.split("");
  let haveDifferent = false;
  let itsPalindromo = true;

  while (left < right) {
    if (wordArr[right].toLowerCase() !== wordArr[left].toLowerCase())
      haveDifferent = true;

    left++;
    right--;
  }

  haveDifferent === false ? itsPalindromo : (itsPalindromo = false);
  return itsPalindromo;
};
```

Para esse desafio eu criei mais variáveis, mas que tiveram funções simples.

* left, right -> Basicamente são os índices que vão percorrer o array, pela esquerda e direita.
left começa em 0 e right recebe o tamanho total do array -1, que é referente ao último elemento do array;

* wordArr -> A string convertida para Array;

* haveDifferent -> Variável do tipo booleano que vai ser o que me dará a resposta final se é ou não um palindromo.

Faço tudo por meio de um while que vai ser executado enquanto left for menor que right, havia testado inicialmente para quando estes valores fossem diferentes, utilizando a seguinte condição: `while(left!==right);`, mas funcionava exclusivamente para palavras com números ímpares de letras. Neste while checo se a letra no indice da esquerda é diferente da letra do índice da direita, caso seja, eu atribuo o valor true a variável haveDifferent, caso contrário simplesmente prossigo com a execução do loop e incremento um em left e decremento um em right, para que a condição de parada seja satisfeita. 

Ao fim do loop faço um if ternário, onde analiso a variável haveDifferent, se for falso, retorno true e a palavra é um palíndromo, se for verdadeiro retorno false e a palavra não é palíndromo.

## Maior e Menor

```javascript
const biggerNSmaller = (array) => {
  let temp;
  let i = 0;

  while (array[i + 1] !== undefined) {
    if (array[i + 1] !== undefined) {
      if (array[i] > array[i + 1]) {
        temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        i = 0;
      } else {
        i++;
      }
    } else {
      break;
    }
  }

  const required = [array[0], array[array.length - 1]];
  return required;
};
```

Neste desafio eu utilizei o método de organização bubbleSort, o que me possibilita simplesmente retornar para o usuário o primeiro e o último elemento do array, já que estes serão respectivamente o menor e o maior número da lista.

## Número ao Quadrado

```javascript
const square = (array) => {
  const squaredArray = array.map((el) => el * el);
  //   const squaredArray = [];

  // for(i = 0; i<array.length; i++){
  //   squaredArray[i] = array[i]*array[i];
  // }

  return squaredArray;
```

Para este último desafio eu utilizei o método `map();` do JS, que basicamente percorre todos os elementos do array e aplica em cada um deles uma função, até que no fim retorna um novo array. Utilizando isso, em cada elemento do meu array eu apliquei a seguinte operação aritmética `(el*el)` que consiste em multiplicar o elemento por ele mesmo. 

Também fiz a resolução utilizando um for tradicional, que tem o mesmo resultado do que o obtido como método `map();` 

