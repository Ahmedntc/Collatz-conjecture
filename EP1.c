#include <stdio.h>

void sequencia (unsigned N){
    if (N>1)
    {
        if (N % 2 == 0)
        {
            N = N / 2;
            printf("%u \n", N);
            sequencia(N); 
        }
        else
        {
            N = 3 * N + 1;
            printf("%u \n", N);
            sequencia(N);
        }
    }  
}

unsigned passos (unsigned N)
{
    int conta = 0;
    if(N == 1)
        return conta;

    if(N > 1)
    { 
        if(N % 2 == 0)
        {
        return 1 + passos(N/2);   
        }
        else  
            return 1 + passos(3 * N + 1);
    }
}



int main(){
    int num = 0;
    printf("digite um numero inteiro positivo para iniciarmos a sequencia de collatz:\n");
    scanf("%d", &num);
    sequencia(num);
    printf("Foram feitos %u passos", passos(num));
    return 0;
}