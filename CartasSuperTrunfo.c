#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  unsigned long int populacao1, populacao2;
  int codcarta1, codcarta2, pontosturisticos1, pontosturisticos2;
  char nomecidade1[30], nomecidade2[30];
  float area1, area2, pib1, pib2, densidadep1, densidadep2, pibpercap1, pibpercap2;
  double superPoder1, superPoder2;

  // Área para entrada de dados
  // Leitura Primeira carta

  printf("=========================\n");
  printf("      SUPER TRUNFO       \n");
  printf("=========================\n");

  printf("Carta número 1\n");

  printf("Digite seu estado (Representando um dos oito estados: A-H)\n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (1-4)\n");
  scanf("%d", &codcarta1);

  printf("Digite nome da cidade\n");
  scanf("%s", nomecidade1);

  printf("Digite o número de habitante da cidade\n");
  scanf("%lu", &populacao1);

  printf("Digite a área em km²\n");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade\n");
  scanf("%f", &pib1);

  printf("Digite a quantidade de pontos turisticos da sua cidade\n");
  scanf("%d", &pontosturisticos1);


  //  Leitura Segunda Carta
  printf("Carta número 2\n");
  
  printf("Digite seu estado (A-H)\n");
  scanf(" %c", &estado2);

  printf("Digite o código da carta (1-4)\n");
  scanf("%d", &codcarta2);

  printf("Digite nome da cidade\n");
  scanf("%s", nomecidade2);

  printf("Digite o número de habitante da cidade\n");
  scanf("%lu", &populacao2);

  printf("Digite a área em km²\n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade\n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos da sua cidade\n");
  scanf("%d", &pontosturisticos2);
  

  // Área de calculo da Densidade Populacional e PIB per capita da cidade
  // Carta 1
  densidadep1 = (float) populacao1 / area1;
  pibpercap1 = pib1 / (float) populacao1;

  // Carta 2
  densidadep2 =  (float) populacao2 / area2;
  pibpercap2 = pib2 / (float) populacao2;


  // Compara o Super poder das cartas
  superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + pibpercap1 - densidadep1;

  superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + pibpercap2 - densidadep2;

  //Exibe o ganhador das cartas e os dados
  printf("\nComparação das cartas:\n");

  printf("\nPopulação\n");
  printf("Carta 1 - (%s): %lu\n", nomecidade1, populacao1);
  printf("Carta 2 - (%s): %lu\n", nomecidade2, populacao2);
  if (populacao1 > populacao2) {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }

  printf("\nArea\n");
  printf("Carta 1 - (%s): %.2f km²\n", nomecidade1, area1);
  printf("Carta 2 - (%s): %.2f km²\n", nomecidade2, area2);
  if (area1 > area2) {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }

  printf("\nPIB\n");
  printf("Carta 1 - (%s): R$ %.2f\n", nomecidade1, pib1);
  printf("Carta 2 - (%s): R$ %.2f\n", nomecidade2, pib2);
  if (pib1 > pib2) {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }

  printf("\nPontos Turisticos\n");
  printf("Carta 1 - (%s): %d\n", nomecidade1, pontosturisticos1);
  printf("Carta 2 - (%s): %d\n", nomecidade2, pontosturisticos2);
  if (pontosturisticos1 > pontosturisticos2) {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }
  
  printf("\nDensidade Populacional\n");
  printf("Carta 1 - (%s): %.2f\n", nomecidade1, densidadep1);
  printf("Carta 2 - (%s): %.2f\n", nomecidade2, densidadep2);
  if (densidadep1 < densidadep2)
  {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }
  
  printf("\nPIB per capita\n");
  printf("Carta 1 - (%s): R$ %.2f\n", nomecidade1, pibpercap1);
  printf("Carta 2 - (%s): R$ %.2f\n", nomecidade2, pibpercap2);
  if (pibpercap1 > pibpercap2)
  {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }
  
  printf("\nSuper Poder\n");
  printf("Carta 1 - (%s): %.2f\n", nomecidade1, superPoder1);
  printf("Carta 2 - (%s): %.2f\n", nomecidade2, superPoder2);
  if (superPoder1 > superPoder2)
  {
    printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
  } else {
    printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
  }

  return 0;
} 