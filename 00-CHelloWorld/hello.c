#include<stdio.h>

int main (void){
    FILE *texto;
    printf("Hola, mundo!\n");    
    texto = fopen("output.txt", "w");
    fprintf(texto, "Hola, mundo!");
    fclose(texto);
}