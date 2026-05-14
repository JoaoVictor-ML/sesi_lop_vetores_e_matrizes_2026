#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int vet[10];
	int num, temp;
	for(int i = 0; i<10; i++){
		printf("Digite o %dº número:", i+1);
		scanf("%d", &num);
		vet[i] = num;
	}
	for(int i = 0; i<10; i++){
		for(int j = 0; j<10; j++){
			if(vet[i]<vet[j]){
				temp = vet[j];
				vet[j] = vet[i];
				vet[i] = temp;
			}
		}
	}
	for(int i = 0; i<10; i++){
		printf("%d ", vet[i]);
	}
	getch();
}