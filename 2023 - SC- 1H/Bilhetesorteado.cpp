#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

	int a, b, c, d, e, f, g,x,l;
	int cont;
	int bilhetes;
	char programas [6][30];
	int n [6];
int main(){
	  setlocale(LC_ALL, "Portuguese");
	  srand((unsigned)time(NULL));
	printf("===========================================\n\n");
	printf("ESCALONADOR LOTERIA \n");
	

	for (l=0;l<=5;l++){
                 printf ("Digite o nome do %d° programa:\n",l+1);
					gets (programas[l]);
					printf("------------------------------------------\n\n");
				}
					for (l=0;l<=5;l++){
                       n[l]=l+1;
				}
	
	do{
		for (x=0;x<=4;x++){
			   	int bilhetes = rand() % 10;	
			if ((bilhetes==n[x+1]) && (bilhetes!=0)){
				cont++;
				printf("programa escolhido: %s\n",programas[x]);
				printf("bilhete sorteado: %d\n",bilhetes);			
		        printf("===========================================\n\n");	
			}
		}	
	} while (cont <= 4);	
}
