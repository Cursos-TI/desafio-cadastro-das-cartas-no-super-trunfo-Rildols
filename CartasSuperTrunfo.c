#include <stdio.h>

int main() {

    printf("Desafio Cartas Super Trunfo \n");

    // Declaração de variáveis das cartas
    int Habitantes1, Habitantes2, Pontosturisticos1, Pontosturisticos2;
    float Area1, Area2, PIB1, PIB2;
    char Estado1[20], Estado2[20], Cod_Carta1[5], Cod_Carta2[5], Cidade1[20], Cidade2[20];

    // Entrada de dados

    printf("Cadastro da Primeira Carta \n");

    printf("Digite o nome do primeiro Estado: ");
    scanf("%s", Estado1);

    printf("Digite o código da primeira carta: ");
    scanf("%s", Cod_Carta1);

    printf("Digite o nome da primeira Cidade: ");
    scanf("%s", Cidade1);

    printf("Digite o número de Habitantes da primeira Cidade: ");
    scanf("%d", &Habitantes1);

    printf("Digite o tamanho da área da primeira Cidade: ");
    scanf("%f", &Area1);

    printf("Digite o Produto Interno Bruto (PIB) da primeira Cidade: ");
    scanf("%f", &PIB1);

    printf("Digite a quantidade de Pontos Turísticos da primeira Cidade: ");
    scanf("%d", &Pontosturisticos1);

    printf("Cadastro da Segunda Carta \n");

    printf("Digite o nome do segundo Estado: ");
    scanf("%19s", Estado2);

    printf("Digite o código da segunda carta: ");
    scanf("%4s", Cod_Carta2);

    printf("Digite o nome da segunda Cidade: ");
    scanf("%19s", Cidade2);

    printf("Digite o número de Habitantes da segunda Cidade: ");
    scanf("%d", &Habitantes2);

    printf("Digite o tamanho da área da segunda Cidade: ");
    scanf("%f", &Area2);

    printf("Digite o Produto Interno Bruto (PIB) da segunda Cidade: ");
    scanf("%f", &PIB2);

    printf("Digite a quantidade de Pontos Turísticos da segunda Cidade: ");
    scanf("%d", &Pontosturisticos2);
    
    // Saída de dados

    printf("\n Informações da Primeira Carta \n");
    printf("\n Estado: %s\n", Estado1);
    printf("Código da carta: %s\n", Cod_Carta1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", Habitantes1);
    printf("Área (em km²): %.2f\n", Area1);
    printf("PIB da Cidade: %.2f\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Pontosturisticos1);

    printf("\n Informações da Segunda Carta \n");
    printf("\n Estado: %s\n", Estado2);
    printf("Código da carta: %s\n", Cod_Carta2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", Habitantes2);
    printf("Área (em km²): %.2f\n", Area2);
    printf("PIB da Cidade: %.2f\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Pontosturisticos2);

    return 0;
}
