#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
float somar(float n1,float n2){
float soma;
soma= n1+ n2;
return soma;		
}
float subtrair(float n1,float n2){
float subtracao;
subtracao=n1-n2;
return subtracao;	
}
float dividir(float n1,float n2){
float divisao;
divisao= n1/n2;
return divisao;	
}
float multiplicar(float n1,float n2){
float multiplicacao;
multiplicacao=n1*n2;
return multiplicacao;	
}
float main (){
setlocale(LC_ALL,"");	
float primeiroNumero,segundoNumero,soma,subtracao,divisao,multiplicacao;

printf("Digite o primeiro numero:");
scanf("%f",&primeiroNumero);	
	
printf("Digite o segundo numero:");
scanf("%f",&segundoNumero);

soma =somar(primeiroNumero,segundoNumero);
printf("\nSoma:%.1f",soma);


subtracao=subtrair(primeiroNumero,segundoNumero);
printf("\nsubtração:%.1f",subtracao);

divisao=dividir(primeiroNumero,segundoNumero);
printf("\ndivisão:%.1f",divisao);

multiplicacao=multiplicar(primeiroNumero,segundoNumero);
printf("\nmultiplicação:%.1f",multiplicacao);
return 0;
}
