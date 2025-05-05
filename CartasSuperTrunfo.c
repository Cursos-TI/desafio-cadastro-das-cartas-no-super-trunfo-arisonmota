#include <stdio.h>

float calcula_pib_pc (float pib, int populacao) {
    return (float)(pib / populacao);
}

float calcula_dens_pop (int populacao, float area) {
    return (float)(populacao / area);
}

int main() {
    // Declaração de variáveis para armazenarem os dados das cidades

    char estado, estado2, codigo[4] = "0", codigo2[4] = "0", cidade[25], cidade2[25];
    int pontos_tur = 0, pontos_tur2 = 0;
    unsigned long int populacao = 0, populacao2 = 0;
    bool resultado;
    float area = 0.0, area2 = 0.0, pib = 0.0, pib2 = 0.0, pib_pc = 0, pib_pc2 = 0, dens_pop = 0, dens_pop2 = 0, superpoder = 0.0, superpoder2 = 0.0;
    
    /* Cadastro da primeira Carta
    Realizada leitura dos atributos fornecidos pelo usuário*/
    printf("== Dados da primeira carta ==\n");
    printf("Informe o estado (valores de 'A' a 'H'):\n");
    scanf("%c", &estado);
    printf("Informe o código da cidade (estado + número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", &codigo);
    getchar();
    printf("Informe o nome da cidade:\n");
    fgets(cidade, sizeof(cidade), stdin); 
    cidade[strcspn(cidade, "\n")] = '\0';
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
    getchar();
    printf("Informe o nome da cidade:\n");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';
    printf("Informe o tamanho da população:\n");
    scanf("%i", &populacao2);
    printf("Informe a área em Km²:\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%i", &pontos_tur2);

    //Cálculo do PIB per capta e Densidade Populacional usando as funções
    pib_pc = calcula_pib_pc(pib, populacao);
    pib_pc2 = calcula_pib_pc(pib2, populacao2);
    dens_pop = calcula_dens_pop(populacao, area);
    dens_pop2 = calcula_dens_pop(populacao2, area2);

    //Cálculo do Superpoder
    superpoder = (float)populacao + area + pib + (float)pontos_tur + pib_pc + (1/dens_pop);
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos_tur2 + pib_pc2 + (1/dens_pop2);

    // Exibição dos Dados das Cartas:
    printf("\n\n== Carta 1 ==\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %i\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %i\n", pontos_tur);
    printf("PIB per capta: %.3f\n", pib_pc);
    printf("Densidade populacional: %.2f\n", dens_pop);
    printf("Superpoder: %.2f\n", superpoder);
    
    printf("\n\n== Carta 2 ==\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %i\n", pontos_tur2);
    printf("PIB per capta: %.3f\n", pib_pc2);
    printf("Densidade populacional: %.2f\n", dens_pop2);
    printf("Superpoder: %.2f\n", superpoder2);
    
    //Comparação de valores e cálculo dos resultados
    
      
    return 0;
}
