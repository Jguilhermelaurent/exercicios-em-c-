#include <stdio.h>
#include <stdlib.h>
int main(){
  
    printf("Digite as notas de todos os alunos:  \n");

    int i, lista[10, 5, 3, 8, 20, 2, 7];
    int maior = lista[0];
    for (int i = 1; i < 7; ++i)
    {
        if (maior <lista[i])
        {
          maior = lista[i];
        }
    }
      printf(" Maior =  %d\n", maior );
      
    
    return 0;
}