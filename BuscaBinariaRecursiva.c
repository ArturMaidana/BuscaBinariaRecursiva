#include <stdio.h>

int Busca(int lista[], int inicio, int fim, int elemento) {
    if (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (lista[meio] == elemento) {
            return 1;  
        } else if (lista[meio] < elemento) {
            return Busca(lista, meio + 1, fim, elemento);
        } else {
            return Busca(lista, inicio, meio - 1, elemento);
        }
    }

    return 0;  
}

int main() {
    int lista[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int tamanho = sizeof(lista) / sizeof(lista[0]);
    int elemento;
    
    printf("Digite um número: ");
    scanf("%d", &elemento);

    if (Busca(lista, 0, tamanho - 1, elemento)) {
        printf("%d está presente na lista.\n", elemento);
    } else {
        printf("%d não está presente na lista.\n", elemento);
    }

    return 0;
}
