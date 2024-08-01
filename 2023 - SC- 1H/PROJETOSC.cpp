#include<stdio.h>
#include<string.h>
char r[1];
int n,r2,rs;
int x;
int rt [300];
int h,n1;
int binario,binario1, dec, b, resto;


 main (){
     x=1;
	strcpy(r,"s");
 	 if((strcmp(r,"s")==0)||(strcmp(r,"n")==0)){
	printf("[=================================]\n");  
	
	printf(" CALCULADORA DE DECIMAL E BINARIO\n");
 	printf("-----------------------------------\n");
while(strcmp(r,"s")==0) {
	 n=0;
	 r2=0;
	 rs=0;
	 x=1;
	
	 h=0;
	 binario=0;
	 binario1=0;
	 dec=0;
	 b=0;
	 resto=0;
    
	 printf("           ESCOLHA\n");
	 printf("Decimal para binario    |1|\n");
	 printf("Binario para decimal    |2|\n");
	 printf("Fechar programa         |3|\n");
	 
	 scanf("%d",&r2);
	 fflush(stdin);
	 	if((r2==1)||(r2==2)||(r2==3)){
     
        
	
	 		if(r2==1){
	 			printf("Digite seu numero em Decimal:\n");	
	 			scanf("%d",&n);
	 			fflush(stdin);
	 	            n1=n;
	 	             if((n>0)&&(n<9999)){
					  
						       do{
							   
								    x=1;
									rt[h]=n%2;
									n=n/2;
							
										if(n==0){
											x=10;	
										}else{
											x=x-1;	
											h=h+1;
										}
							
							    }while(x<2);
						     x=h;
						     printf("\n");
							printf("...NUMERO BINARIO CALCULADO...\n");
						    printf("\n");
						    printf("== %d DECIMAL = ",n1);
							while(x>=0){
						     
							  printf("%d",rt[x]);
							  x=x-1;	
						    	
						    
							}
						    printf(" EM BINARIO ==\n",n1);
						    printf("\n");
				  
	 	            
	 	             }else{
	 	             	printf("Numero invalido\n");
 	                   		printf("Deseja tentar novamente? s/n\n");
	    					scanf("%s",r);
	 	             	    fflush(stdin);
	 	             	
					  }
	 	     
	 	
			 }
 				if(r2==2){
 					b=1;
				    dec=0;
				      printf("\n");
				    printf("Digite um numero em binario: ");
				    scanf("%d", &binario);
				    fflush(stdin);
				    if(binario>0){
					
					 printf("\n");
				    binario1=binario;
					while (binario > 0) {
				        resto = binario % 10;
				        dec += resto * b;
				        b *= 2;
				        binario /= 10;
				    }
				      printf("...NUMERO DECIMAL CALCULADO...\n");
				     printf("\n"); 
				    printf("== %d BINARIO = %d DECIMAL ==\n",binario1, dec);
 		           
 		             printf("\n");  
 	                   }else{
 	                   	printf("Numero invalido\n");
 	                   		printf("Deseja tentar novamente? s/n\n");
	    					scanf("%s",&r);
	    					fflush(stdin);
						}
  	  
    			}
       
        }else{
      		printf("Sua resposta e invalida!\n");
	    	printf("Deseja tentar novamente? s/n\n");
	    	scanf("%s",&r);
	    	fflush(stdin);
	  	}
	
	  				if(r2==3){
	  
 	  					strcpy(r,"n");
	 
 	 			}
   
}	
  	}else{
  	printf("Resposta invalida");
  	
  	}   
  
  
   
}
