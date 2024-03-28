

#include <stdio.h>

int main()
{
//declaracao das variaveis 
float nota1, nota2, soma, media;

//entrada de dados
printf("digite a nota1?");
scanf("%f",&nota1);

printf("digite a nota2?");
scanf("%f",&nota2);

soma = nota1 + nota2;
media = soma / 2;

//media
if (media<=5){
    printf("reprovado");
}
    else if (media>=6){
        printf("aprovado");
        }
        else if (media >=5 && media <=6){
            printf("vc esta de recuperação!!!");
            }
}



