#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1;
    char codigo1[20], cidade1[30];
    float area1, pib1;
    int populacao1, pontosTuristicos1;
    float superpoder1;
  

    char estado2;
    char codigo2[20], cidade2[30];
    float area2, pib2;
    int populacao2, pontosTuristicos2;
    float superpoder2;


    
  // Área para entrada de dados
    printf("VAMOS CADASTRAR A SUA PRIMEIRA CARTA\n\n");

    printf("Digite a letra do estado da sua carta:\n");
    scanf("%c",&estado1);

    printf("Digite a letra do seu estado seguido de um numero do 01 ao 04:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao1);

    printf("Digite a área em quilometros quadrados:\n");
    scanf("%f",&area1);
    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f",&pib1);

    printf("Digite o número de pontos turistos da cidade:\n");
    scanf("%d",&pontosTuristicos1);


    printf("\nAGORA VAMOS CADASTRAR A SUA SEGUNDA CARTA\n\n");

    printf("Digite a letra do estado da sua carta:\n");
    scanf(" %c",&estado2);

    printf("Digite a letra do seu estado seguido de um numero do 01 ao 04:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite o número de habitantes da cidade:\n");
    scanf("%d",&populacao2);

    printf("Digite a área em quilometros quadrados:\n");
    scanf("%f",&area2);
    
    printf("Digite o Produto Interno Bruto da cidade:\n");
    scanf("%f",&pib2);

    printf("Digite o número de pontos turistos da cidade:\n");
    scanf("%d",&pontosTuristicos2);

//CALCULOS DE COMPARACAO
    float densidade1=populacao1/area1, densidade2=populacao2/area2;
    float pibpercapita1=pib1/populacao1, pibpercapita2=pib2/populacao2;

    superpoder1 = area1+pib1+(float)populacao1+(float)pontosTuristicos1+pibpercapita1+(1/densidade1);
    superpoder2 = area2+pib2+(float)populacao2+(float)pontosTuristicos2+pibpercapita2+(1/densidade2);
    
    int resultadopopulacao = populacao1 > populacao2;
    int resultadoarea = area1 > area2;
    int resultadopib = pib1 > pib2;
    int resultadopontosturisticos = pontosTuristicos1 > pontosTuristicos2;
    int resultadodensidade = densidade1 < densidade2;
    int resultadopibpercapita = pibpercapita1 > pibpercapita2;
    int resultadosuperpoder = superpoder1 > superpoder2;


  // Área para exibição dos dados da cidade
    printf("\nCARTAS CADASTRADAS COM SUCESSO!\n\n");

    printf("---CARTA 1---\n\nESTADO:%c\nCÓGIDO:%s\nNOME DA CIDADE:%s\nPOPULAÇÃO:%d\nÁREA:%.2f km2\nPIB:%.2f R$\nNÚMERO DE PONTOS TURÍSTICOS:%d\nDENSIDADE POPULACIONAL:%.2f hab/km²\nPIB PER CAPITA:%.2f reais\nSUPER PODER:%.2f\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, pontosTuristicos1, densidade1, pibpercapita1, superpoder1);

    printf("---CARTA 2---\n\nESTADO:%c\nCÓGIDO:%s\nNOME DA CIDADE:%s\nPOPULAÇÃO:%d\nÁREA:%.2f km2\nPIB:%.2f R$\nNÚMERO DE PONTOS TURÍSTICOS:%d\nDENSIDADE POPULACIONAL:%.2f hab/km²\nPIB PER CAPITA:%.2f reais\nSUPER PODER:%.2f\n\n", estado2, codigo2, cidade2, populacao2, area2, pib2, pontosTuristicos2, densidade2, pibpercapita2, superpoder2);

    printf("\nCOMPARAÇÃO DE CARTAS (ATRIBUTO: SUPER PODER):\n\n");
    printf("Carta 1 - %s: %.2f\n", estado1, superpoder1);
    printf("Carta 2 - %s: %.2f\n\n", estado2, superpoder2);
    
    if (superpoder1>superpoder2){
      printf("Resultado: A carta 1 venceu!\n");
    } else {
      printf("Resultado: A carta 2 venceu!\n");
    }
    
    

    return 0;
}  
