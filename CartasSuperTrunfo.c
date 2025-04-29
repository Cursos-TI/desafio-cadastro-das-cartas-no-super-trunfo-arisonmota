#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenarem os dados das cidades

    char estado, estado2, codigo[4] = "0", codigo2[4] = "0", cidade[25], cidade2[25];
    int populacao = 0, populacao2 = 0, pontos_tur = 0, pontos_tur2 = 0;
    float area = 0.0, area2 = 0.0, pib = 0.0, pib2 = 0.0;
    
    /* Cadastro da primeira Carta
    Realizada leitura dos atributos fornecidos pelo usuário*/
    printf("== Dados da primeira carta ==\n");
    printf("Informe o estado (valores de 'A' a 'H'):\n");
    scanf("%c", &estado);
    printf("Informe o código da cidade (estado + número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", &codigo);
    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade); 
    printf("Informe o tamanho da população:\n");
    scanf("%i", &populacao);
    printf("Informe a área em Km²:\n");
    scanf("%f", &area);
    printf("Informe o PIB:\n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_tur);

    /* Cadastro da segunda Carta
    Realizada leitura dos atributos fornecidos pelo usuário*/
    printf("\n\n== Dados da segunda carta ==\n");
    printf("Informe o estado (valores de 'A' a 'H'):\n");
    scanf("%s", &estado2);
    printf("Informe o código da cidade (estado + número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", &codigo2);
    printf("Informe o nome da cidade:\n");
    scanf("%s", &cidade2); 
    printf("Informe o tamanho da população:\n");
    scanf("%i", &populacao2);
    printf("Informe a área em Km²:\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_tur2);

    // Exibição dos Dados das Cartas:
    printf("\n\n== Carta 1 ==\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %i\n", pontos_tur);
    printf("\n\n== Carta 2 ==\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$%.2f\n", pib2);
    printf("Pontos Turísticos: %i\n", pontos_tur2);          
    
    return 0;
}
