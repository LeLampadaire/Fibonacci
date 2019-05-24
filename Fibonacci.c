#include <stdio.h>
#include <stdlib.h>

int main(){
    int N, i, nbr, F1=1, F0=0;

    do{
        printf("Encodez le nombre de rang : ");
        fflush(stdin);
        scanf("%d",&N);
    }while(N < 0);

    if(N == 0 || N == 1){
        printf ("N = %d", N);
    }else{
        for(i=2;i <= N;i++){
            nbr = F0 + F1;
            F0 = F1;
            F1 = nbr;
        }
    }

    printf ("\n-> Nombre de Fibonacci : %d\n", nbr);

    return 0;
}
