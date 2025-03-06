#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    char estado;
    char codigo[10];
    char nomedacidade[50];
    int populacao, pontosturisticos;
    float area,pib;
    
    printf("Novo commit\n");

    // Cadastro Carta 01
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado:\n");
    scanf("%c", &estado);

    //Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo);

    printf("Digite Nome da Cidade:\n");
    scanf("%s", nomedacidade);
    
    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o Pib:\n");
    scanf("%f", &pib);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos);

    // Exibição dos Dados Carta 01
     printf("Carta 01:\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %d\n", populacao);
     printf("Área: %.3f km²\n", area);
     printf("Pib: %.3f bilhões de reais\n", pib);
     printf("Pontos Turisticos: %d\n", pontosturisticos);

    // Cadastro Carta 02
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado:\n");
    scanf(" %c", &estado);
    
    //Código da Carta 02: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o Código da Carta:\n");
    scanf("%s", codigo);

    printf("Digite Nome da Cidade:\n");
    scanf("%s", nomedacidade);
    
    printf("Digite a População:\n");
    scanf("%d", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o Pib:\n");
    scanf("%f", &pib);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos);

    // Exibição dos Dados Carta 02
     printf("Carta 02:\n");
     printf("Estado:%c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %d\n", populacao);
     printf("Área: %.3f km²\n", area);
     printf("Pib: %.3f bilhões de reais\n", pib);
     printf("Pontos Turisticos: %d\n", pontosturisticos);

    return 0;
}
