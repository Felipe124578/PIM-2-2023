#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


int main() {
    system("cls");
    system("clear");

    FILE *file1;
    FILE *file2;
    FILE *file3;
    FILE *file4;

    char linha[100];
    int pesquisa, i = 0, retornar, obra, info;
    int confirm1[1000];
    int confirm2[1000];
    int confirm3[1000];
    int confirm4[1000];

    file1 = fopen("confirm1.csv", "r");
    file2 = fopen("confirm2.csv", "r");
    file3 = fopen("confirm3.csv", "r");
    file4 = fopen("confirm4.csv", "r");

    while (fgets(linha, sizeof(linha), file1)){
        sscanf(linha, "%d", &confirm1[i]);
        i++;
    }

    while (fgets(linha, sizeof(linha), file2)){
        sscanf(linha, "%d", &confirm2[i]);
        i++;
    }

    while (fgets(linha, sizeof(linha), file3)){
        sscanf(linha, "%d", &confirm3[i]);
        i++;
    }

    while (fgets(linha, sizeof(linha), file4)){
        sscanf(linha, "%d", &confirm4[i]);
        i++;
    }

    inicio:
    
    printf("\n================ Olá, seja bem vindo ao museu! ===============\n");
    printf("\nA seguir digite o código de verificação de entrada:");
    printf("\n Código: ");
    scanf("%d", &pesquisa);

    for(int i = 0; i < 1000; i++){
        
        //ok
        if(pesquisa == confirm1[i]){
            printf("\n -------------------\n");
            printf("\nAcesso Liberado!!!\n");
            printf("100 Anos de Semana de Arte Moderna\n");
            infor:
            printf("\n -------------------\n");
            printf("\nSelecione o código da obra para exibir descrição: ");
            printf("\n1 - Noite Estrelada");
            printf("\n2 - Abaporu");
            printf("\n3 - Criança Morta");
            printf("\n Código: ");
            scanf("%d", &obra);

            while(!(obra == 1 || obra == 2 || obra == 3)){
                printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1, 2, 3 ou 4.\n");
                printf(" Código: ");
                scanf("%d", &obra);
            }

            if(obra == 1){
                printf("\n -------------------\n");
                printf("\nObra 1: Noite Estrelada\n");
                printf("\nUma pintura produzida por Van Gogh no ano de 1889 e se encontra hoje no museu de Nova York dês de 1941.\nNa pintura é retratado a vista de uma cidade pela janela do hospício ao amanhecer. O vilarejo no fundo foi uma invenção do pintor. \n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }           
            }

            if(obra == 2){
                printf("\n -------------------\n");
                printf("\nObra 2: Abaporu\n");
                printf("\n O Abaporu é uma das pinturas brasileira mais conhecidas e também uma das mais importantes do modernismo brasileiro.\nFoi pintada no ano de 1928 e se encontra hoje em dia no Museu de Artes Latino-Americanas em Buenos Aires.\nO nome Abaporu vem do Tupi, aba (homem, poro (gente) e ú (comer) e significa 'homem que come gente'\n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                } 
            }

            if(obra == 3){
                printf("\n -------------------\n");
                printf("\nObra 3: Criança Morta\n");
                printf("\nUma pintura feita por Candido Portinari no ano de 1944 e está no museu do MASP.\nCom essa pintura, o autor queria retratar o sofrimento das famílias brasileiras do sertão, que na época\npassavam grandes dificudades e injustiças. \n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                } 

            }


            goto continuar;
        }

        //ok
        if(pesquisa == confirm2[i]){

            printf("\n -------------------\n");
            printf("\nAcesso Liberado!!!\n");
            printf("150 Anos de Santos Dumont\n");
            infor1:
            printf("\n -------------------\n");
            printf("\nSelecione o código da obra para exibir descrição: ");
            printf("\n1 - Santos Dumond");
            printf("\n2 - Primeiro Avião");
            printf("\n3 - Primeiro Dirigível");
            printf("\n4 - 14 Bis");  
            printf("\n Código: ");
            scanf("%d", &obra);

            while(!(obra == 1 || obra == 2 || obra == 3 || obra == 4)){
                printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1, 2, 3 ou 4.\n");
                printf(" Código: ");
                scanf("%d", &obra);
            }

            if(obra == 1){
                printf("\n -------------------\n");
                printf("\nObra 1: Santos Dumond\n");
                printf("\nNo dia 20 de julho de 1873 nascia Alberto Santos Dumont, em Palmira, uma cidade no estado de Minas Gerais, Brasil.\nConhecido como ‘pai da aviação’, Santos Dumont trilhou um caminho repleto de coragem e engenhosidade.\n150 anos depois de seu nascimento, é impossível não relembrar seu talento.\n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor1;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }
                
            }

            if(obra == 2){
                printf("\n -------------------\n");
                printf("\nObra 2: Primeiro Avião\n");
                printf("\n Embora não tenha sido o inventor do avião - título que pertence aos irmãos Writght -, a primeira aeronave a ser produzida em série\n é criação de Santos Dumont. Esse título ninguém tira dele!Estamos falando do Demoiselle, que realizou seu\n primeiro voo em 1907. Mais de 100 unidades dessa máquina voadora foram produzidas até 1909. E o mais interessante de tudo: Dumont não patenteou sua invenção\n disponibilizando à sociedade os planos de sua criação. Além de genial, o nosso 'Pai da Aviação' era um sujeito bem generoso.\n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }                
            }

            if(obra == 3){
                printf("\n -------------------\n");
                printf("\nObra 3: Primeiro Dirigível\n");
                printf("\nO dirigível N-1 foi o primeiro balão motorizado da história. Criado em 1898, ele tinha 25 metros de comprimento e era movido a gasolina.\nMas o primeiro dirigível criado por Dumont não foi bem-sucedido. O voo de estreia só ocorreu dias depois do \nplanejado, pois no dia marcado o balão rasgou-se devido a uma manobra malfeita ainda em terra. Dois dias depois, o dirigível subiu e apresentou as manobras \nidealizadas, porém um imprevisto fez com que caísse de uma distância de 400 metros do chão. \n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }  
            }

            if(obra == 4){
                printf("\n -------------------\n");
                printf("\nObra 4: 14 BIS\n");
                printf("\nO 14-Bis não foi o primeiro avião. Em 1905, um ano antes de Dumont impressionar o mundo com o voo da 'Ave de Rapina' (apelido do 14-Bis)\nOs irmãos Wright voaram cerca de 40 minutos com seu Flyer III. Este voo, feito sem auxílio externo, é hoje reconhecido como o primeiro voo controlado da história. Mas isso não desmerece o grande invento do nosso 'Pai da Aviação': o 14-Bis \n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                } 
            }

            goto continuar;
        }


        if(pesquisa == confirm3[i]){
            printf("\n -------------------\n");
            printf("\nAcesso Liberado!!!\n");
            printf("Jogos Olímpicos de Paris: 2024\n");
            infor2:
            printf("\n -------------------\n");
            printf("\nSelecione o código da obra para exibir descrição: ");
            printf("\n1 - Volei de Praia");
            printf("\n2 - Triatlo e Ciclismo");  
            printf("\n3 - Tiro com Arco");
            printf("\n Código: ");
            scanf("%d", &obra);

            while(!(obra == 1 || obra == 2 || obra == 3)){
                printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1, 2, 3 ou 4.\n");
                printf(" Código: ");
                scanf("%d", &obra);
            }

            if(obra == 1){
                printf("\n -------------------\n");
                printf("\nObra 1: Volei de Praia\n");
                printf("\nA competição da modalidade Volei de Praia acontecerá em um estádio móvel.\nA arena será levada até o cartão postal de paris, a Torre Eiffel. \nJá imaginou assistir uma competição dessas sob as luzes da Torre Eiffel?\n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor2;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }
            }

            if(obra == 2){
                printf("\n -------------------\n");
                printf("\nObra 2: Triatlo e Ciclismo\n");
                printf("\nA prova de Trtiatlo e Ciclimo acontecerá na famosa 'Pont d'lena', que passa sobre o rio Sena, esta ponte liga a Torre Eiffel.\nMuita paisagem bonita para os espectadores dos jogos não acha?\n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor2;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }
            }

            if(obra == 3){
                printf("\n -------------------\n");
                printf("\nObra 3: Tiro com Arco\n");
                printf("\nA modalidade dos jogos Tiro com Arco acontecerá em um local tanto quanto histórico, lá abriga a sepultura de Napoleão Bonaparte!\nO Palácio Nacional dos Inválidos.\n");
                printf("\nDesja realizar nova pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);
                
                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor2;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }

            }

            goto continuar;
        }

        //ok
        if(pesquisa == confirm4[i]){
            printf("\n -------------------\n");
            printf("\nAcesso Liberado!!!\n");
            printf("Copa do mundo 2002\n");
            infor3:
            printf("\n -------------------\n");
            printf("\nSelecione o código da obra para exibir descrição: ");
            printf("\n1 - A Copa Asiática");
            printf("\n2 - A Surpreendente Coréia do Sul");
            printf("\n3 - Aparições de Lendas");
            printf("\n4 - O Golden Boot Compartilhado");
            printf("\n Código: ");
            scanf("%d", &obra);


            while(!(obra == 1 || obra == 2 || obra == 3)){
                printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1, 2, 3 ou 4.\n");
                printf(" Código: ");
                scanf("%d", &obra);
            }

            if(obra == 1){
                printf("\n -------------------\n");
                printf("\nObra 1: A Copa Asiática\n");
                printf("\nA Copa do Mundo de 2002 foi uma das edições mais únicas da história, uma vez que foi a primeira \ne, até agora, a única vez em que a competição foi co-organizada por dois países asiáticos: Coreia do Sul e Japão. Isso marcou a \nprimeira vez que o torneio foi realizado fora da Europa e das Américas, tornando-a verdadeiramente global. \n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor3;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }   
            }

            if(obra == 2){
                printf("\n -------------------\n");
                printf("\nObra 2: A Surpreendente Coréia do Sul\n");
                printf("\nA equipe da Coreia do Sul deixou uma marca inesquecível na história da Copa do Mundo de 2002, chegando às semifinais. \nFoi a primeira vez que a equipe sul-coreana havia avançado tão longe em um torneio de nível mundial. \nSua incrível jornada foi uma das maiores surpresas do torneio. \n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor3;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                }  
            }

            if(obra == 3){
                printf("\n -------------------\n");
                printf("\nObra 3: Aparições de Lendas\n");
                printf("\nA Copa do Mundo de 2002 testemunhou a despedida de duas lendas do futebol: o brasileiro Pelé\ne o alemão Franz Beckenbauer. Ambos tiveram papel de destaque na cerimônia de abertura, e sua \npresença na competição fez deste um evento verdadeiramente especial\n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor3;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                } 
            }

            if(obra == 4){
                printf("\n -------------------\n");
                printf("\nObra 4: O Golden Boot Compartilhado\n");
                printf("\nNa Copa do Mundo de 2002, Ronaldo, o fenômeno, do Brasil, e Miroslav Klose, da Alemanha, terminaram o torneio \ncom a mesma quantidade de gols, cada um marcando 5. Eles compartilharam o título de Chuteira de Ouro, concedido ao artilheiro da Copa do Mundo. \n");
                printf("\nDesja realizar pesquisa sobre esta obra?\nDigite 1 pra sim e 0 pra não:");
                printf("\n Código: ");
                scanf("%d", &info);

                while(!(info == 1 || info == 0)){
                    printf("\nErro!\nDigite o código novamente.\nCódigos aceitos: 1 ou 0.\n");
                    printf(" Código: ");
                }

                if(info == 1){
                    goto infor3;
                }

                if(info == 0){
                    printf("\nAté logo!\n\n");
                } 
            }

            goto continuar;
            

        }

    }

    for(int i = 0; i < 100; i++){
        if(!(pesquisa == confirm1[i])){
            printf("\nErro, código não encontrado!\n");
            goto continuar;
        }

        if(!(pesquisa == confirm2[i])){
            printf("\nErro, código não encontrado!\n");
            goto continuar;
        }

        if(!(pesquisa == confirm3[i])){
            printf("\nErro, código não encontrado!\n");
            goto continuar;
        }

        if(!(pesquisa == confirm4[i])){
            printf("\nErro, código não encontrado!\n");
            goto continuar;
        }
    }

    continuar:

    printf("\n ------------------- ");
    printf("\nRealizar nova pesquisa?\nDigite 1 pra sim e 0 pra não.\n");
    printf(" Código: ");
    scanf("%d", &retornar);

    while (!(retornar == 1 || retornar == 0)){
        printf("\nCódigo incorreto, digite novamente!\nCódigos aceitos 1 ou 0.\n");
        printf(" Código: ");
        scanf("%d", &retornar);
    }

    if(retornar == 1){
        goto inicio;
    }

    if(retornar == 0){
        printf("\nAté logo!!!\n\n");
        return 0;
    }

    return 0;
}