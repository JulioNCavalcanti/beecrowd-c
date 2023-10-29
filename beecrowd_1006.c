#include <stdio.h>

int main()
{
    double nota1 = 0;
    double nota2 = 0;
    double nota3 = 0;

    scanf("%lf", &nota1);
    scanf("%lf", &nota2);
    scanf("%lf", &nota3);

    double media = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}