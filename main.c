#include<stdio.h>

int main(void){

    int cont = 0;
    int num;
    int maxNum = -10000;    

    for( ; ; ){

        scanf("%d", &num);

        if(num == -1)
            break;
        cont++;
        if(num > maxNum)
            maxNum = num;
    }

    if(cont)
        printf("Este es el número mayor de los ingresado: %d", maxNum);
    else
        printf("No ingresaste ni un solo número ratilla");

    return 0;
}