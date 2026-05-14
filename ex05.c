#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	srand(time(NULL));
	int vet[25];
	int num;
	for(int i = 0; i<25; i++){
		vet[i] = rand() % 101;
		printf("%d,", vet[i]);
	}
	printf("Digite um número:\n");
	scanf("%d", &num);

	for(int i = 0; i<25; i++){
		if(num == vet[i]){
			printf("Seu número existe e está na posição %d", i);
		}else{
			printf("Número não encontrado");
		}
	}
	
	getch();
}