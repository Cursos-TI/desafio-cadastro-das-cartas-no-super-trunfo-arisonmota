#include <stdio.h>
#include <string.h>

float calcula_pib_pc (float pib, unsigned long int populacao) {
    return (float)(pib / populacao);
}

float calcula_dens_pop (unsigned long int populacao, float area) {
    return (float)(populacao / area);
}

int main() {
    // Declaração de variáveis para armazenarem os dados das cidades

    char estado, estado2, codigo[4] = "0", codigo2[4] = "0", cidade[25], cidade2[25];
    int pontos_tur = 0, pontos_tur2 = 0, resultado;
    unsigned long int populacao = 0, populacao2 = 0;
    float area = 0.0, area2 = 0.0, pib = 0.0, pib2 = 0.0, pib_pc = 0, pib_pc2 = 0, dens_pop = 0, dens_pop2 = 0, superpoder = 0.0, superpoder2 = 0.0;
    
    /* Cadastro da primeira Carta
    Realizada leitura dos atributos fornecidos pelo usuário*/
    printf("== Dados da primeira carta ==\n");
    printf("Informe o estado (valores de 'A' a 'H'):\n");
    while ((getchar()) != '\n'); // limpa qualquer lixo do buffer
    scanf("%s", &estado);
    printf("Informe o código da cidade (estado + número de 01 a 04 (ex: A01, B03)):\n");
    scanf("%s", &codigo);
    getchar();
    printf("Informe o nome da cidade:\n");
    fgets(cidade, sizeof(cidade), stdin); 
    cidade[strcspn(cidade, "\n")] = '\0';
    printf("Informe o tamanho da população:\n");
    scanf("%lu", &populacao);
    printf("Informe a área em Km²:\n");
    scanf("%f", &area);
    printf("Informe o PIB:\n");
    scanf("%f", &pib);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontos_tur);

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
    scanf("%lu", &populacao2);
    printf("Informe a área em Km²:\n");
    scanf("%f", &area2);
    printf("Informe o PIB:\n");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos:\n");
    scanf("%d", &pontos_tur2);

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
    printf("População: %lu\n", populacao);
    printf("Área: %.2f Km²\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_tur);
    printf("PIB per capta: %.3f\n", pib_pc);
    printf("Densidade populacional: %.2f\n", dens_pop);
    printf("Superpoder: %.2f\n", superpoder);
    
    printf("\n\n== Carta 2 ==\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f Km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_tur2);
    printf("PIB per capta: %.3f\n", pib_pc2);
    printf("Densidade populacional: %.2f\n", dens_pop2);
    printf("Superpoder: %.2f\n", superpoder2);
    
    //Comparação de valores e cálculo dos resultados
    printf("\n\n== Comparação dos Atributos (0: carta 1 vence / 1: Carta 2 vence) ==\n");
    resultado = pib_pc > pib_pc2;
    printf("PIB per capta: %d\n", resultado);
    resultado = dens_pop < dens_pop2;
    printf("Densidade Populacional: %d\n", resultado);
    resultado = superpoder > superpoder2;
    printf("Superpoder: %d\n", resultado);
    resultado = populacao > populacao2;
    printf("População: %d\n", resultado);
    resultado = area > area2;
    printf("Área: %d\n", resultado);
    resultado = pib > pib2;
    printf("PIB: %d\n", resultado);
    resultado = pontos_tur > pontos_tur2;
    printf("Pontos turísticos: %d\n", resultado);

    //Exibição e comparação de um atributo para definir vencedor
    printf("\n\nCarta 1 - %s: %lu\n", cidade, populacao);
    printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
    if(populacao > populacao2) {
        printf("\nResultado: Carta 1 venceu!\n");
    }
    else {
        printf("\nResultado: Carta 2 venceu!\n");
    }          
    return 0;
}