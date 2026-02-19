#include <stdio.h>
 
int main() {
	// Carta 1
	char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidade1;
    float pibPerCapita1;
    float superPoder1;
    
    // Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2; 
	float pib2;
    int pontosTuristicos2;
    float densidade2;
    float pibPerCapita2;
    float superPoder2;
    
    // Cadastro da Carta 1
    printf("Digite o Estado(A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o codigo da carta (ex: A01):");
    scanf(" %s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);
    
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao1);
    
    printf("Digite a area (km2): ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Cálculos Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);
    
    // Cadastro da Carta 2 
    printf("Digite o Estado(A-H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o codigo da carta (ex: A01):");
    scanf(" %s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a populacao: ");
    scanf(" %lu", &populacao2);
    
    printf("Digite a area (km2): ");
    scanf(" %f", &area2);
    
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    
    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculos Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    
    // Exibição dos dados da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: R$ %.2f (reais/hab)\n", pibPerCapita1);
    
    // Exibição dos dados da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: R$ %.2f (reais/hab)\n", pibPerCapita2);

    // Exibição dos dados calculados
    printf("\nCarta 1 - %s: Poder %.2f\n", cidade1, superPoder1);
    printf("Carta 2 - %s: Poder %.2f\n", cidade2, superPoder2);

    // Comparação de Cartas
    if (populacao1 > populacao2) {
        printf("Populacao: Carta 1 venceu (1)\n");
    } else {
        printf("Populacao: Carta 2 venceu (0)\n");
    }
    if (area1 > area2) {
        printf("Area: Carta 1 venceu (1)\n");
    } else {
        printf("Area: Carta 2 venceu (0)\n");
    }
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu (1)\n");
    } else {
        printf("PIB: Carta 2 venceu (0)\n");
    }
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Carta 1 venceu (1)\n");
    } else {
        printf("Pontos Turisticos: Carta 2 venceu (0)\n");
    }
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu (1)\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu (0)\n");
    }
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Carta 1 venceu (1)\n");
    } else {
        printf("PIB per Capita: Carta 2 venceu (0)\n");
    }
    if (superPoder1 > superPoder2) {
        printf("Super Poder: Carta 1 venceu (1)\n");
    } else {
        printf("Super Poder: Carta 2 venceu (0)\n");
    }


    return 0;
    }
