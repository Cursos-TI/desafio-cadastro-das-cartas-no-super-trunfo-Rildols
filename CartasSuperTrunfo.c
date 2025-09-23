#include <stdio.h>

int main() {
    
    /* Variáveis */
    unsigned long int Habitantes1, Habitantes2;
    int Pontosturisticos1, Pontosturisticos2;
    float Area1, Area2, PIB1, PIB2;
    float Densidade1, Densidade2, Capita1, Capita2;
    float SuperPoder1, SuperPoder2;
    char Estado1[20], Estado2[20], Cod_Carta1[5], Cod_Carta2[5], Cidade1[20], Cidade2[20];

    /* Entrada de dados - Primeira Carta */
    printf("Cadastro da Primeira Carta\n");

    printf("Digite o nome do primeiro Estado: ");
    scanf("%s", Estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", Cod_Carta1);

    printf("Digite o nome da primeira Cidade: ");
    scanf("%s", Cidade1);

    printf("Digite o número de Habitantes da primeira Cidade: ");
    scanf("%lu", &Habitantes1);

    printf("Digite o tamanho da área da primeira Cidade: ");
    scanf("%f", &Area1);

    printf("Digite o Produto Interno Bruto (PIB) da primeira Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de Pontos Turísticos da primeira Cidade: ");
    scanf("%d", &Pontosturisticos1);

    /* Cálculos da primeira carta */
    Densidade1 = Habitantes1 / Area1;
    Capita1 = PIB1 / Habitantes1;
    SuperPoder1 = Habitantes1 + Area1 + PIB1 + Pontosturisticos1 + Capita1 + (1 / Densidade1);

    /* Entrada de dados - Segunda Carta */
    printf("\nCadastro da Segunda Carta\n");

    printf("Digite o nome do segundo Estado: ");
    scanf("%s", Estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%s", Cod_Carta2);

    printf("Digite o nome da segunda Cidade: ");
    scanf("%s", Cidade2);

    printf("Digite o número de Habitantes da segunda Cidade: ");
    scanf("%lu", &Habitantes2);

    printf("Digite o tamanho da área da segunda Cidade: ");
    scanf("%f", &Area2);

    printf("Digite o Produto Interno Bruto (PIB) da segunda Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos da segunda Cidade: ");
    scanf("%d", &Pontosturisticos2);

    /* Cálculos da segunda carta */
    Densidade2 = Habitantes2 / Area2;
    Capita2 = PIB2 / Habitantes2;
    SuperPoder2 = Habitantes2 + Area2 + PIB2 + Pontosturisticos2 + Capita2 + (1 / Densidade2);

    /* Saída dos dados */
    printf("\nInformações da Primeira Carta\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", Cod_Carta1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu\n", Habitantes1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", Densidade1);
    printf("PIB per Capita: %.2f\n", Capita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    printf("\nInformações da Segunda Carta\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", Cod_Carta2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu\n", Habitantes2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", Densidade2);
    printf("PIB per Capita: %.2f\n", Capita2);
    printf("Super Poder: %.2f\n", SuperPoder2);

    /* Comparação das cartas */
    printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n", Habitantes1 > Habitantes2 ? 1 : 2, Habitantes1 > Habitantes2 ? 1 : 0);
    printf("Área: Carta %d venceu (%d)\n", Area1 > Area2 ? 1 : 2, Area1 > Area2 ? 1 : 0);
    printf("PIB: Carta %d venceu (%d)\n", PIB1 > PIB2 ? 1 : 2, PIB1 > PIB2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", Pontosturisticos1 > Pontosturisticos2 ? 1 : 2, Pontosturisticos1 > Pontosturisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", Densidade1 < Densidade2 ? 1 : 2, Densidade1 < Densidade2 ? 1 : 0);
    printf("PIB per Capita: Carta %d venceu (%d)\n", Capita1 > Capita2 ? 1 : 2, Capita1 > Capita2 ? 1 : 0);
    printf("Super Poder: Carta %d venceu (%d)\n", SuperPoder1 > SuperPoder2 ? 1 : 2, SuperPoder1 > SuperPoder2 ? 1 : 0);

    return 0;
}
