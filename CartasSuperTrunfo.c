#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() { printf("Desafio SuperTrunfo\n");

printf("edigard carta\n");
    char nome_do_estado[12] = "sao_paulo"  ;
    char codigo_da_carta[6] = "A01" ;
    char nome_da_cidade[10] = "marica"  ;
    int populacao = 3000 ;
    float area_em_km = 1521.11 ;
    float pib = 699.28 ;
    int numero_de_pontos_turisticos = 50 ;

    printf("Nome do estado = %s \n",nome_do_estado);

    printf("Código da carta = %s \n",codigo_da_carta);

    printf("Nome da cidade = %s \n",nome_da_cidade);

    printf("Populacão = %d \n",populacao);

    printf("Area em KM = %f \n",area_em_km);

    printf("PIB = %f \n",pib);

    printf ("Numero de pontos turísticos = %d \n",numero_de_pontos_turisticos);


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
