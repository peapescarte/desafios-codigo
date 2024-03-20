# A lista foi resolvida utilizando Elixir

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
- Explicação:
> Um pouco diferente do requisitado, esse algoritmo pergunta ao usuário qual número da sequência de Fibonacci ele deseja, calculando-o de maneira recursiva e imprimindo na tela todos os números até o resultado desejado. 
- Código:
```elixir
defmodule Fibonacci do

  #getting the desired index in the fibonacci sequence by the user.
  defp number do
    {n, _} = IO.gets("Type in the n-th number of the fibonacci sequence you want: ") |> Integer.parse()
    n
  end

  #calculates the value of index n, decreasing the variable n by 1 at each call.
  defp fib(n, acc, prev) when n > 1 do
    IO.puts(acc)
    next = acc + prev
    fib(n - 1, next, acc)
  end

  #When n hits 1, prints the result, since acc equals to the last calculated value of the sequence.
  #If the user typed n = 0, returns 0.
  defp fib(n, acc, _prev) when n <= 1 do
    cond do
      n == 1 -> IO.puts("The number is: #{acc}")
      n == 0 -> IO.puts("The number is: 0")
    end
  end

  #executes the program, so automatically gets the value of n typed by the user,
  #then sends it to the function fib/3, returning the result.
  def program do
    number() |> fib(1,0)
  end
end
Fibonacci.program

```
## Exercício 2: Inverter uma String
- Explicação:
> Esse algoritmo recebe do usuário a string desejada, e então, calcula a extensão dela, e então, a partir de uma string vazia, concatena o valor encontrado no último index, depois o penúltimo, e assim até alcançar o index 0, onde a string se encontra invertida.

- Código:
```elixir
defmodule Reverse do
  def input do
    user_string = IO.gets("type the string you want to reverse: ")
    length = String.length(user_string) -1
    reverse("", length, user_string)
  end
  def reverse(string, n, user_string) when n != 0 do
   reverse(string <> String.at(user_string, n), n - 1, user_string)
  end
  def reverse(string, n, user_string) when n == 0 do
    IO.puts(string <> String.at(user_string, n))
  end
end
Reverse.input()
```
## Exercício 3: Verificação de Palíndromo
- Explicação:
> O algoritmo recebe a string do usuário, e realiza um filtro, removendo whitespaces, espaços e a deixa uniformemente capitalizada. Após isso, é calculada a extensão da string, e então o valor no último index é comparado com o primeiro, o do segundo com o penúltimo, e assim por diante. Caso em algum momento a comparação retorne false, o programa é interrompido, com o output de que não é um palíndromo, Caso todas as verificações sejam feitas com sucesso, o programa termina indicando ser um palíndromo.

- Código:

```elixir
defmodule Palindrome do
  def input do
    IO.gets("Type in the word you want to check (case and space sensitive): ") |> String.trim() |> String.downcase() |> String.replace(" ", "")
  end
  def is_palindrome(string, n, i) do
    cond do
      String.at(string, i) == String.at(string, n) and n > i -> is_palindrome(string, n - 1, i + 1)
      String.at(string, i) == String.at(string, n) and n <= i -> IO.puts ("palindrome")
      String.at(string, i) != String.at(string, n) -> IO.puts("not palindrome")
    end
  end
  def program do
    string = input()
    n = String.length(string) - 1
    is_palindrome(string, n, 0)
  end
end
Palindrome.program
```

## Exercício 4: Encontrar o Maior e o Menor Número
- Explicação:
> É dada uma lista, definida como anotação de módulo, para preservar legibilidade e reduzir número de parâmetros. São definidas as funções input, que realiza a chamada das outras funções de cálculo: Lower e Higher. Neste caso, ambas tem a mesma linha de raciocínio, apenas uma utilizando a comparação "maior que", enquanto a outra utiliza "menor que". É realizada a comparação desde o primeiro index, utilizando o index atual (n) e o subsequente (i). Caso o valor em n satisfaça melhor a comparação, ele será comparado com o valor encontrado em i+1, e assim por diante. Caso contrário, o valor em n será substituído pelo valor em i, e será comparado posteriomente com o valor em i+1. Ao fim da execução das duas funções, encontramos o menor e o maior valor presentes na lista.

- Código:
```elixir
defmodule Evaluate do

  @list [7, -1, 3, 82, 97, 3, 5, 10]

  def input do
    lower(Enum.at(@list, 0), Enum.at(@list, 1))
    highest(Enum.at(@list, 0), Enum.at(@list, 1))
  end
  def lower(number, i) when i < length(@list) - 1 do
    if number < Enum.at(@list, i) do
      lower(number, i + 1)
    else
      lower(Enum.at(@list, i), i + 1)
    end
  end
  def lower(number, i) when i == length(@list) - 1 do
    IO.puts("the lower number is:")
    if number < Enum.at(@list, i) do
      IO.puts(number)
    else
      IO.puts(Enum.at(@list, i))
    end
  end

  def highest(number, i) when i < length(@list) - 1 do
    if number > Enum.at(@list, i) do
      highest(number, i + 1)
    else
      highest(Enum.at(@list, i), i + 1)
    end
  end
  def highest(number, i) when i == length(@list) - 1 do
    IO.puts("the highest number is:")
    if number > Enum.at(@list, i) do
      IO.puts(number)
    else
      IO.puts(Enum.at(@list, i))
    end
  end
end
Evaluate.input()
```

## Exercício 5: Mapeamento de Lista
- Explicação:
> Esse algoritmo implementa o Map. Dada a lista (definida em module annotation para legibilidade), é calculada sua extensão. A função mapeamento é chamada, em primeira instância, recebendo uma lista vazia como argumento, além do index 0. Após isso, são feitas chamadas recursivas, concatenando a lista da chamada atual com o valor encontrado no index atual na lista original, porém elevado ao quadrado, essa nova lista é utilizada como argumento para a próxima chamada, além do index atual + 1. Ao encontrar o último index da lista original, o programa realiza o último cálculo e mostra ao usuário a nova lista que foi criada.

- Código:

```elixir
defmodule Main do
  @list [1, 2, 3, 4, 5, 6]
  @length length(@list) - 1

  def mapeamento(list, n) when n < @length do
    mapeamento(list ++ [Enum.at(@list, n)**2], n+1)
  end

  def mapeamento(list, n) when n == @length do
    IO.inspect(list ++ [Enum.at(@list, n)**2])
  end

end

Main.mapeamento([], 0)

```
