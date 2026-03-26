#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
   //*CARTA 1, ESTADO A, CODIGO A01*//
  char cidade1[11] = "São Paulo";
  int População1 = 12325000;
  float Área1 = 1521.11;
  float PIB1 = 699.28;
  int Túristicos1 = 50;

  //*CARTA 2, ESTADO B,CODIGO A02*//
  char cidade2[20] = "Rio de Jaeiro";
  int população2 = 6748000;
  float Área2 = 1200.25;
  float PIB2 = 300.50;
  int Túristicos2 = 30;

  // Área para entrada de dados 1 //
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", População1);
  printf("Área: %f\n", Área1);
  printf("PIB: %f\n", PIB1);
  printf("Pontos turisticos: %d\n",Túristicos1);

  ("\n");
  
  // Área para entrada de dados 1 //
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", população2);
  printf("Área: %f\n", Área2);
  printf("PIB: %f\n", PIB2);
  printf("Pontos tÚristicos: %d\n", Túristicos2);



return 0;
} 
