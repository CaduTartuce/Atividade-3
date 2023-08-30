#include<stdio.h>

int main(){
    float altura;

    printf("Digite sua altura: ");
    scanf("%f", &altura);

    if(altura > 1.8){
        printf("Maior");
    }else if(altura < 1.8){
        printf("Menor");
    }
}