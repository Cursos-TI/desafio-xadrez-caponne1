#include <stdio.h>


int main(){
int i = 1;

printf("torre se move:\n");
for (i=1; i <= 5; i++){
    
    printf("direita\n");
}
i = 1;

printf("\n\n");
printf("bispo de move: \n");
while(i <=5 ){
    printf("cima\n");
    printf("direita\n");
    i++;
}
i = 1;


printf("\n\n");
printf("rainha se move: \n");
do{
    printf("esquerda\n");
    i++;
} while(i <= 8);

int j = 1;
printf("\n\n");
printf("cavalo se move: \n");
for(i = 1; i <= 1; i++)
{
    while (j <= 2)
    {
        printf("para baixo \n");
        j++;
    }
    printf("esquerda");
}
}