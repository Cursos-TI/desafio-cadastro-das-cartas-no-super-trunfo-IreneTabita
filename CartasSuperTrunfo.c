#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
int main() {
    char estado;
    char codigo[10];
    char nomedacidade[50];
    unsigned long int populacao, populacao2;
    int pontosturisticos, pontosturisticos2;
    float area, area2, pib, pib2;
    float densidadepopulacional, densidadepopulacional2;
    float pibpercapita, pibpercapita2;
    float superpoder,superpoder2;

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
    scanf("%lu", &populacao);

    printf("Digite a Área:\n");
    scanf("%f", &area);

    printf("Digite o Pib:\n");
    scanf("%f", &pib);

    printf("Digite o numero de Pontos Turisticos:\n");
    scanf("%d", &pontosturisticos);

    //Densidade Populacional
   densidadepopulacional = (float)populacao/area;
   //Pib per Capita
   pibpercapita = pib/ (float)populacao;
    //Super Poder
    superpoder = (float)(populacao + area + pib + pontosturisticos + pibpercapita) + ( 1 / densidadepopulacional);

    // Exibição dos Dados Carta 01
     printf("Carta 01:\n");
     printf("Estado: %c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %lu\n", populacao);
     printf("Área: %.2f km²\n", area);
     printf("Pib: %.2f bilhões de reais\n", pib);
     printf("Pontos Turisticos: %d\n", pontosturisticos);
     printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional);
     printf("Pib per Capita: %.2f reais\n", pibpercapita);
     printf("Super Poder: %f \n", superpoder);

    // Cadastro Carta 02
    // Estado: Uma letra de 'A' a 'H' (representando um dos oito estados)
    printf("Digite o Estado 2:\n");
    scanf(" %c", &estado);
    
    //Código da Carta 02: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)
    printf("Digite o Código da Carta 2:\n");
    scanf("%s", codigo);

    printf("Digite Nome da Cidade 2:\n");
    scanf("%s", nomedacidade);
    
    printf("Digite a População 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a Área 2:\n");
    scanf("%f", &area2);

    printf("Digite o Pib 2:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de Pontos Turisticos 2:\n");
    scanf("%d", &pontosturisticos2);

    //Densidade Populacional
   densidadepopulacional2 = (float)populacao2/area2;
   //Pib per Capita
   pibpercapita2 = pib2/(float)populacao2;
    //Super Poder
    superpoder2 = (float) (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2) + ( 1 / densidadepopulacional2);

    // Exibição dos Dados Carta 02
     printf("Carta 02:\n");
     printf("Estado:%c\n", estado);
     printf("Código: %s\n", codigo);
     printf("Nome da Cidade: %s\n", nomedacidade);
     printf("População: %lu\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("Pib: %.2f bilhões de reais\n", pib2);
     printf("Pontos Turisticos : %d\n", pontosturisticos2);
     printf("Densidade Populacional : %.2f hab/km²\n", densidadepopulacional2);
     printf("Pib per Capita : %.2f reais\n", pibpercapita2);
     printf("Super Poder: %f \n", superpoder2);

     printf("\n Comparaçao de cartas: \n");
    
     if (populacao > populacao2)
     {
         printf("População: Carta 1 venceu!\n");
     } else {
         printf("População: Carta 2 venceu!\n");
     }
     if (area > area2)
     {
         printf("Àrea: Carta 1 venceu!\n");
     } else {
         printf("Àrea: Carta 2 venceu!\n");
     }
     if (pib > pib2)
     {
         printf("PIB: Carta 1 venceu!\n");
     } else {
         printf("PIB: Carta 2 venceu!\n");
     }
     if (pontosturisticos > pontosturisticos2)
     {
         printf("Pontos turísticos: Carta 1 venceu!\n");
     } else {
         printf("Pontos turísticos: Carta 2 venceu!\n");
     }
     if (densidadepopulacional < densidadepopulacional2)
     {
         printf("Densidade Populacional: Carta 1 venceu!\n");
     } else {
         printf("Densidade Populacional: Carta 2 venceu!\n");
     }
     if (pibpercapita > pibpercapita2)
     {
         printf("PIB per capita: Carta 1 venceu!\n");
     } else {
         printf("PIB per capita: Carta 2 venceu!\n");
     }
     if (superpoder > superpoder2)
     {
         printf("Superpoder: Carta 1 venceu!\n");
     } else {
         printf("Superpoder: Carta 2 venceu!\n");
     }


    return 0;
}
