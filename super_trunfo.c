#include <stdio.h>

int main(){
    char estado1;
    char codigo1[2];
    char nomeDaCidade1[100];
    int populacao1, pontosTuristicos1;
    float area1, pib1;
    float densidadePopulacional1;
    float pibPerCapita1;

    char estado2;
    char codigo2[2];
    char nomeDaCidade2[100];
    int populacao2, pontosTuristicos2;
    float area2, pib2;
    float densidadePopulacional2;
    float pibPerCapita2;


    //carta 1

    printf("Digite o estado (Uma letra de A a H): \n");
    scanf(" %c", &estado1);
   
    printf("Digite o código da carta (ex: A01): \n");
    scanf("%s", &codigo1);

    while (getchar() != '\n');
    
    printf("Digite o nome da cidade: \n");
    scanf(" %s[^\n]", &nomeDaCidade1);  
    
    printf("Digite a população da cidade (sem ponto ou virgula): \n");
    scanf(" %d", &populacao1);
    
    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area1);
    
    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf(" %f", &pib1);
    
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos1);
    
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    printf("\nCarta 1: \n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeDaCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("Pib %.2f bilhões de reais\n", pib1);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n\n", pibPerCapita1);
    

   //carta 2

    printf("Digite o estado (Uma letra de A a H): \n");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B03): \n");
    scanf("%s", &codigo2);

    while (getchar() != '\n');

    printf("Digite o nome da cidade: \n");
    scanf(" %s[^\n]", nomeDaCidade2);

    printf("Digite a população da cidade (sem ponto ou virgula): \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (em km²): \n");
    scanf(" %f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): \n");
    scanf(" %f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf(" %d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    printf("\nCarta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", &nomeDaCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Pib %.2f bilhões de reais\n", pib2);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n\n", pibPerCapita2);
    


    return 0;


}
