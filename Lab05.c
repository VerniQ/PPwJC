#include <stdio.h>
#include <time.h>
#include <Windows.h>
void z1() {
	int a = 5, b=4, c=3;

	int* p,* p2, * p3;
	p = &a;
	p2 = &b;
	p3 = &c;
	printf("Address of a: %p\n", (void*)p);
	printf("The value of a: %d\n", *p);
	printf("The difference of a and b is: %d\n", *p - *p2);
	printf("The mean of a, b, c is: %d\n", (*p + *p2 + *p3) / 3);
}
void random(int min, int max, int* tab, int size) {
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		tab[i] = (rand() % max - min) + min;
	}

}
void z2(int min, int max) {
	int a[10], * p, * p2;
	p = &a[0];;
	p2 = &a[3];;
	printf("Address of a[0]: %p\n", (void*)p);
	printf("Address of a[3]: %p\n", (void*)p2);

	int tab[10], (*pointer)[10];
	pointer = tab;
	random(min, max, pointer, 10);
	for (int i = 0; i < 10; i++) {
		int* temp_pointer;
		temp_pointer = &a[i];;
		printf("Adress of  a[%d]: %p\n", i, temp_pointer);
	}




}
void z3() {
	int a[20], *p, sum=0, mean=0 ;
	p = &a;;
	random(1, 49, p, 20);
	for(int i = 0; i < 20; i++) {
		int temp = a[i];
		sum = sum + temp;


	}
	mean = (sum%20) + (sum/20);
	printf("Mean of elements from a is: %d\n", mean);
	for (int j = 0; j < 20; j++) {
		if (a[j] > mean)
			printf("%d\n", a[j]);
	}
}
void z4(int* n) {
	printf("n^2 = %d\n", (*n) * (*n));
}
int z5(int* n, int* k) {
	int a = *k, c = *n;
	int b = a, * p;
	p = &b;
	if (a == 0) {
		b = 1;
	}
	else if (a == 1) {
		b = c;
	}
	else {
		for (int i = 0; i < a; i++) {
			b = b * b;

		}
	}
	return p;

}
int main() {
	//z1();
	//z2(5, 20);
	//z3();
	//int n = 2, * p;
	//p = &n;
	//z4(p);
	printf("%d, \n", *(z5(2, 3)));

	


}