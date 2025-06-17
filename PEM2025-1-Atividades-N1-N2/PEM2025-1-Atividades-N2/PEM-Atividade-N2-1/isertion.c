/*-------------------------------------------------------*
*                      FATEC Ipiranga                    *
* Disciplina: Programaçao Estruturada e Modular          *
*          Prof. Veríssimo                               *
*--------------------------------------------------------*
* Objetivo do Programa:Ordenação de dados - Insertionsort*
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

void insertionSort(int *arr, int *n) {
    int aux, j;
    for (int i = 1; i < *n; i++) {
        aux = *(arr + i);
        j = i - 1;
        while (j >= 0 && *(arr + j) > aux) {
            *(arr + j + 1) = *(arr + j);
            j--;
        }
        *(arr + j + 1) = aux;
    }
}

void imprimir_array(int *arr, int *n) {
    printf("Array ordenado (Insertion Sort): ");
    for (int i = 0; i < *n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}   

int main() {
    int arr[MAX_SIZE];
    int n;
    
    entrada_array(arr, &n);
    insertionSort(&arr, &n);
    imprimir_array(&arr, &n);
    
    return 0;
}