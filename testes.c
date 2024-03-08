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
printf("\n====NIVEL DE SATISFAÇÃO DE ATENDIMENTO=====");
printf("\nEscolha uma opção abaixo");
printf("\n(1)Bom");
printf("\t(2)Razoavel");
printf("\t(3)Ótimo");
scanf("%i",&op);

if(op==1){
printf("\nBom :)");
}if(op==2){
printf("\nRazoavel :/");
}if(op==3){
printf("\nótimo :D");}
else{
printf("\nDigite uma opção válida")	;
}
return 0;
}
