#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { printf("Desafio SuperTrunfo\n");


    char  nome_do_estado = 'sao_paulo'  ;
    char codigo_da_carta = 'A01';
    char nome_da_cidade ='marica' ;
    int populacao = 3000;
    float area_em_km =1521.11 ;
    float pib = 699.28 ;
    int numero_de_pontos_turisticos = 50 ;

    printf("%c = nome_do_estado\n",nome_do_estado);

    printf("%c = codigo_da_carta\n",codigo_da_carta);

    printf("%c = nome_da_cidade\n",nome_da_cidade);

    printf("%d = Populacao\n",populacao);

    printf("%f = Area_em_km\n",area_em_km);

    printf("%f = pib \n",pib);

    printf ("%d= numero_de_pontos_turisticos\n",numero_de_pontos_turisticos);


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
