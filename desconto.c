#include <stdio.h>
#include <locale.h>

float inflacionar(float preco){
	float novoPreco;
	if(preco <100){
	 novoPreco=preco *1.1;	
	 }else{
	 	novoPreco=preco *1.2;
	 }
	 return novoPreco;
}
int main(){
 setlocale(LC_ALL,"");
 float preco,resultado;
 
 printf("Digite o preço de um produto:");
 scanf("%f",&preco);
 resultado=inflacionar(preco);
 printf("\n===resultado===\n");
 printf("resultado :R$ %.2f \n",resultado);
 return 0;
}
