#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  int codcarta1, codcarta2, populacao1, populacao2, pontosturisticos1, pontosturisticos2;
  char nomecidade1[30], nomecidade2[30];
  float area1, area2, pib1, pib2;

  // Área para entrada de dados
  // Leitura Primeira carta
  printf("Carta número 1\n");

  printf("Digite seu estado (Representando um dos oito estados: A-H)\n");
  scanf(" %c", &estado1);

  printf("Digite o código da carta (1-4)\n");
  scanf("%d", &codcarta1);

  printf("Digite nome da cidade\n");
  scanf("%s", nomecidade1);

  printf("Digite o número de habitante da cidade\n");
  scanf("%d", &populacao1);

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
  scanf("%d", &populacao2);

  printf("Digite a área em km²\n");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade\n");
  scanf("%f", &pib2);

  printf("Digite a quantidade de pontos turisticos da sua cidade\n");
  scanf("%d", &pontosturisticos2);


  // Área para exibição dos dados da cidade
  // Exebição primeira carta
  printf("Carta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %c%d\n", estado1, codcarta1);
  printf("Nome da Cidade: %s\n", nomecidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2fkm²\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

  //Exibição segunda carta
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %c%d\n", estado2, codcarta2);
  printf("Nome da Cidade: %s\n", nomecidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2fkm²\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);

  return 0;
} 