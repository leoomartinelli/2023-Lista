#include <stdio.h>
#include <omp.h>
#include <time.h>

int main() {
	//
	int atual, prox, anterior;
	//
	printf("Digite a quantidade de termos: ");
	int term;
	scanf("%d", &term);
	int cont, cont1;
	int num_threads;
	int n;
	//
	for (cont1 = 1; cont1 <= 2; cont1++) {
		//add tempo
		n = 10000000;
		clock_t start_time, end_time;
		start_time = clock(); // Marca o início do tempo de execução
		//fim add tempo
		printf("\n==========\n%d Nucleos: \n\n", cont1);
		anterior = 0;
	    atual = 1;
	    prox = 0;
	    num_threads = cont1; // Número de threads a serem usadas
	    omp_set_num_threads(num_threads); // Define o número de threads a serem usadas
	    
	    #pragma omp parallel for
	    for (cont = 1; cont <= term; cont++) {
	    	anterior = atual;
	    	atual = prox;
	    	prox = anterior + atual;
	    	//#pragma omp critical
	        printf("%d ",prox);
	    }
	    end_time = clock(); // Marca o fim do tempo de execução
	    double cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    	printf("\nTempo de execucao: %f segundos\n", cpu_time_used);
	}
	// max nucleo
	n = 10000000;
	clock_t start_time, end_time;
	start_time = clock(); // Marca o início do tempo de execução
	printf("\n==========\nmax Nucleos: \n\n"); 
	anterior = 0;
	atual = 1;
    prox = 0;
	num_threads = 8; // Número de threads a serem usadas
	omp_set_num_threads(num_threads); // Define o número de threads a serem usadas
	    
	#pragma omp parallel for
	for (cont = 1; cont <= term; cont++) {
	    anterior = atual;
	    atual = prox;
	    prox = anterior + atual;
	    //#pragma omp critical
	    printf("%d ",prox);
	}
	end_time = clock();
	double cpu_time_used = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
	printf("\nTempo de execucao: %f segundos\n", cpu_time_used);
    return 0;
    //
}
