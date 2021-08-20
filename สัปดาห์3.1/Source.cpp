#include<stdio.h>
int main() {
	int a;
	scanf_s("%d",&a);
	int b;
	for (b = 1 ; b <= a ; b = b + 1) {
		printf("*");
	}
		
	return 0;
}