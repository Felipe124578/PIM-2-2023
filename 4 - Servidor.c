#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void relatorio(){

    FILE *file;

    char line[1024];
    char *token;

    file = fopen("dados.csv", "r");

    printf(" ============ Relatório completo de acesso e pesquisa de satisfação ============\n");

    while (fgets(line, sizeof(line), file)) {
        token = strtok(line, ",");
        
        while (token != NULL) {
            printf("%s\n", token);
            token = strtok(NULL, ",");
        }
    }

    fclose(file);

}


int main() {
    system("cls");
    system("clear");

    FILE *file1;
    FILE *file2;
    FILE *file3;
    FILE *file4;


    char linha[100];
    int numeros[100]; 

    int soma1 = 0, contador1 = 0, media1;
    int soma2 = 0, contador2 = 0, media2;
    int soma3 = 0, contador3 = 0, media3;
    int soma4 = 0, contador4 = 0, media4;


    file1 = fopen("nota1.csv", "r");
    file2 = fopen("nota2.csv", "r");
    file3 = fopen("nota3.csv", "r");
    file4 = fopen("nota4.csv", "r");

    printf("\n =========== Balanço de Satisfação =========== \n");

    while (fgets(linha, sizeof(linha), file1)) {
        int numero;
        if (sscanf(linha, "%d", &numero) == 1) {
            numeros[contador1] = numero;
            soma1 += numero;
            contador1++;
        }
    }
    
    media1 = soma1/contador1;

    printf("\n1 - 100 anos de semana de arte moderna");
    printf("\nVotos: %d", contador1);
    printf("\nTotal votos: %d", soma1);
    printf("\nMedia votos: %d", media1);
    printf("\n\n");



    while (fgets(linha, sizeof(linha), file2)) {
        int numero;
        if (sscanf(linha, "%d", &numero) == 1) {
            numeros[contador2] = numero;
            soma2 += numero;
            contador2++;
        }
    }

    media2 = soma2/contador2;

    printf("\n2 - 150 anos de Santos Dumont");
    printf("\nVotos: %d", contador2);
    printf("\nTotal votos: %d", soma2);
    printf("\nMedia votos: %d", media2);
    printf("\n\n");


    while (fgets(linha, sizeof(linha), file3)) {
        int numero;
        if (sscanf(linha, "%d", &numero) == 1) {
            numeros[contador3] = numero;
            soma3 += numero;
            contador3++;
        }
    }

    media3 = soma3/contador3;

    printf("\n3 - Jogos Olímpicos de Paris 2024");
    printf("\nVotos: %d", contador3);
    printf("\nTotal votos: %d", soma3);
    printf("\nMedia votos: %d\n\n", media3);

        
    while (fgets(linha, sizeof(linha), file4)) {
        int numero;
        if (sscanf(linha, "%d", &numero) == 1) {
            numeros[contador4] = numero;
            soma4 += numero;
            contador4++;
        }
    }

    media4 = soma4/contador4;
    
    printf("\n4 - Copa do mundo 2002");
    printf("\nVotos: %d", contador4);
    printf("\nTotal votos: %d", soma4);
    printf("\nMedia votos: %d\n\n", media4);

    relatorio();

    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);


    return 0;
}