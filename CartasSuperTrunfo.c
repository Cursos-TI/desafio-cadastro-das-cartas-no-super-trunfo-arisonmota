#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado, codigo[4], cidade[25];
    int populacao, pontos_tur;
    float area, pib;
    
    /* Cadastro das Cartas
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
    scanf("%c", &codigo);

    // Exibição dos Dados das Cartas:
    

    return 0;
}
