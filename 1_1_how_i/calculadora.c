// Conversor de Base numérica em C

//Autor: Hatan Pinheiro Silva

//Email: hatanpinheiro@gmail.com

//Data: 24/04/2020

#include <stdio.h> //lib padrao para entradas e saidas
#include <math.h> //lib para funcoes matematicas
int main()
{
//Variaveis
	int valor, opcao;
    int dec_i, dec_j = 1, sobra, bin = 0;
    int bin_a, bin_b, i, dec = 0;
	    
//Menu inicial
	printf("\n\nMinha Calculadora de Bases");
    printf("\nInforme uma das alternativas");
    printf("\n1 - Decimal para Binario");
    printf("\n2 - Binario para Decimal\n");
    scanf("%d", &opcao);
    
//Aqui é feita a validacao do Menu
    switch(opcao){
        case 1:
            printf("Voce escolheu a opcao 1 \n\n");
        break;

        case 2:
            printf("Voce escolheu a opcao 2 \n\n");
        break;

		default :
            printf("Opcao invalida! \n\n");
        return main();
    }
    
//Aqui é feita a leitura do valor digitado.
	printf("Digite o valor que deseja converter: ");
    scanf("%d", &valor);
    
//Aqui é informado o valor digitado.	
	printf("O valor digitado foi: %d\n", valor);
    
//Aqui voce converte de decimal para binario.
	if(opcao == 1)
	{
		while (valor != 0)
		{
		sobra = valor % 2;
        valor = valor / 2;
        bin = bin+(sobra * dec_j);
        dec_j = dec_j*10;
    	}
	printf("\n O valor em base binaria eh: %d\n", bin);
	}
//Aqui voce converte de binario para decimal.
	else if(opcao == 2){
		for(bin_b=0;valor!=0;++bin_b)
		{
		bin_a=valor%10;
		dec=(bin_a)*(pow(2,bin_b))+dec;
		valor=valor/10;
		}
	printf("\n O valor em base decimal eh: %d\n", dec);
	}
	
//Aqui voce envia mensagem de erro.
	else{
		printf("\nOpcao invalida! Tente outra vez.\n");
	}
return main(); //retorna ao início
}	 
