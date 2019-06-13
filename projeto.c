#include<stdio.h>
int soma(n1,n2){
	
	return n1+n2;
}

int subtrai(n1,n2){
	
	return n1-n2;
}
int main(){
	printf("\nCalculadora!");
	printf("\nSoma de dois numeros: %d",soma(5,5));
	printf("\nSubtracao de dois numeros: %d",subtrai(5,2));
	return 0;
}
