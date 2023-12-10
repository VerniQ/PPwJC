#include <stdio.h>


int main() {
	printf("%d\n",silnia(5)); // zad1
	printf("%d\n", an(5)); // zad2
	printf("%d\n", NWD(6, 9)); // zad2
	printf("%d\n", fibo(8)); // zad2
	printf("%d\n", dec2bin(23)); // zad2
}
int silnia(int n) {
	if (n == 0 || n == 1) return 1;
	else return n * silnia(n - 1);
}
int an(int n) {
	if (n == 1) return -1;
	if (n > 1) {
		return -1 * zad2(n - 1) * n - 2;
	}
}
int NWD(int a, int b) {
	if (b != 0)return NWD(b, a % b);
	return a;
}
int NWDv2(int a, int b) {
	if (a != b) {
		if (a > b) return NWDv2(a - b, b);
		else return NWDv2(a, b - a);
	}
	return a;
}
int fibo(int n) {
	if (n == 0) return 0;
	else if(n == 1) return 1;
	else if (n>1){
		return fibo(n - 2) + fibo(n - 1);
	}


}
int dec2bin(int n)
{
	if (n <= 0)
		return 0;
	else
		return 10 * dec2bin(n / 2) + (n % 2);
}
