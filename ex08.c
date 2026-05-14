#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[5];
	int num, temp;
	for(int i = 0; i<5; i++){
		printf("Digite o %dº numero:", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i = 4; i>=0; i--){
		printf("%d ", vet[i]);
	}
	getch();
}