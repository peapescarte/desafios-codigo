# Soluções

Nesses desafios eu tentei ao máximo, não usar funções embutidas, que auxiliram na resolução dos desafios, por exemplo a função min e max do próprio Python.

## Fibonacci (Exercício 1)

Esse desafio eu resolvi realizar utilizando o Python, pois é uma linguagem que não utilizo muito e acho interessante.

- **Exercício 1:** Escreva um algoritmo que gere os primeiros 10 números da sequência de Fibonacci. A sequência começa com 0 e 1, e cada número subsequente é a soma dos dois anteriores.

- **Explicação:** Para resolver esse algoritmo eu resolvi criar uma função que recebe um número que seja maior ou igual a 1. Ou seja quando não estiver no alcance 1 até n, será retornado uma mensagem dizendo para o usuário fornecer um número válido. Em seguida resolvi criar duas variáveis `atual` e `prox`, essas variáveis vão ser uteís para armazenar e atualizar os valores atuais (oque serão mostrados a cada iteração) e o próximo (como o nome já diz o próximo valor da sequência) respectivamente. Então assim a cada iteração realizada após o valor da sequência em dada posição seja printada, o valor atual receberá o próximo (atual = prox) e o próximo somará a si mesmo com o atual (prox = atual + prox), assim consequetemente até chegar no caso de parada n(posição desejada).

Resumidamente essa função recebe um número maior que 0, e printa no console todas as ocorrências do fibonacci até dado número n=10. [0, 1, 1, 2, 3, 5, 8, 13, 21, 34].

```python
def fibonacci(n):
    if n <= 0: return print("Informe um número maior que 0")
    atual, prox = 0, 1
    print(f"Sequência de Fibonacci({n})")
    for _ in range(0, n):
        print(atual, end=" ")
        atual, prox = prox, atual + prox

fibonacci(10)
```
