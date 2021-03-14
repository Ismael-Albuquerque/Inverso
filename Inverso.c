#include <stdio.h>

int main ()
{
    int inverso,numero, n;
    inverso = 0;

    printf("Insira um numero de 100 a 999:\n");

    scanf("%d", &numero);

    if(numero==0)
    {
        printf("%d\n", numero);
    }

    else{

        for (;numero>0;)
        {
        n = numero %10;
        inverso = inverso * 10 + n;
        numero/=10;
        }
        printf( "Numero inverso = %d\n", inverso );

    }

   return 0;
}
