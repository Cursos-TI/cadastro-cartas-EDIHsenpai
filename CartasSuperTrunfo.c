#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   //*CARTA 1, ESTADO A, CODIGO A01*//
   printf("***CARTAS SUPER TRUNFO***\n");
  char cidade1[11] = "São Paulo";
  int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int turisticos1 = 50;

  float densidade1 = populacao1 / area1;
  float pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  
  //*CARTA 2, ESTADO B,CODIGO A02*//
  char cidade2[20] = "Rio de Jaeiro";
  int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = 300.50;
  int turisticos2 = 30;

  float densidade2 =populacao2 / area2;
  float pibpercapita2 = (pib2 * 1000000000) / populacao2;

  // Área para entrada de dados 1 //
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %f\n", area1);
  printf("PIB: %f\n", pib1);
  printf("Pontos turisticos: %d\n",turisticos1);
  printf("Densidade populacional: %f\n", densidade1);
  
  // Área para entrada de dados 2 //
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %f\n", area2);
  printf("PIB: %f\n", pib1);
  printf("Pontos tÚristicos: %d\n", turisticos1);
  printf("Densidade populacional: %f\n", densidade2);


return 0;
} 
