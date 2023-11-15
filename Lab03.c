#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#define SIZE 20

void zad1() {
	int tab[10];
	int temp = 3;
	for (int i = 0; i < 10; i++) {
		tab[i] = temp;
		temp = temp + 3;
		printf("%d \n", tab[i]);
	}
}
void zad2() {
	int tab[10];
	int temp = 3;
	int temp2 = 0;
	for (int i = 0; i < 10; i++) {
		tab[i] = temp;
		temp = temp + 3;
		if (temp2 == 0) {
			printf("%d \n", tab[i]);
			temp2 = 1;
		}
		else {
			temp2--;
		}
		
	}
}
void zad3() {
	int tab[SIZE];
	int a, temp=1;
	printf("Podaj wartosc a:\n");
	scanf_s("%d", &a);
	for (int i = SIZE - 1; i > 0; i--) {
		tab[i] = a - temp * 5;
		temp++;
		printf("%d \n", tab[i]);
	}
}
void zad4() {
	srand(time(NULL));
	int tab[SIZE];
	int min = 50;
	for (int i = 0; i < SIZE-1; i++) { //losowanie i wczytywanie elementow do tablicy
		tab[i] = rand() % 74 - 23;
		if (tab[i < 50]) min = tab[i];
	}

	printf("Minimalna wartosc w tablicy: %d", min);
	
}
void zad5() {
	int a, b;
	printf("Podaj dwie wartosci poczatkowe: \n");
	scanf_s("%d \n", &a);
	scanf_s("%d", &b);
	int tab[SIZE];
	tab[0] = a;
	tab[1] = b;


	for (int i = 2; i < SIZE - 1; i++) {
		tab[i] = tab[i - 2] + tab[i - 1];
		printf("# %d\n", tab[i]);
	}
}
void zad6() {

	int tab[SIZE];
	for (int i = 0; i < (SIZE / 2); i++) {
		tab[i] = i;
		tab[i + 10] = i;
	}
	for (int j = 0; j < SIZE; j++) {
		printf("%d, %d \n", j, tab[j]);
	}
}
void printTab2D(int** tab, int size) {
	for (int i = 0; i < size; i++) {
		printf("|");
		for (int j = 0; j < size; j++) {
			printf("%d ", tab[i][j]);
		}
		printf("|\n");
	}
}
int sumaPrzekatnej(int** tab, int size) {
	int suma = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) suma = suma + tab[i][j];
		}
	}
	return suma;
}
void zad7() {
	srand(time(NULL));
	printf("Podaj rozmiar macierzy: \n");
	int size;
	scanf_s("%d", &size);
	int** tab = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++) {
		tab[i] = (int*)malloc(size * sizeof(int));
	}

	for (int j = 0; j < size; j++) {
		for (int k = 0; k < size; k++) {
			tab[j][k] = rand() % 50 + 1;
			
		}
	}
	printTab2D(tab, size);
	printf("Suma przekatnej wynosi: %d", sumaPrzekatnej(tab, size));

}
void fillTab(int** tab, int size) {
	srand(time(NULL));
	for (int j = 0; j < size; j++) {
		for (int k = 0; k < size; k++) {
			tab[j][k] = rand() % 50 + 1;

		}
	}
	
}
void sumMacierzy(int** A, int** B, int** C, int size) {
	for (int  i= 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			C[i][j] = A[i][j] + B[i][j];

		}
	}
}
void zad8() {
	printf("Podaj rozmiar macierzy: \n");
	int size;
	scanf_s("%d", &size);

	int** A = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++) {
		A[i] = (int*)malloc(size * sizeof(int));
	}

	int** B = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++) {
		B[i] = (int*)malloc(size * sizeof(int));
	}

	int** C = (int**)malloc(size * sizeof(int*));
	for (int i = 0; i < size; i++) {
		C[i] = (int*)malloc(size * sizeof(int));
	}
	fillTab(A, size);
	fillTab(B, size);
	printf("Macierz A:\n");
	printTab2D(A, size);
	printf("Macierz B:\n");
	printTab2D(B, size);
	sumMacierzy(A, B, C, size);
	printf("\n Macierz C(wynik dodawania macierzy A i B): \n");
	printTab2D(C, size);
}

int main() {
	//zad1();
	//printf("\n");
	//zad3();
	//zad4();
	//zad5();
	//zad6();
	//zad7();
	zad8();
}