#include <stdio.h>

int main()
{
    int numero_do_funcionario = 0;
    int numero_de_horas_trabalhadas = 0;
    double valor_que_recebe_por_hora = 0;

    scanf("%d", &numero_do_funcionario);
    scanf("%d", &numero_de_horas_trabalhadas);
    scanf("%lf", &valor_que_recebe_por_hora);

    double salario = numero_de_horas_trabalhadas * valor_que_recebe_por_hora;

    printf("NUMBER = %d\n", numero_do_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}