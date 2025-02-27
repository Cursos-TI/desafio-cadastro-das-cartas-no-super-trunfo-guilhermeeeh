#include <stdio.h>

int main(){

char estado[30];
char codigo[3];
char cidade[50];
int populacao;
float areaemkm;
float PIB;
int pontosturisticos;

char Estado[20];
char Codigo[3];
char Cidade[50];
int Populacao;
float Areaemkm;
float PiB;
int Pontosturisticos;

 printf("Digite o Estado: \n");
 scanf(" %[^\n]", estado);

 printf("Digite o codigo:\n");
 scanf(" %[^\n]", codigo);

 printf("Digite sua cidade: \n");
 scanf(" %[^\n]", cidade);

 printf("Digite a população \n");
 scanf(" %d", &populacao);

 printf("Digite a Área em Km:\n");
 scanf(" %f", &areaemkm);

 printf("digite o PIB:\n");
 scanf(" %f", &PIB);

 printf("digite o número de pontos turísticos:\n");
 scanf(" %d", &pontosturisticos);

   printf("Agora vamos criar a segunda carta\n");
   
   printf("Digite o estado:\n");
   scanf(" %[^\n]", Estado);

   printf("Digite o codigo:\n");
   scanf(" %[^\n]", Codigo);

   printf("Digite a cidade:\n");
   scanf(" %[^\n]", Cidade);

   printf("Digite a populaçao:\n");
   scanf("%d", &Populacao);

    printf("Digite a area em km:\n");
    scanf("%f", &Areaemkm);

    printf("Digite o PIB:\n");
    scanf("%f", PiB);

    printf("Digite os pontos turisticos:\n");
    scanf("%d", &Pontosturisticos);

    printf("\n----DADOS DA CARTA 01----\n");

    printf("Estado: %s\n",estado);
    printf("Código da carta: %s\n",codigo);
    printf("Nome da cidade: %s\n",cidade);
    printf("População: %d habitantes\n",populacao);
    printf("Área: %f em KM²\n",areaemkm);
    printf("PIB:R$ %f Bilhões de reais\n",PIB);
    printf("Números de pontos turísticos: %d\n",pontosturisticos);
    printf("\n");

 
    printf("----DADOS DA CARTA 02----\n");

    printf("Estado: %s\n", Estado);
    printf("Código da carta: %s\n", Codigo);
    printf("Nome da cidade: %s\n", Cidade);
    printf("Populção: %d\n", Populacao);
    printf("Área: %f em km:\n", Areaemkm);
    printf("PIB:R$ %f Bilhões de reais\n", PiB);
    printf("Números de pontos turísticos: %d\n", Pontosturisticos);


    return 0;





}