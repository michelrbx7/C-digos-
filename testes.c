#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void cabecalho(){
system("cls || clar");
printf("Puteiro");
fflush(stdin);
}
int main(){
system ("cls || clear");
setlocale(LC_ALL,"");	

int op;
fflush(stdin);
cabecalho();
printf("\n====NIVEL DE SATISFA��O DE ATENDIMENTO=====");
printf("\nEscolha uma op��o abaixo");
printf("\n(1)Bom");
printf("\t(2)Razoavel");
printf("\t(3)�timo");
scanf("%i",&op);

if(op==1){
printf("\nBom :)");
}if(op==2){
printf("\nRazoavel :/");
}if(op==3){
printf("\n�timo :D");}
else{
printf("\nDigite uma op��o v�lida")	;
}
return 0;
}
