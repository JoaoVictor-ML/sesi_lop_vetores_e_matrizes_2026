#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int maior = 0, menor = 100;
	int num, posx, posy;
	for(int i=0; i<10; i++){
		printf("Digite o %dº número: ", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i=0; i<10; i++){
		if(vet[i]>maior){
			maior = vet[i];
			posx = i;
		}
	}
	for(int i=0; i<10; i++){
		if(vet[i]<menor){
			menor = vet[i];
			posy = i;
		}
	}
	printf("\nO maior número é: %d\nO menor número é: %d", maior, menor);
	printf("\nA posição do Maior é: %d\nA posição do Menor é %d", posx+1, posy+1);
	getch();
}