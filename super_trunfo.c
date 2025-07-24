#include <stdio.h>

int main(){
    char estado1;
    char codigo1[4];
    char nomeDaCidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char estado2;
    char codigo2[4];
    char nomeDaCidade2;
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    //carta 1

    printf("Digite o estado (Uma letra de A a H): \n");
    scanf(" %c", &estado1);
    printf("Estado: %c\n", estado1);

    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", codigo1);
    printf("Codigo: %s\n", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf(" %s[^\n]", nomeDaCidade1);  
    printf("Nome da Cidade: %s\n", nomeDaCidade1);

    printf("Digite a população da cidade (sem ponto ou virgula): \n");
    scanf(" %d", &populacao1);
    printf("Populacao: %d\n", populacao1);

    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area1);
    printf("Area: %f\n", area1);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf(" %f", &pib1);
    printf("Pib %f\n", pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos1);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosTuristicos1);

   //carta 2

    printf("Digite o estado (Uma letra de A a H): \n");
    scanf(" %c", &estado2);
    printf("Estado: %c\n", estado2);

    printf("Digite o código da carta (ex: B03): \n");
    scanf("%s", codigo2);
    printf("Codigo: %s\n", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf(" %s[^\n]", nomeDaCidade2);
    printf("Nome da Cidade: %s\n", nomeDaCidade2);

    printf("Digite a população da cidade (sem ponto ou virgula): \n");
    scanf(" %d", &populacao2);
    printf("Populacao: %d\n", populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area2);
    printf("Area: %f\n", area2);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf(" %f", &pib2);
    printf("Pib: %f\n", pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos2);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosTuristicos2);


    return 0;


}
