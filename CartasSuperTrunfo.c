#include <stdio.h>

int main()
{
    char estado1, estado2, codigo_1[2], codigo_2[2], cidade1[25], cidade2[25];
    int populacao1, populacao2, num_pontosturisticos1, num_pontosturisticos2;
    float area1, area2, pib1, pib2;

    printf("Escreva o estado da primeira carta: ");
    scanf(" %c", &estado1);

    printf("Escreva o codigo da primeira carta: ");
    scanf(" %s", codigo_1);

    printf("Escreva o nome da primeira cidade: ");
    getchar();
    fgets(cidade1, 24, stdin);

    printf("Escreva o numero da populacao da primeira cidade: ");
    scanf(" %d", &populacao1);
    
    printf("Escreva a area em km2 da primeira cidade: ");
    scanf(" %f", &area1);

    printf("Escreva o pib em bilhoes da primeira cidade: ");
    scanf(" %f", &pib1);

    printf("Escreva o numero de pontos turisticos da primeira cidade: ");
    scanf(" %d", &num_pontosturisticos1);


    printf("\nEscreva o estado da segunda carta: ");
    scanf(" %c", &estado2);

    printf("Escreva o codigo da segunda carta: ");
    scanf(" %s", codigo_2);

    printf("Escreva o nome da segunda cidade: ");
    getchar();
    fgets(cidade2, 24, stdin);

    printf("Escreva o numero da populacao da segunda cidade: ");
    scanf(" %d", &populacao2);
    
    printf("Escreva a area em km2 da segunda cidade: ");
    scanf(" %f", &area2);

    printf("Escreva o pib em bilhoes da segunda cidade: ");
    scanf(" %f", &pib2);

    printf("Escreva o numero de pontos turisticos da segunda cidade: ");
    scanf(" %d", &num_pontosturisticos2);


    printf("\nCarta 1\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo_1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n\n", num_pontosturisticos1);

    printf("Carta 2\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo_2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n\n", num_pontosturisticos2);
    
    return 0;
}
