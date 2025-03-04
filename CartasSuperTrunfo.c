#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Declaração Variáveis
    char v_CdCarta_1[5], v_NmCidade_1[50], v_CdEstado_1[1], v_CdCarta_2[5], v_NmCidade_2[50], v_CdEstado_2[1];
    int v_QtdPopulacao_1, v_QtdPontosTuristicos_1, v_QtdPopulacao_2, v_QtdPontosTuristicos_2; 
    float v_QtdArea_1, v_VlPIB_1, v_QtdArea_2, v_VlPIB_2;

    // Cabeçalho da tela
    printf("*** INFORME OS DADOS DA CARTA 1 ***\n");

    // Entrada do Estado
    printf("Informe o Estado: ");
    scanf("%s", &v_CdEstado_1);    

    printf("O estado da caarta 1 é: %s\n", v_CdEstado_1);
    
    printf("Informe o código da carta: ");
    scanf("%s", &v_CdCarta_1);
    
    printf("Informe o código da carta: ");
    scanf("%s", &v_CdCarta_1);
    
    printf("Informe o nome da cidade: ");
    scanf("%s", &v_NmCidade_1);    
    
    
    printf("O código da carga 1 é: %s\n", v_CdCarta_1);
    printf("A cidade da carga 1 é: %s\n", v_NmCidade_1);


    return 0;

}


/*
	• Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
	• Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
	• Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
	• População: O número de habitantes da cidade. Tipo: int
 
	• Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
	• PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int


Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
 
Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30    

*/
