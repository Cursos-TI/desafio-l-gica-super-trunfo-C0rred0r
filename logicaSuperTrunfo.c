#include <stdio.h>

 int main(){
    
    char estado1[20] ="Minas", estado2[20]="Minas", nome1[20] = "Varginha", nome2[20] = "Lambari", codigo1[20] = "S01", codigo2[20] = "R02";
    unsigned long int populacao1=1232500, populacao2=573423, pt1=30, pt2=50;
    float area1=1521.11, area2=5.5, pib1=699.28, pib2=300.50, densidade1, densidade2, pibc1, pibc2, superPoder1, superPoder2;
    int op1, op2;
    float resultado1, resultado2, soma1, soma2, valor1, valor2, valor3, valor4;

/*
    //Cadastro De Cartas
    printf("Bem Vindo ao Super Trunfo, Por Favor digite as Informações Da Primeira Carta \n");
    printf("Digite a Primeira Letra Do Estado Escolhido: \n");
    scanf(" %c", &estado1);

    printf("Digite o Codigo Para Seu Estado, sendo a letra seguido de um numero de 01 a 04  \n");
    scanf(" %s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome1);

    printf("Digite a População da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area da cidade em km²: \n");
    scanf("%f", &area1);

    printf("Digite o PIB Da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a Quantida de pontos turistico: \n");
    scanf("%d", &pt1);

    printf("Agora Digite as informações da Segunda Carta: \n");
    printf("Digite a Primeira Letra Do Estado Escolhido: \n");
    scanf(" %c", &estado2);

    printf("Digite o Codigo Para Seu Estado, sendo A letra seguido de um numero de 01 a 04 \n");
    scanf(" %s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &nome2);

    printf("Digite a População da Cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area da cidade em km²: \n");
    scanf("%f", &area2);

    printf("Digite o PIB Da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a Quantida de pontos turisticos: \n");
    scanf("%d", &pt2); */

 //calculos

    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;
    pibc1 = pib1 / populacao1;
    pibc2 = pib2 / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pt1 + pibc1 + ( (float) 1 / densidade1);
    superPoder2 = populacao2 + area2 + pib2 + pt2 + pibc2 + ( (float) 1 / densidade2);
   
/*
    //Carta 1
    printf("Aqui estão as informações das Cartas registradas: \n");
    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome Da Cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área em KM²: %.2f \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Quantidade De Pontos Turisticos: %d\n", pt1);
    printf("A Densidade populacional é: %.2f \n", densidade1);
    printf("O PIB(Produto Interno Bruto) per capita é: %.2f \n", pibc1);

    //Carta 2
    printf("CARTA 2: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome Da Cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área em KM²: %.2f \n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Quantidade De Pontos Turisticos: %d\n", pt2);
    printf("A Densidade populacional é: %.2f\n", densidade2);
    printf("O PIB(Produto Interno Bruto) per capita é: %.2f\n", pibc2);

    */

//comparação

    printf("###_ Escolha o primeiro atributo a ser comparado _###\n");
    printf("1. Nome Do Pais\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Numero De Pontos Turisticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Selecione Uma Opção: ");
    scanf("%d", &op1);

    switch (op1)
    {
    case 1:
      printf("Sem Função\n");
      break;
    case 2:
      resultado1 = (populacao1 > populacao2) ? 1 : 0;
      printf("você selecionou 'População' como primeiro atributo\n");
      printf("Valor da Carta 1 : %lu - Valor da Carta 2 : %lu\n", populacao1, populacao2);
      valor1 =  populacao1;
      valor3 =  populacao2;
      break;
    case 3:
      resultado1 = area1 > area2 ? 1 : 0;
      printf("você selecionou 'Área' como primeiro atributo\n");
      printf("Valor da Carta 1: %.2f - Valor da Carta 2 : %.2f\n", area1, area2);
      valor1 =  area1;
      valor3 =  area2;
      break;
    case 4:
      resultado1 = pib1 > pib2 ? 1 : 0 ;
      printf("você selecionou 'PIB' como primeiro atributo\n");
      printf("Valor da Carta 1 : %.2f - Valor da Carta 2 : %.2f\n", pib1, pib2);
      valor1 = pib1 ;
      valor3 = pib2 ;
      break;
    case 5:
      resultado1 = pt1 > pt2 ? 1 : 0 ;
      printf("você selecionou 'Pontos Turisticos' como primeiro atributo\n");
      printf("Valor da Carta 1 : %lu - Valor da Carta 2 : %lu\n", pt1, pt2);
      valor1 = pt1 ;
      valor3 = pt2 ;
      break;
    case 6:
      resultado1 = densidade1 < densidade2 ? 1 : 0;
      printf("você selecionou 'Densidade Demográfica' como primeiro atributo\n");
      printf("Valor da Carta 1 : %.2f - Valor da Carta 2 : %.2f\n", densidade1, densidade2);
      valor1 = densidade1;
      valor3 = densidade2;
      break;
   
    default:
    printf("Opcao invalida. Tente novamente\n");
      break;
    }

  //seleção do segundo atributo
    printf("###_ Escolha o Segundo atributo_###\n");
    printf("__Lembrando Que deve ser difente do anterior__\n");
    printf("1. Nome Do Pais\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Numero De Pontos Turisticos\n");
    printf("6. Densidade Demográfica\n");
    printf("Selecione Uma Opção: ");
    scanf("%d", &op2);

  //invalidando a escolha do mesmo atributo
  if (op2 == op1)
  {
    printf("Você Selecionou o mesmo atributo que o anterior, Tente Novamente!\n");
  } else if (op1 == 1 || op2 ==1)
  {
    printf("Valores Invalidos ou sem função, Tente Novamente!!");
  }
  else{
    switch (op2)
    {
    case 1:
      printf("Sem Função\n");
      break;
    case 2:
      resultado2 = populacao1 > populacao2 ? populacao1 : populacao2;
      printf("você selecionou 'População' como segundo atributo\n");
      printf("Valor da Carta 1 : %lu - Valor da Carta 2 : %lu\n", populacao1, populacao2);
      valor2 = populacao1;
      valor4 = populacao2;
      break;
    case 3:
      resultado2 = area1 > area2 ? 1 : 0;
      printf("você selecionou 'Área' como segundo atributo\n");
      printf("Valor da Carta 1 : %.2f - Valor da Carta 2 : %.2f\n", area1, area2);
      valor2 = area1 ;
      valor4 =  area2 ;
      break;
    case 4:
      resultado2 = pib1 > pib2 ? 1 : 0;
      printf("você selecionou 'PIB' como segundo atributo\n");
      printf("Valor da Carta 1 : %.2f - Valor da Carta 2 : %.2f\n", pib1, pib2);
      valor2 =  pib1;
      valor4 =  pib2;
      break;
    case  5:
      resultado2 = pt1 > pt2 ? 1 : 0;
      printf("você selecionou 'Pontos Turisticos' como segundo atributo\n");
      printf("Valor da Carta 1 : %lu - Valor da Carta 2 : %lu\n", pt1, pt2);
      valor2 =  pt1;
      valor4 =  pt2;
      break;
    case 6:
      resultado2 = densidade1 < densidade2 ? 1 : 0;
      printf("você selecionou 'Densidade Demográfica' como Segundo atributo\n");
      printf("Valor da Carta 1 : %.2f - Valor da Carta 2 : %.2f\n", densidade1, densidade2);
      valor2 =  densidade1;
      valor4 =  densidade2;
      break;
   
    default:
    printf("Opcao invalida. Tente novamente\n");
      break;
    }
  

    soma1 = valor1 + valor2;
    soma2 = valor3 + valor4;


  //Resultados
   printf("*** Resultado ***\n");
   printf("Nome Das Cartas: Carta 1 - %s   Carta 2 - %s\n", nome1, nome2);
   printf("A Soma Dos atributos: Carta 1: %.2f - Carta 2: %.2f\n", soma1, soma2);
    
   if (soma1 > soma2)
   {
    printf("Carta 1 Ganhou!!!\n");
   } else if (soma1 == soma2)
   {
    printf("Empate!!\n");
   } else {
    printf("Carta 2 Ganhou!!\n");
   }
  }

    return 0;

}