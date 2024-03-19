#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void cabecalho(){
system("cls || clear ");
printf("----------------NASA----------------");	
}
int main() {
setlocale(LC_ALL,"");	
    
    char login[100]="Michel";
    int senha=123, tentativas = 0;
    
    do{
    	cabecalho();
        printf("\nInsira o login: ");
        scanf("%s", &login);
        
        printf("\nInsira a senha numérica: ");
        scanf("%i", &senha);
        
         tentativas = tentativas + 1;
        
        
    } while(tentativas < 3);
  
    if(login!="Michel" || senha!=123){
      printf("ACESSO NEGADO \n");
	}else{
	printf("ACESSO CONCEDIDO \n");	
	}
	system("pause");
    return 0;
}
