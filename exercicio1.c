#include<stdio.h>

main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        printf("Maior de idade");
    }else if(idade < 18){
        printf("Menor de idade");
    }
    
}