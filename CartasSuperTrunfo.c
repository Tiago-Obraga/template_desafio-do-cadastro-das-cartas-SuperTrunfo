#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado [30], estado2 [30]; // Tipo Caractere,   variável array de 30 caracteres
    char codigo [30], codigo2 [30]; 
    char cidade [30], cidade2 [30];
    int populacao, populacao2; // Tipo inteiro 
    float area, area2; // Tipo decimal, ponto flutuante
    float pib, pib2; 
    int pontos, pontos2; // Tipo inteiro
    float densidade1, densidade2; // Tipo decimal, ponto flutuante
    float percapita1, percapita2;

  // Área para entrada de dados
    printf("\n***************************");
    printf("\nCadastrando carta 1...");
    printf("\n***************************\n");
    printf("\nDigite o nome do Estado: ");
    scanf("%s", estado); // Input string armazenada na variavel estado
   

    printf("Digite o codigo do Estado: ");
    scanf("%s",codigo); // Input string armazenada na variavel codigo

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade); // Input string armazenada na variavel cidade

    printf("Digite a populacao: ");
    scanf("%d", &populacao);

    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos);


    printf("\n***************************");
    printf("\nCadastrando carta 2...");
    printf("\n***************************\n");
    printf("\nDigite o nome do Estado: ");
    scanf("%s", estado2);
    
    printf("Digite o codigo do Estado: ");
    scanf("%s",codigo2);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km2: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // atribui as fórmulas para as variaveis densidade e percapita
    densidade1 = populacao / area;
    densidade1 = populacao2 / area2;
    percapita1 = pib / populacao;
    percapita2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade
    printf("\n**********Carta 1**********\n");
    printf("\nEstado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %.d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f reais\n", percapita1);
    printf("\n***************************\n");

    printf("\n**********Carta 2**********\n");
    printf("\nEstado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f reais\n", percapita2);
    printf("\n***************************\n");

return 0;
} 
