#include<stdio.h>
#include<stdlib.h>

int fibonacci(int n);
void main()
{
    printf ("Digite a posição de inicio: ");
    scanf("%d", &n);
    printf("Posicao %d da sequencia de fibonnaci: %d", n, fibonacci(n));
}
 
long fibonacci(int n)
{
    int contador;
     int x = 0, z = 1;
    
    if(n % 2 == 0) // verificação de numero par
    {
        for(contador = 2; contador != n; contador = contador + 2)
        {
            x = x + z;
            z = x + z;
        }
        return z;
    }
    else
    {
        for(contador = 1; contador != n; contador = contador + 2)
        {
            x = x + z;
            z = x + z;
        }
            return x;
    }
}