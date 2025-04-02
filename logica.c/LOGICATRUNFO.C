#include <stdio.h>

int main(){

char estado;
char codigodacarta [10];
char nomedacidade [30];
int populacao;
float areaemkm;
float PIB;
int pontosturisticos;

char Estado;
char Codigodacarta [10];
char Nomedacidade [30];
int Populacao;
float Areaemkm;
float pIB;
int Pontosturisticos;

printf("Digite uma letra entre A a H para identificar o Estado:\n");
scanf(" %c", &estado);

printf("Digite o código da carta:\n");
scanf(" %[^\n]", codigodacarta);

printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", nomedacidade);

printf("Digite a população: obs não usar . ou ,\n");
scanf(" %d", &populacao);

printf("digite a área em KM²:\n");
scanf(" %f",&areaemkm);

printf("digite o PIB:\n");
scanf(" %f",&PIB);

printf("digite o número de pontos turísticos:\n");
scanf(" %d",&pontosturisticos);

//cadatro da segunda carta 

printf("\n");
printf("Atenção!\nAgora vamos criar a segunda carta:\n");
printf("\n");

printf("Digite uma letra entre A a H para identificar o Estado:\n");
scanf(" %c", &Estado);

printf("Digite o código da carta:\n");
scanf(" %[^\n]", Codigodacarta);

printf("Digite o nome da cidade:\n");
scanf(" %[^\n]", Nomedacidade);

printf("Digite a população: obs não usar . ou ,\n");
scanf(" %d", &Populacao);

printf("digite a área em KM²:\n");
scanf(" %f",&Areaemkm);

printf("digite o PIB:\n");
scanf(" %f",&pIB);

printf("digite o número de pontos turísticos:\n");
scanf(" %d",&Pontosturisticos);

float pibpercapita = PIB / populacao;
float densidadepercapita = populacao / areaemkm;

float Pibpercapita = pIB / Populacao ;
float Densidadepercapita = Populacao / Areaemkm;

printf("\n----DADOS DA CARTA 01----\n");

printf("Estado: %c\n",estado);
printf("Código da carta: %s\n",codigodacarta);
printf("Nome da cidade: %s\n",nomedacidade);
printf("População: %d\n",populacao);
printf("Área: %.2f KM²\n",areaemkm);
printf("PIB: %.2f bilhões de reais\n",PIB);
printf("Números de pontos turísticos: %d\n",pontosturisticos);
printf("Densidade populacional: %.2fhab/km²\n",densidadepercapita);
printf("PIB per capita : %.2f reais\n",pibpercapita);
printf("\n");

printf("\n----DADOS DA CARTA 02----\n");

printf("Estado: %c\n",Estado);
printf("Código da carta: %s\n",Codigodacarta);
printf("Nome da cidade: %s\n",Nomedacidade);
printf("População: %d\n",Populacao);
printf("Área: %.2f KM²\n",Areaemkm);
printf("PIB: %.2f bilhões de reais\n",pIB);
printf("Números de pontos turísticos: %d\n",Pontosturisticos);
printf("Densidade populacional: %.2f hab/km²\n",Densidadepercapita);
printf("PIB per capita : %.2f reais\n",Pibpercapita);
printf("\n");

    return 0;
}