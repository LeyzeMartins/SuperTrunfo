#include <stdio.h>

int main() {
    // Declaração de variáveis da carta 1
    char estado1[3], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    int pontos_turisticos1;
    float areaKm1, pib1, densi_populacional1, pib_per_capita1;

    // Declaração de variáveis da carta 2
    char estado2[3], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    int pontos_turisticos2;
    float areaKm2, pib2, densi_populacional2, pib_per_capita2;

    int resultado;  // 1 se Carta 1 venceu, 0 se Carta 2 venceu
    float super_poder1,super_poder2;

    // ===== ENTRADA DOS DADOS DA CARTA 1 =====

    printf("Seja bem-vindo(a), mestre urbanista!\n");
    printf("Sua missão: cadastrar duas cidades e calcular\n");
    printf("os indicadores de desenvolvimento urbano!\n\n");

     // Entrada dos dados da carta 1
    printf("  Missão 1: Cadastro da Carta 1\n");

    printf("Informe o Estado da Cidade (Ex: MG):\n");
    scanf("%s", estado1);

    printf("Informe o código secreto da carta (Ex: A01):");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade Lendária:\n");
    getchar(); // Limpa o buffer do enter anterior
    fgets(cidade1, sizeof(cidade1), stdin);

    printf("Digite o Numero de Habitantes:\n");
    scanf("%lu", &populacao1);

    printf("Digite a Area da Cidade em Km:\n");
    scanf("%f", &areaKm1);

    printf("Digite o Numero do PIB:\n");
    scanf("%f", &pib1); // PIB em bilhões

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &pontos_turisticos1);

    // ===== CÁLCULO DOS INDICADORES DA CARTA 1 =====
    densi_populacional1 = populacao1 / areaKm1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // ===== CÁLCULO DO SUPER PODER CARTA 1 =====
    super_poder1 = populacao1 + areaKm1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0f / densi_populacional1);


    // ===== ENTRADA DOS DADOS DA CARTA 2 =====
    
    printf("  Missão 1: Cadastro da Carta 2\n");
   
    printf("Informe o Estado da Cidade (Ex:SP):\n");
    scanf("%s", estado2);

    printf("Digite o Código secreto da Carta(Ex: B01):\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade:\n");
    getchar(); // Limpa o buffer
    fgets(cidade2, sizeof(cidade2), stdin);

    printf("Digite o Numero de Habitantes:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Area da Cidade em Km:\n");
    scanf("%f", &areaKm2);

    printf("Digite o Numero do PIB:\n");
    scanf("%f", &pib2); // PIB em bilhões

    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &pontos_turisticos2);

    // ===== CÁLCULO DOS INDICADORES DA CARTA 2 =====
    
    densi_populacional2 = populacao2 / areaKm2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

     //===== CÁLCULO DO SUPER PODER CARTA 1 =====

    super_poder2 = (float)populacao2 + areaKm2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densi_populacional2);

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

      
     // ===== COMPARAÇÃO DE CARTAS =====
printf("\n--- Comparacao de Cartas ---\n");


// População (maior vence)
resultado = (populacao1 > populacao2);
printf("Populacao: Carta 1 venceu (%d)\n", resultado);

// Área (maior vence)
resultado = (areaKm1 > areaKm2);
printf("Area: Carta 1 venceu (%d)\n", resultado);

// PIB (maior vence)
resultado = (pib1 > pib2);
printf("PIB: Carta 1 venceu (%d)\n", resultado);

// Pontos Turísticos (maior vence)
resultado = (pontos_turisticos1 > pontos_turisticos2);
printf("Pontos Turisticos: Carta 1 venceu (%d)\n", resultado);

// Densidade populacional (menor vence)
resultado = (densi_populacional1 < densi_populacional2);
printf("Densidade Populacional: Carta 1 venceu (%d)\n", resultado);

// PIB per Capita (maior vence)
resultado = (pib_per_capita1 > pib_per_capita2);
printf("PIB per Capita: Carta 1 venceu (%d)\n", resultado);

// Super Poder (maior vence)
resultado = (super_poder1 > super_poder2);
printf("Super Poder: Carta 1 venceu (%d)\n", resultado);

            


    return 0;
}
