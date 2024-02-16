def encontrar_menor_maior(arr):
    if len(arr) <= 0: return print("Array Inválida")
    menorI, maiorI = 0, 0
    for i in range(1, len(arr)):
        menorI = i if arr[menorI] > arr[i] else menorI
        maiorI = i if arr[maiorI] < arr[i] else maiorI
    print(f"O maior elemento na posição({maiorI}) = {arr[maiorI]}")
    print(f"O menor elemento na posição({menorI}) = {arr[menorI]}")

encontrar_menor_maior([1, 2, 3, 4, 5])
# encontrar_menor_maior([4, 2, 3, 1, -1, 9, 6, 2, -1, 7, 9, 7, 6, 6])