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
  // Área para entrada de dados
printf("\nCadastrando carta 1...\n");
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


    printf("\nCadastrando carta 2...\n");
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
  // Área para exibição dos dados da cidade
  printf("\nCarta 1\n");
    printf("\nEstado: %s\n",estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %.d\n", populacao);
    printf("Area: %.2f km2\n", area);
    printf("PIB: %.2f bilhoes de reais\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", pontos);

    printf("\nCarta 2\n");
    printf("\nEstado: %s\n",estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d", pontos2);
return 0;
} 
