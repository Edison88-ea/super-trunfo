#include <stdio.h>

int main() {
    // variáveis para armazenar os dados
    char estado, estado1;
    char codigo_carta[4], codigo_carta1[4];
    char cidade[20], cidade1[20];
    int pontos_turisticos, pontos_turisticos1;
    float area, populacao, pib, densidade_populacional, pib_per_capita, inverso_densidade_populacional, super_poder;
    float area1, populacao1, pib1, densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1, super_poder1;
    
    // entrada de dados da primeira carta
    printf("--- Vamos começar inserindo os dados da primeira carta --- \n");
    printf("Digite a primeira letra do nome do Estado: \n");
    scanf(" %c", &estado);
    printf("Código da carta (A letra do estado seguido de um número ex: S01, A02, B03): \n");
    scanf(" %s", codigo_carta);
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade);
    printf("População: \n");
    scanf("%f", &populacao);
    printf("Área: km² \n");
    scanf("%f", &area);
    printf("PIB: R$ \n");
    scanf("%f", &pib);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // Cálculos para a primeira carta
    densidade_populacional = populacao / area;
    pib_per_capita = pib / populacao;
    inverso_densidade_populacional = 1 / densidade_populacional;
    super_poder = populacao + area + pib + pontos_turisticos + pib_per_capita + inverso_densidade_populacional;

    // entrada de dados da segunda carta
    printf("--- Vamos começar inserindo os dados da segunda carta --- \n");
    printf("Digite a primeira letra do nome do Estado: \n");
    scanf(" %c", &estado1);
    printf("Código da carta (A letra do estado seguido de um número ex: S01, A02, B03): \n");
    scanf(" %s", codigo_carta1);
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade1);
    printf("População: \n");
    scanf("%f", &populacao1);
    printf("Área: km² \n");
    scanf("%f", &area1);
    printf("PIB: R$ \n");
    scanf("%f", &pib1);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculos para a segunda carta
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    inverso_densidade_populacional1 = 1 / densidade_populacional1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + inverso_densidade_populacional1;

    // Exibição resumida das cartas
    printf("\n--- RESUMO DAS CARTAS ---\n");
    printf("Carta 1: %s (%s) - Estado: %c\n", cidade, codigo_carta, estado);
    printf("População: %.2f | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d\n", 
           populacao, area, pib, pontos_turisticos);
    printf("Densidade: %.2f | PIB per capita: %.2f | Super Poder: %.2f\n\n", 
           densidade_populacional, pib_per_capita, super_poder);

    printf("Carta 2: %s (%s) - Estado: %c\n", cidade1, codigo_carta1, estado1);
    printf("População: %.2f | Área: %.2f | PIB: %.2f | Pontos Turísticos: %d\n", 
           populacao1, area1, pib1, pontos_turisticos1);
    printf("Densidade: %.2f | PIB per capita: %.2f | Super Poder: %.2f\n\n", 
           densidade_populacional1, pib_per_capita1, super_poder1);

    // Variáveis para armazenar as escolhas e resultados
    int opcao1, opcao2;
    int resultado1 = 0, resultado2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;
    float valor1_carta1 = 0, valor1_carta2 = 0, valor2_carta1 = 0, valor2_carta2 = 0;
    const char* nome_atributo1 = "";
    const char* nome_atributo2 = "";

    // Menu para o primeiro atributo
    printf("\n*** ESCOLHA O PRIMEIRO ATRIBUTO PARA COMPARAÇÃO ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &opcao1);

    // Processamento do primeiro atributo
    switch(opcao1) {
        case 1:
            nome_atributo1 = "POPULAÇÃO";
            valor1_carta1 = populacao;
            valor1_carta2 = populacao1;
            resultado1 = (populacao > populacao1) ? 1 : ((populacao < populacao1) ? -1 : 0);
            soma_carta1 += populacao;
            soma_carta2 += populacao1;
            break;
        case 2:
            nome_atributo1 = "ÁREA";
            valor1_carta1 = area;
            valor1_carta2 = area1;
            resultado1 = (area > area1) ? 1 : ((area < area1) ? -1 : 0);
            soma_carta1 += area;
            soma_carta2 += area1;
            break;
        case 3:
            nome_atributo1 = "PIB";
            valor1_carta1 = pib;
            valor1_carta2 = pib1;
            resultado1 = (pib > pib1) ? 1 : ((pib < pib1) ? -1 : 0);
            soma_carta1 += pib;
            soma_carta2 += pib1;
            break;
        case 4:
            nome_atributo1 = "PONTOS TURÍSTICOS";
            valor1_carta1 = pontos_turisticos;
            valor1_carta2 = pontos_turisticos1;
            resultado1 = (pontos_turisticos > pontos_turisticos1) ? 1 : ((pontos_turisticos < pontos_turisticos1) ? -1 : 0);
            soma_carta1 += pontos_turisticos;
            soma_carta2 += pontos_turisticos1;
            break;
        case 5:
            nome_atributo1 = "DENSIDADE POPULACIONAL";
            valor1_carta1 = densidade_populacional;
            valor1_carta2 = densidade_populacional1;
            resultado1 = (densidade_populacional < densidade_populacional1) ? 1 : 
                        ((densidade_populacional > densidade_populacional1) ? -1 : 0);
            soma_carta1 -= densidade_populacional; // Subtrai porque menor densidade é melhor
            soma_carta2 -= densidade_populacional1;
            break;
        case 6:
            nome_atributo1 = "PIB PER CAPITA";
            valor1_carta1 = pib_per_capita;
            valor1_carta2 = pib_per_capita1;
            resultado1 = (pib_per_capita > pib_per_capita1) ? 1 : ((pib_per_capita < pib_per_capita1) ? -1 : 0);
            soma_carta1 += pib_per_capita;
            soma_carta2 += pib_per_capita1;
            break;
        case 7:
            nome_atributo1 = "SUPER PODER";
            valor1_carta1 = super_poder;
            valor1_carta2 = super_poder1;
            resultado1 = (super_poder > super_poder1) ? 1 : ((super_poder < super_poder1) ? -1 : 0);
            soma_carta1 += super_poder;
            soma_carta2 += super_poder1;
            break;
        default:
            printf("Opção inválida! Usando População como padrão.\n");
            nome_atributo1 = "POPULAÇÃO";
            valor1_carta1 = populacao;
            valor1_carta2 = populacao1;
            resultado1 = (populacao > populacao1) ? 1 : ((populacao < populacao1) ? -1 : 0);
            soma_carta1 += populacao;
            soma_carta2 += populacao1;
            opcao1 = 1;
    }

    // Menu para o segundo atributo (excluindo o primeiro)
    printf("\n*** ESCOLHA O SEGUNDO ATRIBUTO PARA COMPARAÇÃO ***\n");
    if (opcao1 != 1) printf("1. População\n");
    if (opcao1 != 2) printf("2. Área\n");
    if (opcao1 != 3) printf("3. PIB\n");
    if (opcao1 != 4) printf("4. Pontos Turísticos\n");
    if (opcao1 != 5) printf("5. Densidade Populacional\n");
    if (opcao1 != 6) printf("6. PIB per capita\n");
    if (opcao1 != 7) printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &opcao2);

    // Verifica se a opção é válida e diferente da primeira
    if (opcao2 == opcao1 || opcao2 < 1 || opcao2 > 7) {
        printf("Opção inválida ou repetida! Usando ");
        // Encontra a primeira opção disponível
        if (opcao1 != 1) {
            opcao2 = 1;
            printf("População");
        } else if (opcao1 != 2) {
            opcao2 = 2;
            printf("Área");
        } else if (opcao1 != 3) {
            opcao2 = 3;
            printf("PIB");
        } else if (opcao1 != 4) {
            opcao2 = 4;
            printf("Pontos Turísticos");
        } else if (opcao1 != 5) {
            opcao2 = 5;
            printf("Densidade Populacional");
        } else if (opcao1 != 6) {
            opcao2 = 6;
            printf("PIB per capita");
        } else {
            opcao2 = 7;
            printf("Super Poder");
        }
        printf(" como padrão.\n");
    }

    // Processamento do segundo atributo
    switch(opcao2) {
        case 1:
            nome_atributo2 = "POPULAÇÃO";
            valor2_carta1 = populacao;
            valor2_carta2 = populacao1;
            resultado2 = (populacao > populacao1) ? 1 : ((populacao < populacao1) ? -1 : 0);
            soma_carta1 += populacao;
            soma_carta2 += populacao1;
            break;
        case 2:
            nome_atributo2 = "ÁREA";
            valor2_carta1 = area;
            valor2_carta2 = area1;
            resultado2 = (area > area1) ? 1 : ((area < area1) ? -1 : 0);
            soma_carta1 += area;
            soma_carta2 += area1;
            break;
        case 3:
            nome_atributo2 = "PIB";
            valor2_carta1 = pib;
            valor2_carta2 = pib1;
            resultado2 = (pib > pib1) ? 1 : ((pib < pib1) ? -1 : 0);
            soma_carta1 += pib;
            soma_carta2 += pib1;
            break;
        case 4:
            nome_atributo2 = "PONTOS TURÍSTICOS";
            valor2_carta1 = pontos_turisticos;
            valor2_carta2 = pontos_turisticos1;
            resultado2 = (pontos_turisticos > pontos_turisticos1) ? 1 : ((pontos_turisticos < pontos_turisticos1) ? -1 : 0);
            soma_carta1 += pontos_turisticos;
            soma_carta2 += pontos_turisticos1;
            break;
        case 5:
            nome_atributo2 = "DENSIDADE POPULACIONAL";
            valor2_carta1 = densidade_populacional;
            valor2_carta2 = densidade_populacional1;
            resultado2 = (densidade_populacional < densidade_populacional1) ? 1 : 
                         ((densidade_populacional > densidade_populacional1) ? -1 : 0);
            soma_carta1 -= densidade_populacional; // Subtrai porque menor densidade é melhor
            soma_carta2 -= densidade_populacional1;
            break;
        case 6:
            nome_atributo2 = "PIB PER CAPITA";
            valor2_carta1 = pib_per_capita;
            valor2_carta2 = pib_per_capita1;
            resultado2 = (pib_per_capita > pib_per_capita1) ? 1 : ((pib_per_capita < pib_per_capita1) ? -1 : 0);
            soma_carta1 += pib_per_capita;
            soma_carta2 += pib_per_capita1;
            break;
        case 7:
            nome_atributo2 = "SUPER PODER";
            valor2_carta1 = super_poder;
            valor2_carta2 = super_poder1;
            resultado2 = (super_poder > super_poder1) ? 1 : ((super_poder < super_poder1) ? -1 : 0);
            soma_carta1 += super_poder;
            soma_carta2 += super_poder1;
            break;
    }

    // Exibição dos resultados
    printf("\n--- RESULTADOS DA COMPARAÇÃO ---\n");
    printf("Carta 1: %s (%s) vs Carta 2: %s (%s)\n\n", cidade, codigo_carta, cidade1, codigo_carta1);
    
    // Primeiro atributo
    printf("Atributo 1: %s\n", nome_atributo1);
    printf("%s: %.2f vs %s: %.2f -> ", cidade, valor1_carta1, cidade1, valor1_carta2);
    if (resultado1 == 1) {
        printf("%s vence!\n", cidade);
    } else if (resultado1 == -1) {
        printf("%s vence!\n", cidade1);
    } else {
        printf("Empate!\n");
    }
    
    // Segundo atributo
    printf("\nAtributo 2: %s\n", nome_atributo2);
    printf("%s: %.2f vs %s: %.2f -> ", cidade, valor2_carta1, cidade1, valor2_carta2);
    if (resultado2 == 1) {
        printf("%s vence!\n", cidade);
    } else if (resultado2 == -1) {
        printf("%s vence!\n", cidade1);
    } else {
        printf("Empate!\n");
    }
    
    // Soma dos atributos
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", cidade, soma_carta1);
    printf("%s: %.2f\n", cidade1, soma_carta2);
    
    // Resultado final
    printf("\n--- RESULTADO FINAL ---\n");
    if (soma_carta1 > soma_carta2) {
        printf("%s VENCE com %.2f pontos!\n", cidade, soma_carta1);
    } else if (soma_carta1 < soma_carta2) {
        printf("%s VENCE com %.2f pontos!\n", cidade1, soma_carta2);
    } else {
        printf("EMPATE com %.2f pontos cada!\n", soma_carta1);
    }

    return 0;
}