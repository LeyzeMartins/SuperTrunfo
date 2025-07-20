#include <stdio.h>

int main() {
    // Declaração de variáveis da carta 1
    char estado1[3], codigo1[4], cidade1[50];
    int populacao1, pontos_turisticos1;
    float areaKm1, pib1, densi_populacional1, pib_per_capita1;

    // Declaração de variáveis da carta 2
    char estado2[3], codigo2[4], cidade2[50];
    int populacao2, pontos_turisticos2;
    float areaKm2, pib2, densi_populacional2, pib_per_capita2;

    // ===== ENTRADA DOS DADOS DA CARTA 1 =====
    printf("\nOlá usuário! Agora vamos digitar os dados da CARTA 1:\n");

    printf("Digite um Estado:\n");
    scanf("%s", estado1);

    printf("Digite o Codigo da Carta:\n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade:\n");
    getchar(); // Limpa o buffer do enter anterior
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &populacao1);

    printf("Digite a Area da Cidade em Km:\n");
    scanf("%f", &areaKm1);

    printf("Digite o Numero do PIB:\n");
    scanf("%f", &pib1); // PIB em bilhões

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    // ===== CÁLCULO DOS INDICADORES DA CARTA 1 =====
    densi_populacional1 = populacao1 / areaKm1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // ===== ENTRADA DOS DADOS DA CARTA 2 =====
    printf("\n--- Digite os dados da CARTA 2 ---\n");

    printf("Digite um Estado:\n");
    scanf("%s", estado2);

    printf("Digite o Codigo da Carta:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    getchar(); // Limpa o buffer
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &populacao2);

    printf("Digite a Area da Cidade em Km:\n");
    scanf("%f", &areaKm2);

    printf("Digite o Numero do PIB:\n");
    scanf("%f", &pib2); // PIB em bilhões

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // ===== CÁLCULO DOS INDICADORES DA CARTA 2 =====
    densi_populacional2 = populacao2 / areaKm2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // ===== SAÍDA DAS CARTAS =====
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s", cidade1); // já vem com \n do fgets
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", areaKm1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densi_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

    return 0;
}
