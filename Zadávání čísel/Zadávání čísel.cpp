#include <stdio.h>
#include <math.h>

int main(void)
{
	int vstup;
	printf("Vyber si:\n1-trojuhelnik\n2-obdelnik\n3-kruznice\n");
	scanf("%d", &vstup);

	//Trojuhelnik
	if (vstup == 1) {
		int a, b, c;
		printf("Zadej strany trojuhelnika: ");
		scanf("%d %d %d", &a, &b, &c);
		int pocitadlo = 0;
		if (a + b > c) pocitadlo++;
		if (c + b > a) pocitadlo++;
		if (a + c > b) pocitadlo++;
		if (pocitadlo >= 3) {
			printf("   Trojuhelnik existuje!\n");
			int obt = a + b + c;
			printf("   Obvod trojuhelnika je %d\n", obt);
			float s = (float) (a + b + c) / 2;
			float Ob =(float) sqrt(s * (s - a) * (s - b) * (s - c));
			int pyt = 0;
			if (a * a == b * b + c * c) pyt++;
			if (b * b == a * a + c * c) pyt++;
			if (c * c == a * a + b * b) pyt++;
			if (pyt >= 1) {
				printf("   Trojuhelnik je pravouhly\n");
			}
			else {
				printf("   Trojuhelnik neni pravouhly\n");
			}
		}
		else {
			printf("   Trojuhelnik neexistuje!\n");
		}
	}
	else if (vstup == 2) {
		//Obdelnik
	}
	else {
		//Kruznice
	}
}
