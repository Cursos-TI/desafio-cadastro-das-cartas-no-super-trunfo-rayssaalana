#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    
     char nomecarta1[20];  // utilizarei a variavel char para coletar o nome da cidade da carta1
     char nomecarta2[20];  // coletar o nome da cidade da carta2
     char estado1;
     char estado2;
     char codigocarta1[10]; // coletar codigo da carta1
     char codigocarta2[10];  // coletar codigo da carta2
     int turismocarta1, turismocarta2, resultadoturismo1, resultadoturismo2;  // a variavel int coletará o numero de pontos turisticos das cartas
     double area1, populacao1, pib1, densidade1, pibpercapita1, area2, populacao2, pib2, densidade2, pibpercapita2; // a variavel double coletará os numeros mais precisos de area, populacao, pib, densidade e pib per capita
     double resultadopopulacao1, resultadoarea1, resultadopib1, resultadodensidade1, resultadopercapita1; //variavel para calcular a comparação entre as cartas
     double resultadopopulacao2, resultadoarea2, resultadopib2, resultadodensidade2, resultadopercapita2;

  // Área para entrada de dados
    printf ("Olá, bem-vindo ao Super trunfo Países!\n");  // iniciarei com printf para dar as instruções do jogo
    printf ("Estados: A Ceará, B Bahia, C Pernambuco, D Rio grande do norte, E Paraíba, F Maranhão, G Sergipe, H Piauí.\n");
    printf ("O código das cartas é formado pela letra do estado e um número de 01 a 04.\n");
    printf ("Exemplo: A01 Fortaleza.\n"); 
    
    printf ("Digite a letra do estado\n");
    scanf (" %c", &estado1);  // vou inserir a função scanf para coletar os dados fornecidos pelo jogador
    printf ("Digite o código da carta:\n");
    scanf  ("%s", &codigocarta1);
    printf ("Digite o nome da cidade sem espaço:\n");
    scanf ("%s", &nomecarta1);      
    printf ("Insira a população da cidade escolhida:\n");
    scanf ("%lf", &populacao1);  //utilizarei o modificador l para o scanf ler corretamento os dados em double
    printf ("Insira a área da cidade escolhida:\n");
    scanf  ("%lf", &area1);
    printf ("Insira o PIB da cidade escolhida:\n");
    scanf ("%lf", &pib1);
    printf ("Insira a quantidade de pontos turisticos da cidade escolhida:\n");
    scanf ("%d", &turismocarta1);

   // calculo da densidade populacional e do pib per capita

   densidade1 = populacao1 / area1;
   pibpercapita1 = pib1 / populacao1;

  // Área para exibição dos dados da cidade

    printf ("Sua carta possui os seguintes atributos: \n");
    printf ("Estado: %c\n", estado1);  //Utilizarei a função printf para fornecer ao usuario os dados de sua carta
    printf ("Código da carta: %s\n", codigocarta1);
    printf ("Nome da cidade: %s\n", nomecarta1);
    printf ("População: %lf\n", populacao1);
    printf ("Área: %lf km²\n", area1);
    printf ("PIB: %lf bilhões de reais \n", pib1);
    printf ("Pontos turisticos: %d\n", turismocarta1);
    printf ("Densidade populacional: %lf \n", densidade1);
    printf ("PIB per capita: %lf \n", pibpercapita1);

    printf ("Agora forneça as informações da segunda carta: \n");

    printf ("Digite a letra do estado\n");
    scanf (" %c", &estado2);  // vou inserir a função scanf para coletar os dados fornecidos pelo jogador
    printf ("Digite o código da carta:\n");
    scanf  ("%s", &codigocarta2);
    printf ("Digite o nome da cidade sem espaço:\n");
    scanf ("%s", &nomecarta2);      
    printf ("Insira a população da cidade escolhida:\n");
    scanf ("%lf", &populacao2);  //utilizarei o modificador l para o scanf ler corretamento os dados em double
    printf ("Insira a área da cidade escolhida:\n");
    scanf  ("%lf", &area2);
    printf ("Insira o PIB da cidade escolhida:\n");
    scanf ("%lf", &pib2);
    printf ("Insira a quantidade de pontos turisticos da cidade escolhida:\n");
    scanf ("%d", &turismocarta2);

   // calculo da densidade populacional e do pib per capita

   densidade2 = populacao2 / area2;
   pibpercapita2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade

    printf ("Sua carta possui os seguintes atributos: \n");
    printf ("Estado: %c\n", estado2);  //Utilizarei a função printf para fornecer ao usuario os dados de sua carta
    printf ("Código da carta: %s\n", codigocarta2);
    printf ("Nome da cidade: %s\n", nomecarta2);
    printf ("População: %lf\n", populacao2);
    printf ("Área: %lf km²\n", area2);
    printf ("PIB: %lf bilhões de reais \n", pib2);
    printf ("Pontos turisticos: %d\n", turismocarta2);
    printf ("Densidade populacional: %lf \n", densidade2);
    printf ("PIB per capita: %lf \n", pibpercapita2);

  // Área para comparar valores das cartas

    resultadopopulacao1 = populacao1 > populacao2;
    resultadoarea1 = area1 > area2;
    resultadopib1 = pib1 > pib2;
    resultadoturismo1 = turismocarta1 > turismocarta2;
    resultadodensidade1 = densidade1 < densidade2;
    resultadopercapita1 = pibpercapita1 > pibpercapita2;

    resultadopopulacao2 = populacao2 > populacao1;
    resultadoarea2 = area2 > area1;
    resultadopib2 = pib2 > pib1;
    resultadoturismo2 = turismocarta2 > turismocarta1;
    resultadodensidade2 = densidade2 < densidade1;
    resultadopercapita2 = pibpercapita2 > pibpercapita1;

    // Área para exibir os resultados ao usuario 
    printf ("Agora aparecerá o resultado da comparação das cartas para ver quem é mais forte, se tirar '0' perdeu a rodada, se tirar '1' ganha. Quem mais pontuar '1' será ganhador, caso forem iguais as pontuações é empate. \n");
    printf ("***Resultado da primeira carta*** \n");
    printf ("A população da primeira carta é maior que a da segunda? %lf \n", resultadopopulacao1);
    printf ("A área da primeira carta é maior que a da segunda? %lf \n", resultadoarea1);
    printf ("O PIB da primeira carta é maior que o da segunda? %lf \n", resultadopib1);
    printf ("A primeira carta tem mais pontos turisticos que a segunda? %d \n", resultadoturismo1);
    printf ("A densidade populacional da primeira carta é menor que a da segunda? %lf \n", resultadodensidade1);
    printf ("O PIB per capita da primeira carta é maior que o da segunta? %lf \n", resultadopercapita1);

    printf ("***Resultado da segunda carta*** \n");
    printf ("A população da segunda carta é maior que a da primeira? %lf \n", resultadopopulacao2);
    printf ("A área da segunda carta é maior que a da primeira? %lf \n", resultadoarea2);
    printf ("O PIB da segunda carta é maior que o da primeira? %lf \n", resultadopib2);
    printf ("A segunda carta tem mais pontos turisticos que a primeira? %d \n", resultadoturismo2);
    printf ("A densidade populacional da segunda carta é menor que a da primeira? %lf \n", resultadodensidade2);
    printf ("O PIB per capita da segunda carta é maior que o da primeira? %lf \n", resultadopercapita2);


    return 0;

}
