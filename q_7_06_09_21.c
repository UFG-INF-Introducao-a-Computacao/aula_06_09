#include<stdio.h>
#include<math.h>

int main()
{
    float salario, salarioreajustado, ajuste;
   
    printf("Exercicio 7\nSalario inicial R$:"); // vai imprimir.
    scanf("%f",&salario);

    if (salario <= 300.00){
	ajuste = 0.5;
    }

    else{ 
	ajuste = 0.3;
    }

    printf("SALARIO COM REAJUSTE = %.2f\n",salario*(1.0+ajuste));

    return 0;
}