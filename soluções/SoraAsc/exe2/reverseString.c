#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void reverseString(char* s)
{
    size_t tamanho = strlen(s);
    int i = 0;
    
    // +1 para contemplar o caracter de fim da string
    char *nova_string = malloc((tamanho + 1) * sizeof(char)); 

    memset(nova_string, 0, tamanho); // Limpa o valor da nova_string, evitando lixo residual.
    
    for(i = 0; i < tamanho; i++)
        nova_string[i] = s[tamanho - i - 1];
    nova_string[tamanho] = '\0'; // Adiciona o caracter de fim no final da string
    
    printf("Entrada: %s\n", s);
    printf("Saída: %s", nova_string);

    free(nova_string);
}

int main()
{
    reverseString("abcd");
    return 0;
}