#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main()
{
    // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado[30], estado2[30]; // Tipo Caractere,   variável array de 30 caracteres
    char codigo[30], codigo2[30];
    char cidade[30], cidade2[30];

    unsigned int populacao, populacao2; // Tipo inteiro com modificador usinged
    int pontos, pontos2, opcao, resultadoPontos, resultadoPopulacao;
    // Tipo inteiro

    float area, area2; // Tipo decimal, ponto flutuante
    float pib, pib2;
    float resultadoArea, resultadoPib, resultadoPercapita, resultadoDensidade, resultadoSuperPoder;
    float densidade1, densidade2, densidadeInvertida1, densidadeInvertida2;
    float percapita1, percapita2;
    float superPoder1, superPoder2;

    // Área para entrada de dados
    printf("\n***************************");
    printf("\nCadastrando carta 1...");
    printf("\n***************************\n");
    printf("\nDigite o nome do Estado: ");
    scanf("%s", estado); // Input string armazenada na variavel estado

    printf("Digite o codigo do Estado: ");
    scanf("%s", codigo); // Input string armazenada na variavel codigo

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
    scanf("%s", codigo2);

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
    densidade2 = populacao2 / area2;
    percapita1 = pib / populacao;
    percapita2 = pib2 / populacao2;
    densidadeInvertida1 = 1 / densidade1;
    densidadeInvertida2 = 1 / densidade2;
    superPoder1 = (float)(populacao + area + pib + pontos + densidadeInvertida1 + percapita1);
    superPoder2 = (float)(populacao2 + area2 + pib2 + pontos2 + densidadeInvertida2 + percapita2);

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
    printf("Super Poder: %.2f", superPoder1);
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
    printf("Super Poder: %.2f", superPoder2);
    printf("\n***************************\n");

    // Menu para interação com o usuário
    printf("\n****** HORA DO COMBATE ******\n");
    printf("\nEscolha no menu qual atributo deseja comparar.");
    printf("\n           MENU\n");
    printf("______________________________________________\n");
    printf("1. População\n");
    printf("2. Area\n");
    printf("3. Densidade Populacional\n");
    printf("4. PIB Per Capita\n");
    printf("5. PIB\n");
    printf("6. Pontos Turísticos\n");
    printf("7. Super Poder\n");
    printf("Escolha uma opção:  ");
    scanf("%d", &opcao);


 
    // Interação com o usuário opções de escolha conforme menu apresentado. 
    switch (opcao)
    {
    case 1:
        if (populacao > populacao2)
        {
            printf("\n Estado: %s", estado);
            printf("\nPOPULAÇÃO: \n Carta 1: %u \n Carta 2: %u\nCarta 1 Venceu!\n", populacao, populacao2);
            
        }
        else if (populacao == populacao2)
        {

            printf("\nPOPULAÇÃO: \n Carta 1: %u \n Carta 2: %u\n EMPATE!\n", populacao, populacao2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nPOPULAÇÃO: \n Carta 1: %u \n Carta 2: %u\nCarta 2 Venceu!\n", populacao, populacao2);
            
        }
        break;

    case 2:
        if (area > area2)
        {
            printf("\n Estado: %s", estado);
            printf("\nÁREA: \n Carta 1: %.2f \n Carta 2: %.2f\nCarta 1 Venceu!\n", area, area2);
            
        }
        else if (area == area2)
        {

            printf("\nÁREA: \n Carta 1: %.2f \n Carta 2: %.2f\n EMPATE!\n", area, area2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nÁREA: \n Carta 1: %.2f \n Carta 2: %.2f \nCarta 2 Venceu!\n", area, area2);
                    }

        break;

    case 3:
        printf("\nPara densidade populacional, parâmetro quanto MENOR melhor.\n");
        if (densidadeInvertida1 < densidadeInvertida2)
        {
            printf("\n Estado: %s", estado);
            printf("\nDENSIDADE POPULACIONAL: \n Carta 1: %.5f \n Carta 2: %.5f \nCarta 1 Venceu!\n", densidadeInvertida1, densidadeInvertida2);
            
        }
        else if (densidadeInvertida1 == densidadeInvertida2)
        {
            printf("\nDENSIDADE POPULACIONAL: \n Carta 1: %.5f \n Carta 2: %.5f\n EMPATE!\n", densidadeInvertida1, densidadeInvertida2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nDENSIDADE POPULACIONAL: \n Carta 1: %.5f \n Carta 2: %.5f \nCarta 2 Venceu!\n", densidadeInvertida1, densidadeInvertida2);
            
        }
        break;

    case 4:
        if (percapita1 > percapita2)
        {
            printf("\n Estado: %s", estado);
            printf("\nPIB per capita: \n Carta 1: %.2f \n Carta 2: %.2f \nCarta 1 Venceu!\n", percapita1, percapita2);
            
        }
        else if (percapita1 == percapita2)
        {
            printf("\nPIB per capita: \n Carta 1: %.2f \n Carta 2: %.2f\n EMPATE!\n", percapita1, percapita2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nPIB per capita: \n Carta 1: %.2f \n Carta 2: %.2f \nCarta 2 Venceu!\n", percapita1, percapita2);
            
        }
        break;
    case 5:

        if (pib > pib2)
        {
            printf("\n Estado: %s", estado);
            printf("\nPIB: \n Carta 1: %.2f \n Carta 2: %.2f \nCarta 1 Venceu!\n", pib, pib2);
            
        }
        else if (pib == pib2)
        {
            printf("\nPIB: \n Carta 1: %.2f \n Carta 2: %.2f\n EMPATE!\n", pib, pib2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nPIB: \n Carta 1: %.2f \n Carta 2: %.2f \nCarta 2 Venceu!\n", pib, pib2);
            
        }
        break;
    case 6:
        if (pontos > pontos2)
        {
            printf("\n Estado: %s", estado);
            printf("\nPONTOS TURÍSTICOS: \n Carta 1: %d \n Carta 2: %d\nCarta 1 Venceu!\n", pontos, pontos2);
            
        }
        else if (pontos == pontos2)
        {
            printf("\nPONTOS TURÍSTICOS: \n Carta 1: %d \n Carta 2: %d\n EMPATE!\n", pontos, pontos2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nPONTOS TURÍSTICOS: \n Carta 1: %d \n Carta 2: %d\nCarta 2 Venceu!\n", pontos, pontos2);
            
        }
        break;
    case 7:
        if (superPoder1 > superPoder2)
        {
            printf("\n Estado: %s", estado);
            printf("\nSUPER PODER: \n Carta 1: %.2f \n Carta 2: %.2f\nCarta 1 Venceu!\n", superPoder1, superPoder2);
            
        }
        else if (superPoder1 == superPoder2)
        {
            printf("\nSUPER PODER: \n Carta 1: %.2f \n Carta 2: %.2f\n EMPATE!\n", superPoder1, superPoder2);
        }
        else
        {
            printf("\n Estado: %s", estado2);
            printf("\nSUPER PODER: \n Carta 1: %.2f \n Carta 2: %.2f\nCarta 2 Venceu!\n", superPoder1, superPoder2);
            
        }
        break;
    default:
        printf("Entrada inválida.");
        break;
    }
    return 0;
}