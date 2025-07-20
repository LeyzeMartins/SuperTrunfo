#include <stdio.h> // Biblioteca padrão para entrada e saída

int main() { // Função principal do programa

    // Declaração das variáveis:
    char estado1[3], estado2[3]; // Armazena o estado com até 2 letras (ex: MG) + '\0'
    char codigoCarta1[6], codigoCarta2[6]; // Armazena o código da carta (ex: A01)
    char nomeCidade1[20], nomeCidade2[20]; // Armazena o nome da cidade (ex: Juiz de Fora)
    int populacao1, populacao2; // Armazena o número de habitantes
    float areaKm1, areaKm2; // Armazena a área da cidade em km²
    float pib1, pib2; // Armazena o PIB da cidade
    int numPontosTur1, numPontosTur2; // Armazena o número de pontos turísticos
    

    // ===== ENTRADA DOS DADOS DA CARTA 1 =====

    // Solicita o estado da carta 1 (ex: MG)
    printf("Digite um Estado:\n");
    scanf("%2s", estado1); // Lê até 2 letras e armazena em 'estado1'
    getchar(); // Limpa o ENTER que fica no buffer após scanf

    // Solicita o código da carta 1 (ex: A01)
    printf("Digite o Codigo da Carta:\n");
    scanf("%s", codigoCarta1); // Lê uma string e armazena em 'codigoCarta1'
    getchar(); // Limpa o ENTER que fica no buffer após scanf

    // Solicita o nome da cidade da carta 1
    printf("Digite o Nome da Cidade:\n");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); 
    // Usa fgets para ler o nome completo da cidade (com espaços)
    // OBS: fgets lê também o '\n' ao final da string

    // Solicita a população da cidade
    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &populacao1); // Lê um número inteiro e armazena em 'populacao1'

    // Solicita a área da cidade em km²
    printf("Digite a Area da Cidade em Km:\n");
    scanf("%f", &areaKm1); // Lê um número decimal e armazena em 'areaKm1'

    // Solicita o PIB da cidade
    printf("Digite o Numero do PIB:\n");
    scanf("%f", &pib1); // Lê um número decimal e armazena em 'pib1'

    // Solicita a quantidade de pontos turísticos
    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &numPontosTur1); // Lê um número inteiro e armazena em 'numPontosTur1'


    // ===== ENTRADA DOS DADOS DA CARTA 2 =====

    // Solicita o estado da carta 2
    printf("Digite um Estado:\n");
    scanf("%2s", estado2); // Lê até 2 letras e armazena em 'estado2'
    getchar(); // Limpa o ENTER que fica no buffer após scanf

    // Solicita o código da carta 2
    printf("Digite o Codigo da Carta:\n");
    scanf("%s", codigoCarta2); // Lê uma string e armazena em 'codigoCarta2'
    getchar(); // Limpa o ENTER que fica no buffer após scanf

    // Solicita o nome da cidade da carta 2
    printf("Digite o Nome da Cidade:\n");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); 
    // Usa fgets para ler o nome completo da cidade (com espaços)
    // OBS: fgets lê também o '\n' ao final da string

    // Solicita a população da cidade
    printf("Digite o Numero de Habitantes:\n");
    scanf("%d", &populacao2); // Lê um número inteiro e armazena em 'populacao2'

    // Solicita a área da cidade em km²
    printf("Digite a Area da Cidade em Km:\n");
    scanf("%f", &areaKm2); // Lê um número decimal e armazena em 'areaKm2'

    // Solicita o PIB da cidade
    printf("Digite o Numero do PIB:\n");
    scanf("%f", &pib2); // Lê um número decimal e armazena em 'pib2'

    // Solicita o número de pontos turísticos
    printf("Digite o Numero de Pontos Turisticos:\n");
    scanf("%d", &numPontosTur2); // Lê um número inteiro e armazena em 'numPontosTur2'


    // ===== EXIBIÇÃO DOS DADOS DA CARTA 1 =====

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", estado1); // Exibe o estado com 2 letras
    printf("Código: %s\n", codigoCarta1); // Exibe o código da carta
    printf("Cidade: %s", nomeCidade1); 
    // Exibe o nome da cidade (completo, pode conter '\n' no final)
    printf("População: %d\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n", areaKm1); // Exibe a área com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB com 2 casas decimais
    printf("Pontos Turísticos: %d\n", numPontosTur1); // Exibe a quantidade de pontos turísticos


    // ===== EXIBIÇÃO DOS DADOS DA CARTA 2 =====

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Cidade: %s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areaKm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", numPontosTur2);

    return 0; // Finaliza o programa
}
