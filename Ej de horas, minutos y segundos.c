#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas, minutos, segundos;
    printf("Introduzca la hora: ");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);

    if (segundos ==59)
    {
        segundos = 0;
    if (minutos == 59)
     {
        minutos = 0;
    if (horas == 23)
            horas = 0;
     else
     horas = horas + 1;
     }
     else
     minutos = minutos + 1;

     }
     else
     segundos += 1;

     printf("%.2d:%.2d:%.2d", horas, minutos, segundos);

    return 0;
}
