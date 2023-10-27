#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main(){
    system("cls");
    system("clear");

    char nome[100];
    char nomeTema[1000];

    int tema, finalizar;
    int nota1, nota2, nota3, nota4;

    FILE *file1;
    FILE *file2;
    FILE *file3;
    FILE *file4;
    FILE *arquivo;

    file1 = fopen("nota1.csv", "a");
    file2 = fopen("nota2.csv", "a");
    file3 = fopen("nota3.csv", "a");
    file4 = fopen("nota4.csv", "a");
    arquivo = fopen("dados.csv", "a");
    
    if(file1 == NULL){
        printf("\nErro 1!");
    }
    if(file2 == NULL){
        printf("\nErro 2!");
    }
    if(file3 == NULL){
        printf("\nErro 3!");
    }
    if(file4 == NULL){
        printf("\nErro 4!");
    }
    if(arquivo == NULL){
        printf("\nErro 5!");
    }

    inicio:

    printf("\n============== Pesquisa de satisfação ==================\n");

    printf("\nDigite seu nome para realizar a pesquisa: \n");
    printf(" Nome: ");
    scanf("%s", &nome);

    printf("\nDigite o código para selecionar o tema: \n");
    printf("1 - 100 anos de semana de arte moderna.\n");
    printf("2 - 150 anos de Santos Dumont. \n");
    printf("3 - Jogos Olímpicos de Paris 2024. \n");
    printf("4 - Copa do mundo 2002.\n");
    printf("\n Código: ");
    scanf("%i", & tema);

    while(!(tema == 1 || tema == 2 || tema == 3 || tema == 4)){
        printf("\nErro, digite novamente o código correto. Códigos aceitos: \n");
        printf("1 - 100 Anos de Semana de Arte Moderna.\n");
        printf("2 - 150 Anos de Santos Dumont. \n");
        printf("3 - Jogos Olímpicos de Paris 2024. \n");
        printf("4 - Copa do mundo 2002. \n");
        printf("\n Código: ");
        scanf("%i", & tema);
    }

    if(tema == 1){
        strcpy(nomeTema , "100 Anos de Semana de Arte Moderna");
    }

    if(tema == 2){
        strcpy(nomeTema , "150 Anos de Santos Dumont");
    }

    if(tema == 3){
        strcpy(nomeTema, "Jogos Olímpicos de Paris 2024");
    }

    if(tema == 4){
        strcpy(nomeTema, "Copa do mundo 2002");
    }

    printf("\n == Com base em sua experiência, responda com números de 0 a 5.\nConsiderando 0 como nenhum e 5 como muito: \n");
    
    //1
    printf("\n - Qual nível de impacto este tema teve sobre você?");
    printf("\n Código: ");
    scanf("%i", & nota1);
    while (!(nota1 == 0 || nota1 == 1 || nota1 == 2 || nota1 == 3 || nota1 == 4 || nota1 == 5)){
        printf("\nErro, digite novamente o valor correto: ");
        printf("\n Código: ");
        scanf("%i", & nota1);
    }

    //2
    printf("\n - Como você considera o nível de importância deste tema para sociedade atual?");
    printf("\n Código: ");
    scanf("%i", & nota2);
    while (!(nota2 == 0 || nota2 == 1 || nota2 == 2 || nota2 == 3 || nota2 == 4 || nota2 == 5)){
        printf("\nErro, digite novamente o valor correto: ");
        printf("\n Código: ");
        scanf("%i", & nota2);
    }

    //3
    printf("\n - Qual a probablidade de você indicar este tema para um amigo?");
    printf("\n Código: ");
    scanf("%i", & nota3);
    while (!(nota3 == 0 || nota3 == 1 || nota3 == 2 || nota3 == 3 || nota3 == 4 || nota3 == 5)){
        printf("\nErro, digite novamente o valor correto: ");
        printf("\n Código: ");
        scanf("%i", & nota3);
    }

    //4
    printf("\n - Qual seu nivel de satisfação com o tema?");
    printf("\n Código: ");
    scanf("%i", & nota4);
    while (!(nota4 == 0 || nota4 == 1 || nota4 == 2 || nota4 == 3 || nota4 == 4 || nota4 == 5)){
        printf("\nErro, digite novamente o valor correto: ");
        printf("\n Código: ");
        scanf("%i", & nota4);
    }

    int soma = nota1 + nota2 + nota3 + nota4;

    fprintf(arquivo, "Nome: %s, Tema: %s, Satisfacao: %d\n", nome, nomeTema, soma);
    fclose(arquivo);

    if(tema == 1){
        fprintf(file1,"%d\n", soma);
        fclose(file1);
        printf("\nDados salvos!\nMuito obrigado.\n\n");
    }

    if(tema == 2){
        fprintf(file2,"%d\n", soma);
        fclose(file2);
        printf("\nDados salvos!\nMuito obrigado.\n\n");
    }

    if(tema == 3){
        fprintf(file3,"%d\n", soma);
        fclose(file3);
        printf("\nDados salvos!\nMuito obrigado.\n\n");
    }

    if(tema == 4){
        fprintf(file4,"%d\n", soma);
        fclose(file4);
        printf("\nDados salvos!\nMuito obrigado.\n\n");
    }
    printf("\n --------------- \n");
    printf("\nNova pesquisa?\n");
    printf("Digite 1 pra sim ou 0 pra não.\n");
    printf("\n Código: ");
    scanf("%d", &finalizar);

    while (!(finalizar == 1 || finalizar == 0)){
        printf("\nErro!!!\nDigite novamente o código.\nCódigos aceitos: 1 ou 0.\n");
        printf(" Código: ");
        scanf("%d", &finalizar);
    }

    if(finalizar == 0){
        printf("\nAté logo!!!\n\n");
        return 0;
    }

    if(finalizar == 1){
        goto inicio;
    }
    
    return 0;
}