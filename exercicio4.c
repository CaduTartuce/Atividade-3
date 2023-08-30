#include<stdio.h>

int main(){

    float peso;

    printf("Digite seu peso: ");
    scanf("%f", &peso);

    if(peso < 60){
        printf("Menor");
    }else if(peso > 60){
        printf("Maior");
    }

}