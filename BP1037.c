#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float num;

    scanf("%f", &num);

    if((num >= 0.00) && (num <= 25.00))
    {
        printf("Intervalo [0,25]\n");
    }
    else if (num >= 25.01 && num <= 50.00)
    {
        printf("Intervalo (25,50]\n");
    }
    else if (num >= 50.01 && num <= 75.00)
    {
        printf("Intervalo (50,75]\n");
    }
    else if (num >= 75.01 && num <= 100.00)
    {
        printf("Intervalo (75,100]\n");
    }
    else
    {
        printf("Fora de intervalo\n");
    }

    return 0;
}
