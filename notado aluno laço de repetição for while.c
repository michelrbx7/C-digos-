#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"");	
float nota,media,soma=0;
int i;

 for(i=1;i <=2;i++){
 do{
  printf("digite a %i� nota:",i);
  scanf("%f",&nota);
}while(nota <0 || nota >10);
soma+=nota;
}
media=soma/2;
printf("M�dia do aluno:%.1f \n",media);


return 0;
}
