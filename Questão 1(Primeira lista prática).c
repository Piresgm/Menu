#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int a,b,d,n,Br;
	int i;
	
	do{
		printf("MENU\n"
		       "opções:\n\n"
		       "Digite 1\n"
		       "Digite 2\n"
		       "Digite 3\n"
	       	       "Digite 4\n"
		       "Digite 5\n"
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
				printf("Opa, como vai a vida?\n\n");
				break;
				
			case 2:
				printf("Muito bem!!\n\n");
				break;
				
			case 3:
				printf("Otimo!!\n\n");
				break;
				
			case 4:
				printf("Perfeito!!\n\n");
				break;
				
			case 5:
				printf("Programar e bem legal.\n\n");
				break;
				
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
