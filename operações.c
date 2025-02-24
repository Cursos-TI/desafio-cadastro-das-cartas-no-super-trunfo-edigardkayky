#include <stdio.h>
int main(){

    int n1, n2;
    int soma,divisao, multiplicacao,subtracao;
    
    printf("escolha um numero:\n");
    scanf("%d", &n1);

    printf("escolha o segundo numero:\n");
    scanf("%d",&n2);

    soma = n1 + n2;
    divisao = n1 / n2;
    multiplicacao = n1 * n2;
    subtracao = n1 - n2;

    printf("a soma é:%d\n",soma);
    printf("a divisao é:%d\n",divisao);
    printf("a multiplicacao é:%d\n",multiplicacao);
    printf("a subtracao é:%d\n",subtracao);

    










    return 0;
}


