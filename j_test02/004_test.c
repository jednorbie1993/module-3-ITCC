#include <stdio.h>

int main() {

    FILE *aux;

    aux = fopen("auxiliary.txt", "w");

    fprintf(aux, "13. Hello Auxiliary Port\n");

    fclose(aux);

    return 0;
}