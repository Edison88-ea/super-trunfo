// Cadastrando duas cartas Super Trunfo
#include <stdio.h>

int main(){
    // variáveis para armazenar os dados
    char estado;
    char codigo_carta[4];
    char cidade[20];
    int pontos_turisticos, r_populacao, r_area, r_pib, r_pontos_turisticos, r_desidade_populacional, r_pib_per_capita, r_super_poder;
    float area, populacao, pib, densidade_populacional, pib_per_capita,inverso_densidade_populacional, super_poder;

    char estado1;
    char codigo_carta1[4];
    char cidade1[20];
    int pontos_turisticos1;
    float area1, populacao1, pib1, densidade_populacional1, pib_per_capita1, inverso_densidade_populacional1, super_poder1;
    
    // entrada de dados da primeira carta do usuário
    printf("--- Vamos começar inserindo os dados de cada carta --- \n");
    printf("Digite a primeira letra do nome do Estado: \n");
    scanf(" %c", &estado);
    printf("Código da carta(A letra do estado seguido de um número ex: S01, A02, B03): \n");
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

    // Cálculos
    densidade_populacional = populacao / area;
    pib_per_capita =  pib / populacao;
    inverso_densidade_populacional = 1 / densidade_populacional;

    //Cálculo do super poder
    super_poder = populacao + area + pib + pontos_turisticos + pib_per_capita + inverso_densidade_populacional;

    // impressão da primeira carta do usuário
    printf("--- CARTA ---\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %.d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("inverso desnidade populacional: %.2f\n", inverso_densidade_populacional);
    printf("Super Poder: %.2f\n", super_poder);
    
 
    // entrada de dados da segunda carta do usuário
    printf("--- Vamos começar inserindo os dados de cada carta --- \n");
    printf("Digite a primeira letra do nome do Estado: \n");
    scanf(" %c", &estado1);
    printf("Código da carta(A letra do estado seguido de um número ex: S01, A02, B03): \n");
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

    // Cálculos
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 =  pib1 / populacao1;
    inverso_densidade_populacional1 = 1 / densidade_populacional1;

    //Cálculo do super poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + inverso_densidade_populacional1;

    // impressão da segunda carta do usuário
    printf("--- CARTA ---\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %.d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); 
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("inverso desnidade populacional: %.2f\n", inverso_densidade_populacional1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Comparação das cartas 
    printf("Comparação das cartas:\n");
    r_populacao = populacao > populacao1; 
    printf("População: %d\n", r_populacao);
    r_area = area > area1; 
    printf("Área: %d\n", r_area);
    r_pib = pib > pib1; 
    printf("PIB: %d\n", r_pib);
    r_pontos_turisticos = pontos_turisticos > pontos_turisticos1; 
    printf("Pontos Turísticos: %d\n", r_pontos_turisticos);
    r_desidade_populacional = inverso_densidade_populacional > inverso_densidade_populacional1; 
    printf("Densidade Populacional: %d\n", r_desidade_populacional);
    r_pib_per_capita = pib_per_capita > pib_per_capita1; 
    printf("PIB per Capita: %d\n", r_pib_per_capita);
    r_super_poder = super_poder > super_poder1; 
    printf("Super Poder: %d\n", r_super_poder);
    
    return 0;

}