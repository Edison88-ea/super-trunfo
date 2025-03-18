// Cadastrando duas cartas Super Trunfo
#include <stdio.h>

int main(){
    // variáveis para armazenar os dados
    char estado;
    char codigo_carta[4];
    char cidade[20];
    int populacao, pontos_turisticos;
    float area, pib;
    
    // entrada de dados da primeira carta do usuário
    printf("--- Vamos começar inserindo os dados de cada carta --- \n");
    printf("Digite a primeira letra do nome do Estado: \n");
    scanf(" %c", &estado);
    printf("Código da carta(A letra do estado seguido de um número ex: S01, A02, B03): \n");
    scanf(" %s", &codigo_carta);
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: km² \n");
    scanf("%f", &area);
    printf("PIB: R$ \n");
    scanf("%f", &pib);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // impressão da primeira carta do usuário
    printf("--- CARTA ---\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %.d\n", pontos_turisticos);

    // entrada de dados da segunda carta do usuário
    printf("--- Vamos começar inserindo os dados de cada carta --- \n");
    printf("Digite a primeira letra do nome do Estado: \n");
    scanf(" %c", &estado);
    printf("Código da carta(A letra do estado seguido de um número ex: S01, A02, B03): \n");
    scanf(" %s", &codigo_carta);
    printf("Nome da Cidade: \n");
    scanf(" %s", cidade);
    printf("População: \n");
    scanf("%d", &populacao);
    printf("Área: km² \n");
    scanf("%f", &area);
    printf("PIB: R$ \n");
    scanf("%f", &pib);
    printf("Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos);

    // impressão da segunda carta do usuário
    printf("--- CARTA ---\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de Pontos Turísticos: %.d\n", pontos_turisticos);



    return 0;

}