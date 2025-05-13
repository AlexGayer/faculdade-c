#include <stdio.h>


int main() {
    
    char produtoA[30] = "Produto A";
    char produtoB[30] = "Produto B";

    unsigned int estoqueA = 1000;   
    unsigned int estoqueB = 2000;

    float precoA = 10.50; 
    float precoB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valortotalA;
    double valortotalB;

    int resultadoA, resultadoB;


    //Exibir as informações dos produtos
    printf("Produto %s tem estoque de %u unidades e o valor unitário é R$ %.2f \n", produtoA, estoqueA, precoA);
    printf("Produto %s tem estoque de %u unidades e o valor unitário é R$ %.2f \n", produtoB, estoqueB, precoB);

    //Comparaçoes com o valor mínimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("Produto %s tem estoque mínimo %d \n", produtoA, resultadoA);
    printf("Produto %s tem estoque mínimo %d \n", produtoB, resultadoB);


    //Comparação entre os valores totais dos produtos

    printf("Valor total de A é maior que valor total de B? %d \n", (estoqueA * precoA) > (estoqueB * precoB));

    return 0;
}