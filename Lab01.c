#include <stdio.h> 



int main() {



	//float a, b, c, d; 

	//printf("Podaj liczbe:"); 

	//scanf("%f", &a); 

	//printf("Podaj liczbe:"); 

	//scanf("%f", &b); 

	//printf("Podaj liczbe:"); 

	//scanf("%f", &c); 

	//printf("Podaj liczbe:"); 

	//scanf("%f", &d); 

	// 

	//float temp = (a+b+c+d)/4; 

	//printf("Srednia arytmetyczna: %f", temp); 



	int intA, a, b;

	printf("-=-=-=-=KALKULATOR=-=-=-=-");
	printf("\nWybierz dzialanie:");
	printf("\n1. Suma");
	printf("\n2. Roznica");
	printf("\n3. Iloczyn");
	printf("\n4. Iloraz");
	printf("\n5. Zamknij");
	printf("\n");
	scanf_s("\n%d", &intA);



	printf("\nPodaj pierwsza liczbe: ");
	scanf_s("%d", &a);


	printf("\nPodaj druga liczbe: ");
	scanf_s("%d", &b);



	switch (intA) {
	case 1:
		printf("%d", a + b);
		break;
	case 2:
		printf("%d", a - b);
		break;
	case 3:
		printf("%d", a * b);
		break;
	case 4:
		if (a != 0 && b != 0) {
			printf("Liczba nie moze byc zerem!");
			
		}
		else {
			printf("%d", a / b);
		}
		break;
	case 5:
		break;
	default:
		printf("Nie rozpoznano polecenia");

	}



}
