#include <stdio.h>

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  unsigned long int populacao1, populacao2;
  int codcarta1, codcarta2, pontosturisticos1, pontosturisticos2, escolha1, escolha2;
  char nomecidade1[30], nomecidade2[30];
  float area1, area2, pib1, pib2, densidadep1, densidadep2, pibpercap1, pibpercap2, atributo1carta1, atributo1carta2, atributo2carta1, atributo2carta2, soma1, soma2;
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
  printf("Escolha o primeiro atributo para soma com outro atributo\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  printf("Escolha um atributo: \n");
  scanf("%d", &escolha1);

  // Analisa os casos e adiciona na variavel (atributo 1)
  switch (escolha1)
  {
  case 1:
    atributo1carta1 = populacao1;
    atributo1carta2 = populacao2;
    break;
  case 2:
    atributo1carta1 = area1;
    atributo1carta2 = area2;
    break;
  case 3:
    atributo1carta1 = pib1;
    atributo1carta2 = pib2;
    break;
  case 4:
    atributo1carta1 = pontosturisticos1;
    atributo1carta2 = pontosturisticos2;
    break;
  case 5:
    atributo1carta1 = -densidadep1;
    atributo1carta2 = -densidadep2;
    break;
  case 6:
    atributo1carta1 = pibpercap1;
    atributo1carta2 = pibpercap2;
    break;
  case 7:
    atributo1carta1 = superPoder1;
    atributo1carta2 = superPoder2;
    break;
  default:
    printf("Atributo Inválido!");
    return 0;
  }

  printf("=== Menu ===\n");
  printf("Escolha o segundo atributo\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos Turisticos\n");
  printf("5 - Densidade Demografica\n");
  printf("6 - PIB per capita\n");
  printf("7 - Super poder\n");
  printf("Escolha um atributo: \n");
  scanf("%d", &escolha2);

  // Analisa se o mesmo atributo foi escolhido duas vezes
  if (escolha1 == escolha2)
  {
    printf ("Você não pode escolher o mesmo atributo duas vezes.");
    return 0;
  }
  
  // Analisa os casos e adiciona na variavel (atributo 2)
  switch (escolha2)
  {
  case 1:
    atributo2carta1 = populacao1;
    atributo2carta2 = populacao2;
    break;
  case 2:
    atributo2carta1 = area1;
    atributo2carta2 = area2;
    break;
  case 3:
    atributo2carta1 = pib1;
    atributo2carta2 = pib2;
    break;
  case 4:
    atributo2carta1 = pontosturisticos1;
    atributo2carta2 = pontosturisticos2;
    break;
  case 5:
    atributo2carta1 = -densidadep1;
    atributo2carta2 = -densidadep2;
    break;
  case 6:
    atributo2carta1 = pibpercap1;
    atributo2carta2 = pibpercap2;
    break;
  case 7:
    atributo2carta1 = superPoder1;
    atributo2carta2 = superPoder2;
    break;
  default:
    printf("Atributo Inválido!");
    return 0;
  }

  // Realiza a soma dos atributos e adiciona na variavel
  soma1 = atributo1carta1 + atributo2carta1;
  soma2 = atributo1carta2 + atributo2carta2;

  // Define o vencendor

  printf("==========================\n");
  printf("         RESULTADO        \n");
  printf("==========================\n");

  if (soma1 > soma2)
  {
    printf("Carta %c%d: %s Venceu!\n", estado1, codcarta1, nomecidade1);

  } else if (soma1 < soma2) 
  {
    printf("Carta %c%d: %s Venceu!", estado2, codcarta2, nomecidade2);
  } else
  {
    printf("Empate!\n");
  }
  printf("\nSoma final:\n");
  printf("%s: %.2f + %.2f = %.2f\n", nomecidade1, atributo1carta1, atributo2carta1, soma1);
  printf("%s: %.2f + %.2f = %.2f\n", nomecidade2, atributo1carta2, atributo2carta2, soma2);

  return 0;
}