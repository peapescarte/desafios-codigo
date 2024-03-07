def fibonacci(n):
    if n <= 0: return print("Informe um número maior que 0")
    atual, prox = 0, 1
    print(f"Sequência de Fibonacci({n})")
    for _ in range(0, n):
        print(atual, end=" ")
        atual, prox = prox, atual + prox

fibonacci(10)