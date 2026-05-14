#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[3][3];
	int num;
	for(int i = 0; i<3; i++){
		for(int j = 0; j<3; j++){
			printf("Digite um número pra %dº linha:",i+1);
			scanf("%d", &num);
			matriz[i][j] = num;
		}
	}
	for(int i = 2; i >=0; i--){
		for(int j = 2; j>=0; j--){
			printf("%d\t", matriz[i][j]);
		}
		printf("\n");
	}
	getch();
}