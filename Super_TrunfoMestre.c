#include <stdio.h>
#include <string.h>

int main()
{
    // ===== DECLARAÇÃO DAS VARIÁVEIS CIDADE 1 =====
    char estado1[3], codigo1[4], cidade1[50];
    unsigned long int populacao1;
    float areaKm1, pib1;
    int pontos_turisticos1;
    float densi_populacional1, pib_per_capita1, super_poder1;

    // ===== DECLARAÇÃO DAS VARIÁVEIS CIDADE 2 =====
    char estado2[3], codigo2[4], cidade2[50];
    unsigned long int populacao2;
    float areaKm2, pib2;
    int pontos_turisticos2;
    float densi_populacional2, pib_per_capita2, super_poder2;

    // ===== TELA DE BOAS-VINDAS =====
    printf("=============================================\n");
    printf(" 🌆  Seja bem-vindo(a), mestre urbanista! 🌆\n");
    printf("=============================================\n");
    printf("📜 Sua missão: cadastrar duas cidades e calcular\n");
    printf("   os indicadores de desenvolvimento urbano!\n");
    printf("=============================================\n\n");

    // ===== ENTRADA DE DADOS CARTA 1 =====
    printf("🚩 Missão 1: Cadastro da Carta 1\n\n");

    printf("🏴 Informe o Estado da Cidade (Ex: MG): ");
    scanf("%s", estado1);

    printf("🃏 Informe o código secreto da carta (Ex: A01): ");
    scanf("%s", codigo1);

    printf("🌍 Digite o Nome da Cidade Lendária: ");
    getchar(); 
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0'; // remove \n

    printf("👥 Digite o Número de Habitantes (Ex: 200000): ");
    scanf("%lu", &populacao1);

    printf("📐 Digite a Área da Cidade em Km² (Ex: 455287): ");
    scanf("%f", &areaKm1);

    printf("💰 Digite o PIB em bilhões (Ex: 350): ");
    scanf("%f", &pib1);

    printf("🎡 Digite o Número de Pontos Turísticos (Ex: 10): ");
    scanf("%d", &pontos_turisticos1);

    densi_populacional1 = populacao1 / areaKm1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;
    super_poder1 = (float) populacao1 + areaKm1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densi_populacional1);

    // ===== ENTRADA DE DADOS CARTA 2 =====
    printf("\n🚩 Missão 2: Cadastro da Carta 2\n\n");

    printf("🏴 Informe o Estado da Cidade (Ex: SP): ");
    scanf("%s", estado2);

    printf("🃏 Informe o código secreto da carta (Ex: B02): ");
    scanf("%s", codigo2);

    printf("🌍 Digite o Nome da Cidade Lendária: ");
    getchar(); 
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0'; // remove \n

    printf("👥 Digite o Número de Habitantes (Ex: 300000): ");
    scanf("%lu", &populacao2);

    printf("📐 Digite a Área da Cidade em Km² (Ex: 123456): ");
    scanf("%f", &areaKm2);

    printf("💰 Digite o PIB em bilhões (Ex: 200): ");
    scanf("%f", &pib2);

    printf("🎡 Digite o Número de Pontos Turísticos (Ex: 5): ");
    scanf("%d", &pontos_turisticos2);

    densi_populacional2 = populacao2 / areaKm2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    super_poder2 = (float) populacao2 + areaKm2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densi_populacional2);

    // ===== RESULTADOS =====
    printf("\n=============================================\n");
    printf(" ⚔️  Comparação de Cartas ⚔️\n");
    printf("=============================================\n\n");

    printf("👥 População: Carta %d venceu (%d)\n",
           (populacao1 > populacao2 ? 1 : 2),
           (populacao1 > populacao2 ? 1 : 0));

    printf("📐 Área: Carta %d venceu (%d)\n",
           (areaKm1 > areaKm2 ? 1 : 2),
           (areaKm1 > areaKm2 ? 1 : 0));

    printf("💰 PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2 ? 1 : 2),
           (pib1 > pib2 ? 1 : 0));

    printf("🎡 Pontos Turísticos: Carta %d venceu (%d)\n",
           (pontos_turisticos1 > pontos_turisticos2 ? 1 : 2),
           (pontos_turisticos1 > pontos_turisticos2 ? 1 : 0));

    printf("📊 Densidade Populacional: Carta %d venceu (%d)\n",
           (densi_populacional1 < densi_populacional2 ? 1 : 2),
           (densi_populacional1 < densi_populacional2 ? 1 : 0));

    printf("💵 PIB per Capita: Carta %d venceu (%d)\n",
           (pib_per_capita1 > pib_per_capita2 ? 1 : 2),
           (pib_per_capita1 > pib_per_capita2 ? 1 : 0));

    printf("✨ Super Poder: Carta %d venceu (%d)\n",
           (super_poder1 > super_poder2 ? 1 : 2),
           (super_poder1 > super_poder2 ? 1 : 0));

    printf("\n=============================================\n");
    printf(" 🎉 Missão concluída! Que vença a melhor cidade! 🎉\n");
    printf("=============================================\n");

    return 0;
}

