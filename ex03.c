#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	int vet[25];
	int maior = 0;
	for(int i = 0; i<25; i++){
		vet[i] = rand() % 101;
		printf("%d,", vet[i]);
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	printf("\nO maior número é %d", maior);
	getch();
}