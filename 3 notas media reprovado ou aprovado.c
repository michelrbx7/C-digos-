#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");
//solicitando dados ao usuario
float nota,media,soma=0;
int i;

for(i =1; i<=3; i++){
 printf("Digite a %iª nota:",i);
 scanf("%f",&nota); 
 
soma+=nota;
}
media= soma /3;
printf("\nMedia do aluno :%.1f \n",media);

if(media>=7){
printf("ALUNO APROVADO");
}else if (media>=4){
printf("Recuperação");
}else{
printf("REPROVADO!");
}
return 0;	
}
