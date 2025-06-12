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

    printf("____AGORA VAMOS VER O VENCEDOR(se o resultado for '1' vc perdeu, se for '0' você ganhou)____\n");

    printf("resultado = %d\n",RESULTADO);


char PrimeiroAtributo, SegundoAtributo;
 int PontoJogador1 = 0, PontoJogador2 = 0;



    printf("+++ ESCOLHA DUAS OPÇÕES PARA DUELAR +++\n");
printf("ESCOLHA A PRIMEIRA OPÇÃO\n");

printf("PRESSIONE '1' PARA PIB\n");
printf("PRESSIONE '2' PARA SUPER PODER\n");
printf("PRESSIONE '3' PARA NUMEROS DE PONTOS TURISTICOS");

scanf('%c',&PrimeiroAtributo);




 switch (PrimeiroAtributo)
 {
 case '1':
   printf("primeiro atributo é PIB\n");
   PrimeiroAtributo = pib2;
   pib2 > pib ? PontoJogador2 + 1 : PontoJogador1 + 1 ;

   break;

 case '2':
   printf("primeiro atributo é SUPER PODER\n");
   PrimeiroAtributo = SUPER_PODER2;
   SUPER_PODER2 > SUPER_PODER ? PontoJogador2 + 1 : PontoJogador1 + 1 ;
   break;


 
 default:
   break;
 }






    
    
    
      
    
    
    
    
      
    }






    

    return 0;
}
