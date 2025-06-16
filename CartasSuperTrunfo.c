#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() { printf("Desafio SuperTrunfo\n");
printf("-----+ BEM VINDO AO JOGO SUPER TRUNFO +-----\n");
printf("------+ CARTA DE JOGADOR 1: Edigard +------ \n");
    int EscolhaJogador, EscolhaComputador;
srand(time(0));
    char nome_do_estado[20] = "rio_de_janeiro"  ;
    char codigo_da_carta[6] = "A01" ;
    char nome_da_cidade[25] = "Sao_goncalo"  ;
    int populacao = 896744 ;
    float area_em_km = 249.4 ;
    float pib = 20300000.0 ;
    int numero_de_pontos_turisticos = 20 ;
    float desidade_pupulacional = populacao / area_em_km ;
    float pib_per_capita = pib / populacao ;
    float SUPER_PODER = populacao + area_em_km + pib + numero_de_pontos_turisticos + desidade_pupulacional + pib_per_capita ;

    //VARIAVEIS DE CARTA DOIS A BAIXO...

    char nome_do_estado2[20] ;
    char codigo_da_carta2[6]  ;
    char nome_da_cidade2[25] ;
    int populacao2   ;
    float area_em_km2   ;
    float pib2   ;
    int numero_de_pontos_turisticos2 ;
    float desidade_pupulacional2 = populacao2 / area_em_km2 ;
    float pib_per_capita2 = pib2 / populacao2 ;
    float SUPER_PODER2 = populacao2 + area_em_km2 + pib2 + numero_de_pontos_turisticos2 + desidade_pupulacional2 + pib_per_capita2 ;
    int RESULTADO = SUPER_PODER > SUPER_PODER2 ;



    printf("Nome do estado = %s \n",nome_do_estado);

    printf("Código da carta = %s \n",codigo_da_carta);

    printf("Nome da cidade = %s \n",nome_da_cidade);

    printf("Populacão = %d \n",populacao);

    printf("Area em KM = %.2f \n",area_em_km);

    printf("PIB = %.2f \n",pib);

    printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);

    printf("densidade_populacional = %.2f \n", desidade_pupulacional);

    printf("pib per capita = %.2f \n",pib_per_capita);

    printf("SUPER PODER IGUAL A= %.2f \n",SUPER_PODER);

    //inicio da criação de cartas(scanf).



    printf("------+ Agora é a sua vez! +-----\n");

    printf("DIGITE O NOME DO SEU ESTADO:");
    
    scanf("%s", &nome_do_estado2);

    printf("seu estado é: %s\n", nome_do_estado2);

    printf("DIGITE O CODIGO DA CARTA:");
    printf("(exemplo:A01,B07,W92)\n");

    scanf("%s", &codigo_da_carta2);

    printf("codigo da sua carta:%s\n", codigo_da_carta2);

    printf("DIGITE O NOME DA CIDADE:");

    scanf("%s", &nome_da_cidade2);

    printf("o nome da cidade:%s\n", nome_da_cidade2);

    printf("DIGITE A POPULAÇÃO DA CIDADE:");

    scanf("%d", &populacao2);

    printf("a população:%d\n", populacao2);

    printf("DIGITE A AREA EM 'KM':");

    scanf("%f", &area_em_km2);

    printf("sua area em KM:%.2f\n", area_em_km2);

    printf("digite o PIB da cidade:");

    scanf("%f", &pib2);

    printf("o PIB da sua cidade:%.2f\n",pib2);

    printf("digite o numero TOTAL de pontos turisticos da cidade:");

    scanf("%d",&numero_de_pontos_turisticos2);

    printf("o numero total de pontos turísticos:%d\n",numero_de_pontos_turisticos2);

    printf("-----+ SUA CARTA COMPLETA +-----\n");

    // vms ver

    printf("Nome do estado = %s \n",nome_do_estado2);

    printf("Código da carta = %s \n",codigo_da_carta2);

    printf("Nome da cidade = %s \n",nome_da_cidade2);

    printf("Populacão = %d \n",populacao2);

    printf("Area em KM = %.2f \n",area_em_km2);

    printf("PIB = %.2f \n",pib2);

    printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos2);

    printf("densidade_populacional = %.2f \n",desidade_pupulacional2);

    printf("pib per capita = %.2f \n",pib_per_capita2);

    printf("SUPER PODER IGUAL A= %.2f \n",SUPER_PODER2);

 // Escolhas de dois atributos para duelo
    char atributo1, atributo2;
    int pontosJogador = 0, pontosComputador = 0;

    printf("\n+++ ESCOLHA DOIS ATRIBUTOS PARA DUELAR +++\n");
    printf("1 - PIB\n");
    printf("2 - Super Poder\n");
    printf("3 - Pontos Turísticos\n");
    printf("4 - PIB per Capita\n");

    printf("Escolha o primeiro atributo (1-4): ");
    scanf(" %c", &atributo1);

    printf("Escolha o segundo atributo (1-4): ");
    scanf(" %c", &atributo2);

    // Função para duelo
    char atributos[2] = {atributo1, atributo2};
    for (int i = 0; i < 2; i++) {
        switch (atributos[i]) {
            case '1':
                printf("\nDuelo %d: PIB\n", i + 1);
                if (pib2 > pib) {
                    printf("Você venceu este duelo!\n");
                    pontosJogador++;
                } else if (pib2 < pib) {
                    printf("O computador venceu este duelo!\n");
                    pontosComputador++;
                } else {
                    printf("Empate neste duelo!\n");
                }
                break;

            case '2':
                printf("\nDuelo %d: Super Poder\n", i + 1);
                if (SUPER_PODER2 > SUPER_PODER) {
                    printf("Você venceu este duelo!\n");
                    pontosJogador++;
                } else if (SUPER_PODER2 < SUPER_PODER) {
                    printf("O computador venceu este duelo!\n");
                    pontosComputador++;
                } else {
                    printf("Empate neste duelo!\n");
                }
                break;

            case '3':
                printf("\nDuelo %d: Pontos Turísticos\n", i + 1);
                if (numero_de_pontos_turisticos2 > numero_de_pontos_turisticos) {
                    printf("Você venceu este duelo!\n");
                    pontosJogador++;
                } else if (numero_de_pontos_turisticos2 < numero_de_pontos_turisticos) {
                    printf("O computador venceu este duelo!\n");
                    pontosComputador++;
                } else {
                    printf("Empate neste duelo!\n");
                }
                break;

            case '4':
                printf("\nDuelo %d: PIB per Capita\n", i + 1);
                if (pib_per_capita2 > pib_per_capita) {
                    printf("Você venceu este duelo!\n");
                    pontosJogador++;
                } else if (pib_per_capita2 < pib_per_capita) {
                    printf("O computador venceu este duelo!\n");
                    pontosComputador++;
                } else {
                    printf("Empate neste duelo!\n");
                }
                break;

            default:
                printf("\nAtributo %d inválido. Nenhum ponto será atribuído.\n", i + 1);
                break;
        
    }

    // Resultado final
    printf("\n===== RESULTADO FINAL =====\n");
    printf("Seus pontos: %d\n", pontosJogador);
    printf("Pontos do Computador: %d\n", pontosComputador);

    if (pontosJogador > pontosComputador) {
        printf("🎉 Parabéns! Você venceu o jogo!\n");
    } else if (pontosComputador > pontosJogador) {
        printf("💻 O computador venceu o jogo!\n");
    } else {
        printf("🤝 Empate!\n");
    }


    return 0
  }

