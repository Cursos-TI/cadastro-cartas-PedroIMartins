#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  unsigned long int populacao1, populacao2;
  int codcarta1, codcarta2, pontosturisticos1, pontosturisticos2, escolha;
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

  //Menu interativo para escolha da comparaçao dos atributos
  printf("=== Menu ===\n");
  printf("1- População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  printf("Escolha um atributo: \n");
  scanf("%d", &escolha);

  switch (escolha)
  {
  case 1:
    printf("Atributo escolhido: População\n");
    printf("%s : %lu\n", nomecidade1, populacao1);
    printf("%s : %lu\n", nomecidade2, populacao2);
    if (populacao1 > populacao2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (populacao1 < populacao2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;
  
  case 2:
    printf("Atributo escolhido: Área\n");
    printf("%s : %.2f\n", nomecidade1, area1);
    printf("%s : %.2f\n", nomecidade2, area2);
    if (area1 > area2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (area1 < area2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;

  case 3:
    printf("Atributo escolhido: PIB\n");
    printf("%s : %.2f\n", nomecidade1, pib1);
    printf("%s : %.2f\n", nomecidade2, pib2);
    if (pib1 > pib2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (pib1 < pib2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;

  case 4:
    printf("Atributo escolhido: Pontos Turisticos\n");
    printf("%s : %d\n", nomecidade1, pontosturisticos1);
    printf("%s : %d\n", nomecidade2, pontosturisticos2);
    if (pontosturisticos1 > pontosturisticos2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (pontosturisticos1 < pontosturisticos2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;

  case 5:
    printf("Atributo escolhido: Densidade demografica\n");
    printf("%s : %.2f\n", nomecidade1, densidadep1);
    printf("%s : %.2f\n", nomecidade2, densidadep2);
    if (densidadep1 < densidadep2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (densidadep1 > densidadep2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;
  
  case 6:
    printf("Atributo escolhido: Pib per capita\n");
    printf("%s : %.2f\n", nomecidade1, pibpercap1);
    printf("%s : %.2f\n", nomecidade2, pibpercap2);
    if (pibpercap1 > pibpercap2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (pibpercap1 < pibpercap2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;

  case 7:
    printf("Atributo escolhido: Super poder\n");
    printf("%s : %.2f\n", nomecidade1, superPoder1);
    printf("%s : %.2f\n", nomecidade2, superPoder2);
    if (superPoder1 > superPoder2)
    {
      printf("Resultado = Carta 1 (%s) venceu!\n", nomecidade1);
    } else if (superPoder1 < superPoder2) {
      printf("Resultado = Carta 2 (%s) venceu!\n", nomecidade2);
    } else {
      printf("Empate!");
    }
    break;

  default:
    printf("Atributo não reconhecido!");
    break;
  }

  return 0;
} 