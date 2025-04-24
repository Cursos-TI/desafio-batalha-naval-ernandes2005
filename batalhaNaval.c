#include <stdio.h>


int main(){

    //iniciando tabuleiro

    int tabuleiro [10][10];
    int i,j;

     for (i = 0; i < 10; i++){
      for (j = 0; j < 10; j++){
            tabuleiro[i][j] = '0';
     }
      }

      //adicionando os navios

      for (j = 1; j <= 3; j++){
       tabuleiro[4][j] = '3'; // navio horizontal
       }
      
      for (i = 5; i <= 7; i++){
       tabuleiro[i][7] = '3'; // navio vertical
       }
  
        
     //mostrar tabuleiro

     printf("   ");
     for (j = 0; j < 10; j++){
        printf("%2d", j);
    }
        printf("\n");

        for (i = 0; i < 10; i++){
            printf(" %2d", i);
         for (j = 0; j < 10; j++){
            printf(" %c", tabuleiro[i][j]);
        }
        printf("\n");
    }
        


      

    return 0;
}