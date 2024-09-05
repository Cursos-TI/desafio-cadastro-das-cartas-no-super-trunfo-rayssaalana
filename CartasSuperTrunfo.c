#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
     char nome[20];  // utilizarei a variavel char para coletar o nome da cidade
     char estado;
     char codigo[10];
     int turismo;  // a variavel int coletará o numero de pontos turisticos
     double area, populacao, pib, densidade, pibpercapita; // a variavel double coletará os numeros mais precisos de area, populacao, pib, densidade e pib per capita

  // Área para entrada de dados
    printf ("Olá, bem-vindo ao Super trunfo Países!\n");  // iniciarei com printf para dar as instruções do jogo
    printf ("Estados: A Ceará, B Bahia, C Pernambuco, D Rio grande do norte, E Paraíba, F Maranhão, G Sergipe, H Piauí.\n");
    printf ("O código das cartas é formado pela letra do estado e um número de 01 a 04.\n");
    printf ("Exemplo: A01 Fortaleza.\n"); 
    
    printf ("Digite a letra do estado\n");
    scanf (" %c", &estado);  // vou inserir a função scanf para coletar os dados fornecidos pelo jogador
    printf ("Digite o código da carta:\n");
    scanf  ("%s", &codigo);
    printf ("Digite o nome da cidade sem espaço:\n");
    scanf ("%s", &nome);      
    printf ("Insira a população da cidade escolhida:\n");
    scanf ("%lf", &populacao);  //utilizarei o modificador l para o scanf ler corretamento os dados em double
    printf ("Insira a área da cidade escolhida:\n");
    scanf  ("%lf", &area);
    printf ("Insira o PIB da cidade escolhida:\n");
    scanf ("%lf", &pib);
    printf ("Insira a quantidade de pontos turisticos da cidade escolhida:\n");
    scanf ("%d", &turismo);

   // calculo da densidade populacional e do pib per capita

   densidade = populacao / area;
   pibpercapita = pib / populacao;

  // Área para exibição dos dados da cidade

    printf ("Sua carta possui os seguintes atributos: \n");
    printf ("Estado: %c\n", estado);  //Utilizarei a função printf para fornecer ao usuario os dados de sua carta
    printf ("Código da carta: %s\n", codigo);
    printf ("Nome da cidade: %s\n", nome);
    printf ("População: %lf\n", populacao);
    printf ("Área: %lf km²\n", area);
    printf ("PIB: %lf bilhões de reais \n", pib);
    printf ("Pontos turisticos: %d\n", turismo);
    printf ("Densidade populacional: %lf \n", densidade);
    printf ("PIB per capita: %lf \n", pibpercapita);

    return 0;

}
