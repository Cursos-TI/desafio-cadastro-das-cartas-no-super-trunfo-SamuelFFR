#include <stdio.h>

int main() {
    // Variáveis Carta 1
    int Populacao1, PontosTuristicos1;
    float PIB1, Area1, Densidade1, PIBPerCapita1, SuperPoder1;
    char CodCarta1[4], NomeCidade1[20], Estado1;

    // Variáveis Carta 2
    int Populacao2, PontosTuristicos2;
    float PIB2, Area2, Densidade2, PIBPerCapita2, SuperPoder2;
    char CodCarta2[4], NomeCidade2[20], Estado2;

    // Cadastro Carta 1
    printf("Carta 1\n");

    printf("Digite o Estado (Uma letra de A à H): \n");
    scanf(" %c", &Estado1); // espaço antes do %c para ignorar enter anterior

    printf("Digite o Código da Carta (Estado + numero de 01 à 04): \n");
    scanf("%s", CodCarta1);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeCidade1);

    printf("Digite a População: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB1);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos1);

    // Cálculo da Densidade e PIB per Capita
    Densidade1 = (float)Populacao1 / Area1; // Densidade populacional
    PIBPerCapita1 = PIB1 / (float)Populacao1; // PIB per capita

    //Calculo do Super Poder 1
    SuperPoder1 = (float)Populacao1 + (float)PontosTuristicos1 + PIB1 + Area1 + 1/Densidade1 + PIBPerCapita1; // SuperPoder1

    // Exibindo Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", CodCarta1);
    printf("Nome da Cidade: %s\n", NomeCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2fkm²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos1);
    printf("Densidade: %.2f habitantes/km²\n", Densidade1);
    printf("PIB per Capita: %.2f\n", PIBPerCapita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Cadastro Carta 2
    printf("\nCarta 2\n");

    printf("Digite o Estado (Uma letra de A à H): \n");
    scanf(" %c", &Estado2); // espaço antes do %c para ignorar enter anterior

    printf("Digite o Código da Carta (Estado + numero de 01 à 04): \n");
    scanf("%s", CodCarta2);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", NomeCidade2);

    printf("Digite a População: \n");
    scanf("%d", &Populacao2);

    printf("Digite a Área da Cidade: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB: \n");
    scanf("%f", &PIB2);

    printf("Digite o número de Pontos Turísticos: \n");
    scanf("%d", &PontosTuristicos2);

    // Cálculo da Densidade e PIB per Capita
    Densidade2 = (float)Populacao2 / Area2; // Densidade populacional
    PIBPerCapita2 = PIB2 / (float)Populacao2; // PIB per capita

    //Calculo do Super Poder 2
    SuperPoder2 = (float)Populacao2 + (float)PontosTuristicos2 + PIB2 + Area2 + 1/Densidade2 + PIBPerCapita2; // SuperPoder2

    // Exibindo Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", CodCarta2);
    printf("Nome da Cidade: %s\n", NomeCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", PontosTuristicos2);
    printf("Densidade: %.2f habitantes/km²\n", Densidade2);
    printf("PIB per Capita: %.2f\n", PIBPerCapita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    // Comparação entre as cartas
    printf("\nComparação entre as cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", Populacao1 > Populacao2);
    printf("Área: Carta 1 venceu (%d)\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", PontosTuristicos1 > PontosTuristicos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade1 > Densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBPerCapita1 > PIBPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder1 > SuperPoder2);

    return 0;
}