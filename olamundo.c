#include <stdio.h>

int main (){
    char nome[30];
    int idade;
    float altura;
    float peso;

    printf("Olá, Mundo!"); // "print" do python
    printf("- Olá, boa tarde! \n Qual seu nome? ");
    scanf("%s", nome); //Especificadores de formato: %...
    printf("Olá, %s! \n Qual sua idade? ", nome); 
    scanf("%i", &idade); //& nas varias do tipo int, float e double - só não em char!
    printf("Você tem %i anos! \n Qual é sua altura? ", idade);
    scanf("%f", &altura); //"input" do python
    printf("Você tem %.2f de altura! \n Quanto você pesa? ", altura);
    scanf("%f", &peso);
    printf("Você pesa %.2f! \n- Foi um prazer lhe conhecer, até mais!", peso);
}
