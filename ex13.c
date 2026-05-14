#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int maior = 0, menor = 100;
	int num;
	for(int i=0; i<10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i=0; i<10; i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	for(int i=0; i<10; i++){
		if(vet[i]<menor){
			menor = vet[i];
		}
	}
	printf("O maior número é: %d\nO menor número é: %d", maior, menor);
	getch();
}