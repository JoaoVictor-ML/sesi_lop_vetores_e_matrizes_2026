#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

void main(){
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	int vet[25];
	int ord, temp;
	for(int i = 0; i<25; i++){
		vet[i] = rand() % 101;
		printf("%d ", vet[i]);
	}
	printf("\nDigite qual ordem você deseja:\n Crescente(1)\n Decrescente(2)\n");
	scanf("%d", &ord);
	if(ord == 1) {
		for(int i = 0; i<25; i++){ 
			for(int j = 0; j<25; j++){
			    if(vet[j] > vet[i]){
			    	temp = vet[j];
                	vet[j] = vet[i];
                	vet[i] = temp;
				}	
			}
		}
		for(int i = 0; i < 25; i++) {
        	printf("%d ", vet[i]);
    }
	}else{
		for(int i = 0; i<25; i++){
			for(int j = 0; j<25; j++){
			    if(vet[j] < vet[i]){
			    	temp = vet[j];
                	vet[j] = vet[i];
                	vet[i] = temp;
				}	
			}
		}
		for(int i = 0; i < 25; i++) {
        	printf("%d ", vet[i]);
    }
	}
	getch();
}