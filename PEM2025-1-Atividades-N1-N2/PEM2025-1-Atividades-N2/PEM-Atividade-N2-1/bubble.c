    /*-------------------------------------------------------*
    *                      FATEC Ipiranga                    *
    * Disciplina: Programaçao Estruturada e Modular          *
    *          Prof. Veríssimo                               *
    *--------------------------------------------------------*
    * Objetivo do Programa: Ordenação de dados - Bubblesort  *
    * Data - 13/06/2025                                      * 
    * Autor: Guilherme Rodrigues dos Santos                  *
    *--------------------------------------------------------*/
#include <stdio.h>
#define MAX_SIZE 100

void entrada_array(int *arr, int *n) {
    printf("Digite o numero de elementos (max %d): ", MAX_SIZE);
    scanf("%d", n);
    
    if (*n > MAX_SIZE || *n <= 0) {
        printf("Tamanho invalido! Usando %d elementos.\n", MAX_SIZE);
        *n = MAX_SIZE;
    }
    
    printf("Digite os %d numeros:\n", *n);
    for (int i = 0; i < *n; i++) {
        scanf("%d", arr + i);
    }
}

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int *n) {
    for (int i = 0; i < *n - 1; i++) {
        for (int j = 0; j < *n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                troca(arr + j, arr + j + 1);
            }
        }
    }
}

void imprimir_array(int *arr, int *n) {
    printf("Array ordenado (Bubble Sort): ");
    for (int i = 0; i < *n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr[MAX_SIZE];
    int n;
    
    entrada_array(&arr, &n);
    bubbleSort(&arr, &n);
    imprimir_array(&arr, &n);
    
    return 0;
}