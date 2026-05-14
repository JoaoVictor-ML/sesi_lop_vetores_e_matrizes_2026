#include <stdio.h>
#include <windows.h>
#include <string.h>
void main(){
	char vet[5][20];
	char nome[20];
	SetConsoleOutputCP(CP_UTF8);
	for(int i = 0; i<5; i++){
		printf("digite o %dº nome: ", i+1);
		scanf("%s", &nome);
		strcpy(vet[i], nome);
	}
	for(int i = 0; i<5; i++){
		printf("%s ", vet[i]);
	}
	getch();
}