#include <stdio.h>


int main(){
    int numeroNormal = 2147483647; // valor maxímo de int
    long int numeroGrande = 2147483647;

    printf("Número regular (int): %d\n", numeroNormal);
    printf("Número grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // valor maior que o maximo de int
    printf("Número grande atualizado (long int): %ld\n", numeroGrande);
}