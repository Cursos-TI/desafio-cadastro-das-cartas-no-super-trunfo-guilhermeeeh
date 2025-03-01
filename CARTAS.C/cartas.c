#include <stdio.h>

int main() {
    char estado[30];
    char codigo[3];
    char cidade[50];
    int populacao; 
    float areaemkm; 
    float PIB;
    int pontosturisticos;
    

    char Estado2[20];
    char Codigo2[3];
    char Cidade2[50];
    int Populacao2;  
    float Areaemkm2;
    float PiB2;
    int Pontosturisticos2;

    //ENTRADA DE DADOS//

    printf("!!!AO DIGITAR O CODIGO COLOCAR SOMENTE NÚMEROS!!! Exemplo:01,02,03\n");
    printf("\n");

    printf("Digite o Estado:\n ");
    scanf("%s", estado);

    printf("Digite o codigo:\n ");
    scanf("%s", codigo);

    printf("Digite sua cidade:\n ");
    scanf(" %[^\n]", cidade);

    printf("Digite a população:\n ");
    scanf("%d", &populacao);

    printf("Digite a Área em Km: \n");
    scanf("%f", &areaemkm);

    printf("Digite o PIB:\n");
    scanf("%f",  &PIB);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos);

    printf("Agora vamos criar a segunda carta:\n");

    //ENTRADA DE DADOS CARTA2//

    printf("Digite o Estado: \n");
    scanf("%s", Estado2);

    printf("Digite o código: \n");
    scanf("%s", Codigo2);

    printf("Digite a cidade: \n");
    scanf(" %[^\n]", Cidade2);

    printf("Digite a população:\n ");
    scanf("%d", &Populacao2);

    printf("Digite a área em km:\n ");
    scanf(" %f", &Areaemkm2);

    printf("Digite o PIB:\n");
    scanf(" %f", &PiB2);

    printf("Digite os pontos turísticos:\n ");
    scanf("%d", &Pontosturisticos2);

 //EXIBINDO A CARTA 1//

    printf("\n----DADOS DA CARTA 01----\n");
    printf("Estado: %s\n", estado);
    printf("Código da carta: %s%s\n",  estado, codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f em KM²\n", areaemkm);
    printf("PIB: R$ %.2f Bilhões de reais\n", PIB);
    printf("Números de pontos turísticos: %d\n", pontosturisticos);
    printf("\n");

    //EXIBINDO A CARTA 2//
    printf("----DADOS DA CARTA 02----\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da carta: %s%s\n", Estado2, Codigo2);
    printf("Nome da cidade: %s\n", Cidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f em km²\n", Areaemkm2);
    printf("PIB: R$ %.2f Bilhões de reais\n", PiB2);
    printf("Números de pontos turísticos: %d\n", Pontosturisticos2);

return 0;


}