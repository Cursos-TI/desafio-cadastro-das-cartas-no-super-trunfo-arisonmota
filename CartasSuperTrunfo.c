#include <stdio.h>

int main() {
    // Declaração de variáveis para armazenarem os dados das cidades

    char estado, estado2, codigo[4], codigo2[4], cidade[25], cidade2[25];
    int populacao = 0, populacao2 = 0, pontos_tur = 0, pontos_tur2 = 0;
    float area = 0.0, area2 = 0.0, pib = 0.0, pib2 = 0.0;
    
    /* Cadastro da primeira Carta
    Realizada leitura dos atributos fornecidos pelo usuário*/
    printf("Informe o estado (valores de 'A' a 'H'):\n");
    scanf("%c", &estado);
    printf("Informe o código da cidade (estado + número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%c", &codigo);
    printf("Informe o nome da cidade:\n");
    scanf("%c", &cidade);
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
    printf("Informe o estado (valores de 'A' a 'H'):\n");
    scanf("%c", &estado2);
    printf("Informe o código da cidade (estado + número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%c", &codigo2);
    printf("Informe o nome da cidade:\n");
    scanf("%c", &cidade2);
    printf("Informe o tamanho da população:\n");
    scanf("%i", &populacao2);
    printf("Informe a área em Km²:\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_tur2);

    // Exibição dos Dados das Cartas:

    

    return 0;
}
