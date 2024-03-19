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
    int senha=123, tentativa  = 0;
    
    do{
    	cabecalho();
        printf("\nInsira o login: ");
        scanf("%s", &login);
        
        printf("\nInsira a senha numérica: ");
        scanf("%i", &senha);
        
         tentativa = tentativa + 1;
        
        
    } while(login!="Michel"&& senha!=123);
      printf("----FIM DO PROGRAMA-----\n");
        
	system("pause");
    return 0;
}
