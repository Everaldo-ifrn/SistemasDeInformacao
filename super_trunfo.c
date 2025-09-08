#include <stdio.h>

int main (){
    char estado1;
    char codigoCarta1 [20];
    char nomeCidade1 [20];
    int população1;
    float area1;
    float pib1;
    int n_PontosTuristicos1;

    char estado2;
    char codigoCarta2 [20];
    char nomeCidade2 [20];
    int população2;
    float area2;
    float pib2;
    int n_PontosTuristicos2;

    printf("Bem vindo(a) ao Super-Trunfo! \n");

    printf("- Carta 1 -\n");
    printf("Digite a letra do Estado: ");
    scanf("%c", &estado1);

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade1);

    printf("Digite a população da cidade: ");
    scanf("%i", &população1);

    printf("Digite a área em km² da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &n_PontosTuristicos1);

    printf("- Carta 2 -\n");
    printf("Digite a letra do Estado: ");
    scanf(" %c", &estado2); // o espaço antes do %C é para evitar do scanf ler o \n como caracter!

    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);

    printf("Digite a população da cidade: ");
    scanf("%i", &população2);

    printf("Digite a área em km² da cidade: ");
    scanf(" %f", &area2); // o espaço antes do %f é para evitar do scanf ler o \n como caracter!

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%i", &n_PontosTuristicos2);

    printf("- Vamos ver suas cartas!\n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigoCarta1);
    printf("Nome da Cidade: %s \n", nomeCidade1);
    printf("População: %i \n", população1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %i \n", n_PontosTuristicos1);

    printf("Carta 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigoCarta2);
    printf("Nome da Cidade: %s \n", nomeCidade2);
    printf("População: %i \n", população2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %i \n", n_PontosTuristicos2);

    printf("- Obrigado por jogar, até a próxima!");
}