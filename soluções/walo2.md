# Resolução da lista - voluntariado
### Wilson Antunes Luques Oliver - 743607
Esta lista foi resolvida utilizando JavaScript. Abaixo, as descrições dos exercícios, o código da resolução e sua respectiva explicação.

## Exercício 1: Sequência de Fibonacci
>Descrição: Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

### Código:
```javascript
function fibonacci(num) {
    let seq = [0, 1]
    for (let i = 2; i < num; i++) {
        seq.push(sq[i - 1] + seq[i - 2])
    }
    return seq;
}

//Exemplo de uso
const first_10_fibonacci = fibonacci(10);
```
### Explicação
O código acima utiliza a função recursiva _fibonacci(num)_, que recebe como argumento o número de elementos da sequência, e retorna um array contendo a sequência Fibonacci do tamanho especificado. Para isso, é criado um array _seq_, com valores iniciais [0, 1], o qual será preenchido através do laço de repetição e da operação _push_. Então, _seq_ é retornado.


## Exercício 2: Inverter uma String
>Descrição: Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".

### Código
```javascript
function inverterString(string) {
    return string.split("").reverse().join("")
}

//Exemplo de uso
const saida = inverterString("ABCD")
```

### Explicação
A função _inverterString(string)_ recebe uma cadeia de caracteres como parâmetro e retorna o texto invertido. A função utiliza três métodos da linguagem JavaScript:
- _split()_: separa os caracteres da cadeia num array de strings
- _reverse()_: inverte as posições do array formado no método _split()_
- _join()_: une os elementos do array numa cadeia única

## Exercício 3: Validação de Palíndromo
>Descrição: Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, ignorando espaços, pontuação e capitalização.

### Código
```javascript
function palindrome(string) {
    for (let i = 0; i < (string.lenght())/2; i++) {
        if (string[i] != string[string.length()-i-1])
            return false
    }
    return true
}

//Exemplo de uso
const isPalindrome = palindrome("ABBA")
```
### Explicação
A função _palindrome(string)_ recebe como parâmetro uma string, cujo tamanho chamaremos de _n_, e retorna o booleano _true_ se for um palíndromo ou _false_ caso contrário. Para tal, a função utiliza um laço de repetição que compara o i-ésimo elemento com (n-i)-ésimo elemento (o primeiro com o último, o segundo com o penúltimo, e assim por diante). Caso a comparação retorne _false_, a função também retorna _false_.

## Exercício 4: Encontrar o Maior e o Menor Número
>Descrição: Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista [1, 2, 3, 4, 5], o maior número é 5 e o menor é 1.

### Código
```javascript
function greatest_smaller(array) {
    array.sort()
    return [array[0], array.pop()]
}

//Exemplo de uso
const numbers = greatest_smaller([1, 2, 0, 5, 5])
```
### Explicação
A função _greatest\_smaller(array)_ recebe um array de inteiros e retorna outro array com dois elementos, sendo eles o maior e menor valores encontrados no array inicial. Seu funcionamento consiste em ordenar o array em ordem crescente e retornar o primeiro (_array[0]_) e último (por meio da função _pop()_) elementos.

## Exercício 5: Encontrar o Maior e o Menor Número
>Descrição: Escreva um algoritmo que, dada uma lista de números, aplique a função f(x) = x^2 a cada elemento da lista, retornando uma nova lista com os resultados. Por exemplo, dada a lista [1, 2, 3, 4], o resultado deve ser [1, 4, 9, 16].

### Código
```javascript
function square(array) {
    const new_array = array.map(
        (n) => Math.pow(n,2)
    )
    return new_array
}

//Exemplo de uso
const numbers = square([1, 2, 3, 4])
```
### Explicação
A função _square(array)_ recebe um array de inteiros e retorna este mesmo array ao quadrado. A função _Array.Map_ percorre iterativamente os elementos do array e aplica a função _Math.pow(n,2)_ a cada elemento, elevando-o ao quadrado. Ao final, o novo array é retornado.
