#include <stdio.h>

int main() {   
    
    //declaração de variáveis
    char estado1, estado2, codigo_1[2], codigo_2[2], cidade1[25], cidade2[25];
    int num_pontosturisticos1, num_pontosturisticos2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidade1, densidade2, densidade_inversa1, densidade_inversa2, pib_capita1, pib_capita2, super_poder1, super_poder2;

    //Cadastro da primeira carta
    printf("Escreva o estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Escreva o codigo da primeira carta: ");
    scanf(" %s", codigo_1);

    printf("Escreva o nome da primeira cidade: ");
    getchar();
    fgets(cidade1, 24, stdin);

    printf("Escreva o numero da populacao da primeira cidade: ");
    scanf(" %lu", &populacao1);
    
    printf("Escreva a area em km2 da primeira cidade: ");
    scanf(" %f", &area1);

    printf("Escreva o pib em bilhoes da primeira cidade: ");
    scanf(" %f", &pib1);

    printf("Escreva o numero de pontos turisticos da primeira cidade: ");
    scanf(" %d", &num_pontosturisticos1);

    //Cadastro da segunda carta
    printf("\nEscreva o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Escreva o codigo da segunda carta: ");
    scanf(" %s", codigo_2);

    printf("Escreva o nome da segunda cidade: ");
    getchar();
    fgets(cidade2, 24, stdin);

    printf("Escreva o numero da populacao da segunda cidade: ");
    scanf(" %lu", &populacao2);
    
    printf("Escreva a area em km2 da segunda cidade: ");
    scanf(" %f", &area2);

    printf("Escreva o pib em bilhoes da segunda cidade: ");
    scanf(" %f", &pib2);

    printf("Escreva o numero de pontos turisticos da segunda cidade: ");
    scanf(" %d", &num_pontosturisticos2);

    //Cálculos de densidade, pib oer capita e o inverso da densidade
    densidade1 = (float)populacao1/area1;
    densidade2 = (float)populacao2/area2;
    pib_capita1 = pib1*1000000000/(float)populacao1;
    pib_capita2 = pib2*1000000000/(float)populacao2;
    densidade_inversa1 = 1/densidade1;
    densidade_inversa2 = 1/densidade2;

    //Calculo do Super Poder
    super_poder1 = (float)populacao1+area1+pib1+pib_capita1+densidade_inversa1;
    super_poder2 = (float)populacao2+area2+pib2+pib_capita2+densidade_inversa2;

    //Informações da carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo_1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %f km2\n", area1);
    printf("PIB: %f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", num_pontosturisticos1);
    printf("Densidade Populacional: %f\n", densidade1);
    printf("PIB per Capita: %f\n", pib_capita1);

    //Informações da carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo_2);
    printf("Nome da cidade: %s", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", num_pontosturisticos2);
    printf("Densidade Populacional: %f\n", densidade2);
    printf("PIB per Capita: %f\n", pib_capita2);

    //Comparações utilizando ternários
    printf("\nComparacao de Cartas:\n");
    printf("Populacao: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
    printf("Area: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", (num_pontosturisticos1 > num_pontosturisticos2) ? 1 : 2, (num_pontosturisticos1 > num_pontosturisticos2) ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade1 > densidade2) ? 2 : 1, (densidade1 > densidade2) ? 0 : 1);
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_capita1 > pib_capita2) ? 1 : 2, (pib_capita1 > pib_capita2) ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 1 : 0);
    
    return 0;
}
