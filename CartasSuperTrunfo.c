#include <stdio.h>
#include <string.h>

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
    float superPoder1, superPoder2, soma1, soma2;
    char cidadE1[20] = "", cidadE2[20] = "", atributO1[20] = "", atributO2[20] = "", populacaO[] = "População", areA[] = "Área", densidadE[] = "Densidade Populacional", piB[] = "PIB", perCapitA[] = "PIB Per Capita", pontoS[] = "Pontos Turísticos", superP[] = "Super Poder";

    int escolha1, escolha2;
    float escolha1_carta1, escolha1_carta2, escolha2_carta1, escolha2_carta2;

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

    // Nivel novato do módulo 2 Commit =  Reestruturação do código remoção das variaveis para o teste lógico substituidas pelas estrtuturas de decisão
    // resultadoPopulacao = populacao > populacao2;
    // resultadoArea = area > area2;
    // resultadoDensidade = densidadeInvertida1 < densidadeInvertida2;
    // resultadoPercapita = percapita1 > percapita2;
    // resultadoPib = pib > pib2;
    // resultadoPontos = pontos > pontos2;
    // resultadoSuperPoder = superPoder1 > superPoder2;

    /*  Nível novato do módulo 2 -Inclusão Estuturas de Descisão IF/ELSE, comparando cada um dos atributos das duas cartas,
    utilizando a operação de incremento dentro de cada estrutura para adicionar +1 na variavel, para ao final,
    saber a carta vencedora, por ter vencido em mais atributos.
        Nível aventureiro do módulo 2 - inclusão da estrutura Switch com implementação de menu para interação com usuário.
    In
    */
//  Menu para escolha de 2 atributos

    if (escolha1 == 1)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("2. Area\n");
        printf("3. Densidade Populacional\n");
        printf("4. PIB Per Capita\n");
        printf("5. PIB\n");
        printf("6. Pontos Turísticos\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else if (escolha1 == 2)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("1. População\n");
        printf("3. Densidade Populacional\n");
        printf("4. PIB Per Capita\n");
        printf("5. PIB\n");
        printf("6. Pontos Turísticos\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else if (escolha1 == 3)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("4. PIB Per Capita\n");
        printf("5. PIB\n");
        printf("6. Pontos Turísticos\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else if (escolha1 == 4)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("3. Densidade Populacional\n");
        printf("5. PIB\n");
        printf("6. Pontos Turísticos\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else if (escolha1 == 5)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("3. Densidade Populacional\n");
        printf("4. PIB Per Capita\n");
        printf("6. Pontos Turísticos\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else if (escolha1 == 6)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("3. Densidade Populacional\n");
        printf("4. PIB Per Capita\n");
        printf("5. PIB\n");
        printf("7. Super Poder\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else if (escolha1 == 7)
    {
        printf("\nEscolha no menu qual atributo deseja comparar.");
        printf("\n           MENU\n");
        printf("______________________________________________\n");
        printf("1. População\n");
        printf("2. Area\n");
        printf("3. Densidade Populacional\n");
        printf("4. PIB Per Capita\n");
        printf("5. PIB\n");
        printf("6. Pontos Turísticos\n");
        printf("Escolha uma opção:  ");
        scanf("%d", &escolha2);
        if (escolha1 == escolha2)
        {
            printf("Entrada inválida, encerrando o jogo.");
        }
    }
    else
    {
        printf("Valor inválido.");
        return 0;
    }

    /*Alteração de toda estrutura switch*/
    switch (escolha1)
    {
    case 1:
        if (escolha1 == 1)
        {

            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, populacaO);
            escolha1_carta1 = populacao;
            escolha1_carta2 = populacao2;
        }
        break;
    case 2:
        if (escolha1 == 2)
        {
            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, areA);
            escolha1_carta1 = area;
            escolha1_carta2 = area2;
        }
        break;
    case 3:
        if (escolha1 == 3)
        {
            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, densidadE);
            escolha1_carta1 = densidadeInvertida1;
            escolha1_carta2 = densidadeInvertida2;
        }
        break;
    case 4:
        if (escolha1 == 4)
        {
            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, perCapitA);
            escolha1_carta1 = percapita1;
            escolha1_carta2 = percapita2;
        }
        break;
    case 5:
        if (escolha1 == 5)
        {
            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, piB);
            escolha1_carta1 = pib;
            escolha1_carta2 = pib2;
        }
        break;
    case 6:
        if (escolha1 == 6)
        {
            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, pontoS);
            escolha1_carta1 = pontos;
            escolha1_carta2 = pontos2;
        }
        break;
    case 7:
        if (escolha1 == 7)
        {
            strcpy(cidadE1, cidade);
            strcpy(cidadE2, cidade2);
            strcpy(atributO1, superP);
            escolha1_carta1 = superPoder1;
            escolha1_carta2 = superPoder2;
        }

        break;
    }

    switch (escolha2)
    {
    case 1:
        if (escolha2 == 1)
        {
            strcpy(atributO2, populacaO);
            escolha2_carta1 = populacao;
            escolha2_carta2 = populacao2;
        }
        break;
    case 2:
        if (escolha2 == 2)
        {
            strcpy(atributO2, areA);
            escolha2_carta1 = area;
            escolha2_carta2 = area2;
        }
        break;
    case 3:
        if (escolha2 == 3)
        {
            strcpy(atributO2, densidadE);
            escolha2_carta1 = densidadeInvertida1;
            escolha2_carta2 = densidadeInvertida2;
        }
        break;
    case 4:
        if (escolha2 == 4)
        {
            strcpy(atributO2, perCapitA);
            escolha2_carta1 = percapita1;
            escolha2_carta2 = percapita2;
        }
        break;
    case 5:
        if (escolha2 == 5)
        {
            strcpy(atributO2, piB);
            escolha2_carta1 = pib;
            escolha2_carta2 = pib2;
        }
        break;
    case 6:
        if (escolha2 == 6)
        {
            strcpy(atributO2, pontoS);
            escolha2_carta1 = pontos;
            escolha2_carta2 = pontos2;
        }
        break;
    case 7:
        if (escolha2 == 7)
        {
            strcpy(atributO2, superP);
            escolha2_carta1 = superPoder1;
            escolha2_carta2 = superPoder2;
        }

        break;
    }

    soma1 = escolha1_carta1 + escolha2_carta1;
    soma2 = escolha1_carta2 + escolha2_carta2;

    printf("****COMPARANDO ATRIBUTOS****\n");
    //  printf("Atributo escolhido %s\n",atributO);
    printf("Carta 1\n");
    printf("Cidade: %s\n", cidadE1);
    printf("%s: %.2f\n", atributO1, escolha1_carta1);
    printf("%s: %.2f\n", atributO2, escolha2_carta1);
    printf("A soma dos atributos é %.2f\n", soma1);

    printf("Carta 2\n");
    printf("Cidade: %s\n", cidadE2);
    printf("%s: %.2f\n", atributO1, escolha1_carta2);
    printf("%s: %.2f\n", atributO2, escolha2_carta2);
    printf("A soma dos atributos é %.2f\n", soma2);

    if (soma1 == soma2)
    {
        printf("EMPATE\n");
    }
    else if (soma2 > soma1)
    {
        printf("A carta vencedora é Carta 2 %s\n", cidadE2);
    }
    else
    {
        printf("A carta vencedora é Carta 1 %s\n", cidadE1);
    }
}