#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,d,n,Br;
	int i;
	
	do{
		printf("MENU\n"
		       "opções:\n\n"
		       "Digite 1 - Para saber se é par ou impar\n"
		       "Digite 2 - Para calcular a potênciação de um número de ponto flutuante\n"
		       "Digite 3 - Para calcular uma raiz de um número de ponto flutuante\n"
	       	       "Digite 4 - Para descobrir se um ano é bissexto\n"
		       "Digite 5 - Para calcular a média ponderada de 3 notas\n"
		       "Digite 6\n"
		       "Digite 7\n"
	               "Digite 8\n"
		       "Digite 9\n"
		       "Digite 10\n");
		
		scanf("%d",&i);
		
		switch(i)
		{
			case 0:
				printf("Bye, bye!\n\n");
				break;
				
			case 1:
				int n;
				printf("Digite número: \n\n");
				scanf("%d",&n);
				if(n%2 == 0){
					printf("\nÉ par\n");
				}
				else{
					printf("\nÉ impar\n");
				}
				break;
				
			case 2:{
		
				float n1,p;
				int n2;
				printf("Digite um número: !\n\n");
				scanf("%f", &n1);
				printf("Digite outro número: !\n\n");
				scanf("%d", &n2);
				p=pow(n1,n2);
				printf("O resultado é %e\n", p);	
				break;
			}
				
			case 3:{
				float n1,p;
				int n2;
				printf("Digite um número: !\n\n");
				scanf("%f", &n1);
				printf("Digite outro número: !\n\n");
				scanf("%d", &n2);
				p=pow(n1,1.0/n2);
				printf("O resultado é %e\n", p);
				break;
			}
				
			case 4:{
				int ano;
			    printf("\n\nDigite o ano: ");
 			 	scanf("%d", &ano);
 			 
  			if (ano % 4 == 0) {
   				printf("\nAno bissexto\n\n");
 			}else {
    			printf("\nAno não bissexto\n\n");
 			}
				break;
			}
				
			case 5:{
	float n1, n2, n3, media;
			
				printf("\n\nDigite as notas aqui \n");
			
				printf("\nNota 1: ");
    			scanf("%f", &n1);
    
				printf("\nNota 2: ");
    			scanf("%f", &n2);
    		
   				printf("\nNota 3: ");
   				scanf("%f", &n3);
    
				media = (n1+n2+2*n3)/4;
			
			if (media >=6){
        		printf("\nSua media foi: %.2f\n" , media);
       			printf("\nParabens voce foi aprovado\n\n");
       		
    		} else if(media < 6) {
        	
				printf("\nSua media foi: %.2f" , media);
       			printf("\nInfelizmente voce foi reprovado, estude mais um pouco!\n\n");
    		}
		
				break;
			}
				
			case 6:
				printf("Concordo.\n\n");
				break;
				
			case 7:
				printf("Sem criatividade.\n\n");
				break;
				
			case 8:
				printf("Obrigado professor.\n\n");
				break;
				
			case 9:
				printf("Foi dificil passar do app de giro do github.\n\n");
				break;
				
			case 10:
				printf(" ok\n\n");
				break;
				
			default:
				printf("Numero invalido!\n\n");
				break;
		}
	}while (i != 0);
	
}
