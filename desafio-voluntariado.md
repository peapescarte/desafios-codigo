# Desafio para candidatos ao voluntariado

Boas vindas ao PEA Pescarte! Este desafio tem a intenção de testar suas habilidades e conhecimentos em lógica.

A lista é composta por desafio de algoritmos, agnósticos a qualquer linguagem de programação, então sinta-se a vontade para usar qualquer uma a sua escolha.

Algumas sugestões são:
- `C`
- `Python`
- `Elixir`
- `Ruby`
- `JavaScript`

Caso não tenha familiariedade com nenhuma linguagem de programação, você pode usar linguagem natural ou [Portugol](https://dgadelha.github.io/Portugol-Webstudio/).

## Como resolver esta lista?

Seguindo o tutorial [deste documento](./tutorial-git.md), clone este repositório e resolva a lista da forma que preferir. Ao final basta abrir uma PR (pull request) para este mesmo repositório.

Observação:
> Esta lista está escrita em "markdown", caso não saiba a sintaxe, consulte nosso [glossário de markdown](./tutorial-markdown.md)

### Critérios de Avaliação

Além da solução implementada em alguma linguagem de programação ou portugol, é necessário que haja uma explicação em linguagem natural da lógica usada para implementar o algoritmo. Por exemplo:

**Exercício:** Algoritmo que some 2 algoritmos inteiros
**Solução**:
  - Explicação:
  > Este algoritmo implementa uma função que dado dois algorismos inteiros naturais, aplica a operação matématica de soma aos respectivos valores.
  - Código:
  ```elixir
  @spec soma(integer, integer) :: integer
  def soma(a, b) do
    a + b
  end
  ```

## Exercício 1: Sequência de Fibonacci
Descrição: Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

## Exercício 2: Inverter uma String
Descrição: Escreva um algoritmo que receba uma string como entrada e retorne essa string invertida. Por exemplo, se a entrada for "abcd", a saída deve ser "dcba".

## Exercício 3: Verificação de Palíndromo
Descrição: Escreva um algoritmo que verifique se uma palavra ou frase é um palíndromo. Um palíndromo é uma palavra, frase, número ou outra sequência de caracteres que lê o mesmo para frente e para trás, ignorando espaços, pontuação e capitalização.

## Exercício 4: Encontrar o Maior e o Menor Número
Descrição: Dada uma lista de números inteiros, escreva um algoritmo que identifique o maior e o menor número na lista. Por exemplo, para a lista `[1, 2, 3, 4, 5]`, o maior número é 5 e o menor é 1.

## Exercício 5: Mapeamento de Lista
Descrição: Escreva um algoritmo que, dada uma lista de números, aplique a função `f(x) = x^2` a cada elemento da lista, retornando uma nova lista com os resultados. Por exemplo, dada a lista `[1, 2, 3, 4]`, o resultado deve ser `[1, 4, 9, 16]`.
