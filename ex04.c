#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int matriz[5][5];
	int menor = 100;
	int x, y;
	srand(time(NULL));
	for(int i = 0; i<5; i++){
		for(int j = 0; j<5; j++){
			matriz[i][j] = rand() % 101;
			printf("%d\t", matriz[i][j]);
			if(matriz[i][j]< menor){
				menor = matriz[i][j];
				x = i;
				y = j;
			}
		}
		printf("\n");	
	}
	printf("\nO menor número é %d e a posição é linha %d, coluna %d", menor,x+1, y+1);
	getch();
}