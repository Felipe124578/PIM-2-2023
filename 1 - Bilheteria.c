#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int carrinho, tema, finalizar, retornar, num, codIngresso, i = 0, j = 0;

float valorIngresso;

char nomeTema[1000];

int main(){
    system("cls");
    system("clear");

    inicio:
    printf("\n============ Olá, seja bem vindo ao museu! ==============\n\nA seguir selecione um código do tema ou 0 para sair: \n");
    printf("1 - 100 anos de semana de arte moderna\n");
    printf("2 - 150 anos de Santos Dumont \n");
    printf("3 - Jogos Olímpicos de Paris 2024 \n");
    printf("4 - Copa do mundo 2002. \n");
    printf("0 - Sair.\n");
    printf("\n Código: ");
    scanf("%i", & tema);

    //erro tema
    while (!(tema == 1 || tema == 2 || tema == 3 || tema == 4 || tema == 0)){
        printf("\n=======================================================\n");
        printf("\nErro, digite o código correto: ");
        printf("\nCódigos aceitos: 1, 2, 3, 4 ou 0");
        printf("\n Código: ");
        scanf("%i", & tema);
    }


    //sair
    if (tema == 0){
        printf("\n=======================================================\n");
        printf("\nAté logo!!!\n");
        return 0;
    }
    
    if(tema == 1){
        tema = 1;
        strcpy(nomeTema , "100 Anos de Semana de Arte Moderna");
        printf("\n=======================================================\n");
        printf("\nVocê escolheu: %s\n", nomeTema);
    }

    if(tema == 2){
        tema = 2;
        strcpy(nomeTema , "150 Anos de Santos Dumont");
        printf("\n=======================================================\n");
        printf("\nVocê escolheu: %s\n", nomeTema);
    }

    if(tema == 3){
        tema = 3;
        strcpy(nomeTema , "Jogos Olímpicos de Paris: 2024");
        printf("\n=======================================================\n");
        printf("\nVocê escolheu: %s\n", nomeTema);
    }

    if(tema == 4){
        tema = 4;
        strcpy(nomeTema , "Copa do mundo 2002");
        printf("\n=======================================================\n");
        printf("\nVocê escolheu: %s\n", nomeTema);
    }

    printf("\n=======================================================\n");
    printf("\nDigite o código para selecionar o valor do ticket: \n");
    printf("1 - Entrada inteira: R$15,00\n");
    printf("2 - Meia entrada(estudante): R$7,50\n");
    printf("3 - Entrada franca: R$0,00\n");
    printf("\n Código: ");
    scanf("%i", & codIngresso);

    //erro código ingresso
    while (!(codIngresso == 1 || codIngresso == 2 || codIngresso == 3)){
        printf("\n=======================================================\n");          
        printf("\nErro, digite o código correto: ");
        printf("\nCódigos aceitos: 1, 2 ou 3: ");
        printf("\n Código: ");
        scanf("%i", & codIngresso);
        if(codIngresso < 4){
            break;
        }
    }

    if(codIngresso == 1){
        valorIngresso = 15;
    }

    if(codIngresso == 2){
        valorIngresso = 7.5;
    }

    if(codIngresso == 3){
        valorIngresso = 0;
    }
    
        
    printf("\n=======================================================\n");
    printf("\nValor total da compra: R$%.2f.\nIngresso para tema %s\nConfirme a compra com código 1 ou 0 para cancelar.\n", valorIngresso, nomeTema);
    printf("\n Código: ");
    scanf("%i", & finalizar);

    //desistir da compra
    if(finalizar == 0){
        return 0;
    }

    while (finalizar != 1){
        printf("\n=======================================================\n");          
        printf("\nErro, digite o código correto: ");
        printf("\nCódigos aceitos: 1 ou 0");
        printf("\n Código: ");
        scanf("%i", & finalizar);
        if(finalizar < 2){
            break;
        }
    }
        

    if(finalizar == 1){

        //gerador de número randomico p/ código de entrada
        srand(time(NULL));
        num = rand();


        //abrir arquivo csv
        FILE *file1;
        FILE *file2;
        FILE *file3;
        FILE *file4;
        
        file1 = fopen("confirm1.csv", "a");
        file2 = fopen("confirm2.csv", "a");
        file3 = fopen("confirm3.csv", "a");
        file4 = fopen("confirm4.csv", "a");

        //erro arquivo csv
        if(file1 == NULL){
            printf("\nErro ao abrir arquivo de confirmacão.\n");
            return 1;
        }

        if(file2 == NULL){
            printf("\nErro ao abrir arquivo de confirmacão.\n");
            return 1;
        }

        if(file3 == NULL){
            printf("\nErro ao abrir arquivo de confirmacão.\n");
            return 1;
        }

        if(file4 == NULL){
            printf("\nErro ao abrir arquivo de confirmacão.\n");
            return 1;
        }

        printf("\n=======================================================\n");  
        printf("\nCaixa final: \n");
        printf("\nIngressos para: \n");
        printf("\nTema %d - %s\n",tema, nomeTema);
        printf("\nCódigo de entrada: %i\n", num);
        printf("\nTotal da compra R$%.2f\n", valorIngresso);
        printf("\nOBS: Guarde seu códgo de entrada, ele será utilizado no ato da entrada!\n");

        //dados armazenados csv
        if(tema == 1){
            fprintf(file1, "%d\n", num);
            fclose(file1);
        }

        if(tema == 2){
            fprintf(file2, "%d\n", num);
            fclose(file2);
        }

        if(tema == 3){
            fprintf(file3, "%d\n", num);
            fclose(file3);
        }

        if(tema == 4){
            fprintf(file4, "%d\n", num);
            fclose(file4);
        }

        printf("\n\nDigite 1 para retornar ao incio ou 0 para finalizar: ");
        printf("\n\n Código: ");
        scanf("%i", & retornar);
        
        //erro retornar
        while (!(retornar == 1 || retornar == 0)){
        printf("\n=======================================================\n");
            printf("\nErro, digite o código correto: ");
            printf("\nCódigos aceitos: 1 ou 0");
            printf("\n Código: ");
            scanf("%i", & retornar);
        }

        if(retornar == 0){
            printf("\nAté logo!!!");
            return 0;
        }
        
        //retornar compra ao inicio
        if(retornar  == 1){
            goto inicio;
        }

    }

    return 0;
}