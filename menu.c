#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Media\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1: printf("Calcular a Media\n");
            printf("Digite a primeira nota:\n");
            scanf("%f", &nota1);
            printf("digite a segunda nota:\n");
            scanf("%f", &nota2);
            media = (nota1 + nota2) / 2;
            printf("media = %.2f \n", media);
    break;

    case 2: printf("Determinar Status\n");
            printf("Digite a média do estudante: ");
      scanf("%f", &media);

      if (media >= 7.0) {
        printf("Status: Aprovado\n");
      } else if (media >= 5.0) {
        printf("Status: Recuperação\n");
      } else {
        printf("Status: Reprovado\n");
      }
    break;

    case 3: printf("Sair do Programa\n");
            printf("saindo...|n");

    default: printf("Opção Invalida\n");

  }


    return 0;
  }