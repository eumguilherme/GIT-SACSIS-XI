#include<stdio.h>
int soma(int n1, int n2){
	
	return n1+n2;
}

int subtrai(int n1, int n2){
	
	return n1-n2;
}

int multiplicacao(int n1, int n2){
	
	return n1*n2;
}

int divisao(int n1, int n2){
	
	return n1/n2;
}

int main(){
	printf("\nCalculadora!");
	printf("\nSoma de dois numeros: %d",soma(5,5));
	printf("\nSubtracao de dois numeros: %d",subtrai(5,2));
	printf("\nMultiplicacao de dois numeros: %d", multiplicacao(5,3));
	printf("\nDivisao de dois numeros: %d", divisao(8,2));
	return 0;
}
