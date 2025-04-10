#include <stdio.h>


void moverTorre(int torre){
    if (torre > 0)
    {
        printf("direita \n");
        moverTorre(torre -= 1);
    }

}

void moverRainha(int rainha){
    if (rainha > 0)
    {
        printf("esquerda \n");
        moverRainha(rainha -= 1);
    }

}


void moverBispo(int bispo){
    if(bispo > 0)
    {
        printf("cima \n");
        while(bispo > 0)
        {
            printf("direita \n");
            break;
        }
        moverBispo(bispo -= 1);
    }

}


void moverCavalo(int cavalo) {
    int i = 0;

    while (i < cavalo) {
        printf("cima\n");
        i++;
    }

    printf("direita\n");
}

int main(){

printf("movendo a torre: \n");
moverTorre(5);
printf("\n\n");


printf("movendo a rainha: \n");
moverRainha(8);
printf("\n\n");


printf("movendo o bispo: \n");
moverBispo(5);
printf("\n\n");

printf("movendo o cavalo: \n");
moverCavalo(2);



}