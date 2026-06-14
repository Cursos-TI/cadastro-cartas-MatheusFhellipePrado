#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estadoc1, estadoc2, codcartac1[4], codcartac2[4], nomecidadec1[20], nomecidadec2[20];
  int populacaoc1, populacaoc2, ptsturisticosc1, ptsturisticosc2;
  float areac1, areac2, pibc1, pibc2, denspopuc1, denspopuc2, pibpcaptc1, pibpcaptc2;

  // Área para entrada de dados

  // Entrada de dados da primeira carta
  printf("Bem vindo ao Super Trunfo - Países\n");

  printf("\nVamos dar início cadastrando a primeira carta:\n");

  printf("Digite a letra que representará o estado (ex: A): ");
  scanf(" %c", &estadoc1);
  
  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codcartac1);

  printf("Digite o nome da cidade (ex: BeloHorizonte): ");
  scanf("%s", nomecidadec1);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacaoc1);

  printf("Digite a área em quilômetros quadrados da cidade: ");
  scanf("%f", &areac1);

  printf("Digite PIB da cidade: ");
  scanf("%f", &pibc1);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &ptsturisticosc1);

  // Entrada de dados da segunda carta
  printf("\nAgora vamos cadastrar a segunda carta:\n");

  printf("Digite a letra que representará o estado (ex: A): ");
  scanf(" %c", &estadoc2);
  
  printf("Digite o código da carta (ex: A01): ");
  scanf("%s", codcartac2);

  printf("Digite o nome da cidade (ex: BeloHorizonte): ");
  scanf("%s", nomecidadec2);

  printf("Digite o número de habitantes da cidade: ");
  scanf("%d", &populacaoc2);

  printf("Digite a área em quilômetros quadrados da cidade: ");
  scanf("%f", &areac2);

  printf("Digite PIB da cidade: ");
  scanf("%f", &pibc2);

  printf("Digite o número de pontos turísticos da cidade: ");
  scanf("%d", &ptsturisticosc2);

  // Área para cálculos de dados
  // Primeira Carta
  denspopuc1 = (float)(populacaoc1 / areac1);
  pibpcaptc1 = (pibc1 * 1000000000.0) / populacaoc1;

  // Segunda Carta
  denspopuc2 = (float)(populacaoc2 / areac2);
  pibpcaptc2 = (pibc2 * 1000000000.0) / populacaoc2;

  // Área para exibição dos dados da cidade
  // Impressão dos dados da primeira carta
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estadoc1);
  printf("Código: %s\n", codcartac1);
  printf("Nome da cidade: %s\n", nomecidadec1);
  printf("População: %d\n", populacaoc1);
  printf("Área (km²): %.1f km²\n", areac1);
  printf("PIB: %.1f bilhões de reais\n", pibc1);
  printf("Número de Pontos Turísticos: %d\n", ptsturisticosc1);
  printf("Densidade Populacional: %.2f hab/km²\n", denspopuc1);
  printf("PIB per Capita: %.2f reais\n", pibpcaptc1);

  // Impressão dos dados da segunda carta
  printf("\nCarta 2\n");
  printf("Estado: %c\n", estadoc2);
  printf("Código: %s\n", codcartac2);
  printf("Nome da cidade: %s\n", nomecidadec2);
  printf("População: %d\n", populacaoc2);
  printf("Área (km²): %.1f km²\n", areac2);
  printf("PIB: %.1f bilhões de reais\n", pibc2);
  printf("Número de Pontos Turísticos: %d\n", ptsturisticosc2);
  printf("Densidade Populacional: %.2f hab/km²\n", denspopuc2);
  printf("PIB per Capita: %.2f reais\n", pibpcaptc2);

  return 0;
}