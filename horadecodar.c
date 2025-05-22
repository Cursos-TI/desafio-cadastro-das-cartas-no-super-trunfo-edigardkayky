#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int EscolhaJogador, EscolhaComputador;
srand(time(0));

printf("+++ jogo jokenpô +++\n");
printf("escolha uma opção\n");
printf("1.PEDRA\n");
printf("2.PAPEL\n");
printf("3.TESOURA\n");
printf("Escolha: \n");
scanf("%d", &EscolhaJogador);

EscolhaComputador = rand() % 3 + 1 ;

switch (EscolhaJogador)
{
case 1:
    printf("Jogador: Pedra - \n");
    break;
case 2:
    printf("Jogador: papel - \n");
    break;
case 3:
    printf("Jogador: tesoura - \n");
    break;
default:
 printf("opção invalida\n");
    break;
    switch (EscolhaComputador)
{
case 1:
    printf("computador: Pedra\n");
    break;
case 2:
    printf("computador: papel\n");
    break;
case 3:
    printf("computador: tesoura\n");
    break;

    
}











}