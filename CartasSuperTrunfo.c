#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { printf("Desafio SuperTrunfo\n");

printf("edigard carta\n");
    char nome_do_estado[20] = "rio_de_janeiro"  ;
    char codigo_da_carta[6] = "A01" ;
    char nome_da_cidade[25] = "Sao_goncalo"  ;
    int populacao = 896744 ;
    float area_em_km = 249.4 ;
    float pib = 20.3 ;
    int numero_de_pontos_turisticos = 20 ;

    printf("Nome do estado = %s \n",nome_do_estado);

    printf("Código da carta = %s \n",codigo_da_carta);

    printf("Nome da cidade = %s \n",nome_da_cidade);

    printf("Populacão = %d \n",populacao);

    printf("Area em KM = %.1f \n",area_em_km);

    printf("PIB = %.1fmilhões \n",pib);

    printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);

    //inicio da criação de cartas(scanf).

    printf("Agora é a sua vez!\n");

    printf("DIGITE O NOME DO SEU ESTADO:");
    
    scanf("%s", &nome_do_estado);

    printf("seu estado é: %s\n", nome_do_estado);

    printf("DIGITE O CODIGO DA CARTA:");
    printf("(exemplo:A01,B07,W92)\n");

    scanf("%s", &codigo_da_carta);

    printf("codigo da sua carta:%s\n", codigo_da_carta);

    printf("DIGITE O NOME DA CIDADE:");

    scanf("%s", &nome_da_cidade);

    printf("o nome da cidade:%s\n", nome_da_cidade);

    printf("DIGITE A POPULAÇÃO DA CIDADE:");

    scanf("%d", &populacao);

    printf("a população:%d\n", populacao);

    printf("DIGITE A AREA EM 'KM':");

    scanf("%f", &area_em_km);

    printf("sua area em KM:%f\n", area_em_km);

    printf("digite o PIB da cidade:");

    scanf("%f", &pib);

    printf("o PIB da sua cidade:%f\n",pib);

    printf("digite o numero TOTAL de pontos turisticos da cidade:");

    scanf("%d",&numero_de_pontos_turisticos);

    printf("o numero total de pontos turísticos:%d",numero_de_pontos_turisticos);

    printf("---+ SUA CARTA COMPLETA +---\n");

    // vms ver
    printf("Nome do estado = %s \n",nome_do_estado);

    printf("Código da carta = %s \n",codigo_da_carta);

    printf("Nome da cidade = %s \n",nome_da_cidade);

    printf("Populacão = %d \n",populacao);

    printf("Area em KM = %.1f \n",area_em_km);

    printf("PIB = %.1fmilhões \n",pib);

    printf("Numero de pontos turísticos = %d \n", numero_de_pontos_turisticos);

    


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
