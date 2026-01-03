#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
	////////// carta A
     char estado1;
     char codigo1[10]; 
	   char cidade1[50];
	   int populacao1;
	   float area1;
	   float pib1;
	   int pontos1;
	 
	 printf("----carta 1----\n");
	 
	 printf("Digite o estado da carta (A-H): \n");
	 scanf(" %c", &estado1);
	 
	 printf("Digite o código da carta (ex: A01): \n");
	 scanf("%s", codigo1);
	 
	 getchar();
	 
	 printf("Digite a cidade: \n");
	 fgets(cidade1,50,stdin);
	 cidade1[strcspn(cidade1, "\n")]= 0;
	 
	 
	 printf("Qual a população? \n");
	 scanf("%d", &populacao1);
	 
	 printf("Qual a área (Km²))? \n");
	 scanf("%f", &area1);
	 
	 printf("Qual o pib (Produto interno bruto)? \n");
	 scanf("%f", &pib1);
	 
	 printf("Qual o número de pontos turísticos? \n");
	 scanf("%d", &pontos1);
	 
	 
	 getchar();
	 /////////////////////////////////////////////////// carta b
	 
	 
	 char estado2;
   char codigo2[10]; 
	 char cidade2[50];
	 int populacao2;
	 float area2;
	 float pib2;
	 int pontos2;
	 
	 printf("\n---carta 2 ---\n");
	 
	 printf("Digite o estado da carta (A-H): \n");
	 scanf(" %c", &estado2);
	 
	 printf("Digite o código da carta (ex: B02): \n");
	 scanf("%s", codigo2);
	 
	 getchar();
	 
	 printf("Digite a cidade: \n");
	 fgets(cidade2,50,stdin);
	 cidade2[strcspn(cidade2,"\n")]=0;
	 
	 printf("Qual a população? \n");
	 scanf("%d", &populacao2);
	 
	 printf("Qual a área? \n");
	 scanf("%f", &area2);
	 
	 printf("Qual o pib (Produto interno bruto)? \n");
	 scanf("%f", &pib2);
	 
	 printf("Qual o número de pontos turísticos? \n");
	 scanf("%d", &pontos2);
	 
	 printf("\n----------- CARTAS CADASTRADAS -----------\n");
	 
	 printf("\nCarta 1:\n");
	 
	 printf("Estado: %c\n", estado1);
	 printf("Código: %s\n", codigo1);
   printf("Cidade: %s\n", cidade1);
   printf("População: %d\n", populacao1);
   printf("Área: %.2f km²\n", area1);
   printf("PIB: %.2f bilhões\n", pib1);
   printf("Pontos turísticos: %d\n", pontos1);

   printf("\nCarta 2:\n");
   printf("Estado: %c\n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Cidade: %s\n", cidade2);
   printf("População: %d\n", populacao2);
   printf("Área: %.2f km²\n", area2);
   printf("PIB: %.2f bilhões\n", pib2);
   printf("Pontos turísticos: %d\n", pontos2);

return 0;
} 
