#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
void zad1() {
	float a, suma = 0, max = 0;
	int ileLiczbWprowadzono = 0;
	printf("Wpisuj liczby");
	do {
		scanf_s("%f", &a);


		if (a > 0) {
			suma = suma + a;
			if (a > max) max = a;
			ileLiczbWprowadzono++;
		}

	} while (a >= 0);

	printf("Suma: %f", suma);
	printf("\nSrednia: %f", suma / ileLiczbWprowadzono);
	printf("\nMaksymalna wartosc: %f", max);
}
void zad2() {
	float a=0, sumaUjemnych=0, sumaDodatnich=0, liczbaDodatnich=0, liczbaUjemnych=0;
	printf("Podaj 10 liczb \n");
	for (int i = 0; i < 10; i++) {
		scanf_s("%f", &a);
		if (a > 0) {
			liczbaDodatnich++;
			sumaDodatnich = sumaDodatnich + a;
		}
		else {
			liczbaUjemnych++;
			sumaUjemnych = sumaUjemnych + a;
		}
	}
	printf("Suma dodatnich: %f Ilosc: %f", sumaDodatnich, liczbaDodatnich);
	printf("Suma ujemnych: %f Ilosc: %f", sumaUjemnych, liczbaUjemnych);

}
int czyParzysta(int n) {
	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

void zad3() {
	int n=0;
	int suma = 0;
	printf("Podaj dlugosc ciagu:\n");
	scanf_s("%d", &n);
	printf("Podaj kolejno elementu ciagu:\n");
	for (int i = 0; i < n; i++) {
		int temp;
		scanf_s("%d", &temp);
		if (czyParzysta(temp)) suma = suma + temp;
	}
	printf("Suma wszystkich parzystych elementow ciagu: %d", suma);
}
void zad4() {
	srand(time(NULL));
	int n = 0, suma =0;
	printf("Podaj dlugosc ciagu:\n");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int temp;
		//printf("%d \n", rand() % 56 - 10);
		temp = rand() % 56 - 10;
		if (czyParzysta(temp)) suma = suma + temp;
	}
	printf("Suma wszystkich parzystych elementow ciagu: %d", suma);
}
void zad5() {
	int n;
	float suma = 0;
	printf("Podaj ilosc studentow:\n");
	scanf_s("%d", &n);
	int originalN = n;
	while (n > 0) {
		float temp=0;
		printf("Podaj ilosc puntkow kolejnego studenta: ");
		scanf_s("%f", &temp);
		suma = suma + temp;
		n--;
	}
	printf("Srednia punktow: %f", suma/originalN);
}
void zad6(int n) {
	switch (n) {
	case 1:
		for (int i = 1; i < 100; i++) printf("%d \n", i);
		break;
	case 2:
		for (int i = 100; i > 0; i--) printf("%d \n", i);
		break;
	case 3:
		for (int i = 7; i < 78; i+=7) printf("%d \n", i);
		break;
	case 4:
		for (int i = 20; i > 0; i -= 2) printf("%d \n", i);
		break;
	default:
		printf("Nie rozpoznano, dostepne opcje: 1, 2 ,3 ,4");
		break;
	}
	
}
void zad7(int n) {
	int i, j;
	int temp = 0;
	int temp2 = 0;
	switch (n) {
		case 1:
			for (i = 0; i < 10; i++) {
				for (j = 0; j <= i; j++)
					printf("X");
				printf("\n");
			}
			break;
		case 2:
			for (i = 0; i < 10; i++) {
				for (j = 9; j >= i; j--)
					printf("X");
				printf("\n");
			}
			break;
		case 3:
			for (i = 0; i < 10; i++) {
				for (int k = 0; k < i; k++) printf(" ");
				for (j = 9; j >= i; j--) {
					printf("X");
				}
				printf("\n");
			}
			break;
		case 4:
			for (i = 0; i < 10; i++) {
				
				for (int k = 0; k < temp; k++) {
					printf(" ");
				}

				for (j = 9; j >= i; j--) {
					
					printf("X");

				}
				printf("\n");
				temp++;
			}
			break;
		case 5:
			temp = 10;
			temp2 = 2;
			for (i = 0; i < 10; i++) {

				for (int k = 0; k < temp; k++) {
					printf(" ");
				}

				for (j = 0; j <temp2; j++) {

					printf("X");

				}
				printf("\n");
				temp--;
				temp2 = temp2 + 2;
			}
			break;


			
			
	}
}
int main(){
	//zad1();
	//zad2();
	//zad3();
	//zad4();
	//zad5();
	//zad6(4);
	zad7(5);
}