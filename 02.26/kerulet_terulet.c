#include <stdio.h>
#include <math.h>

int teglalap_terulet(int a, int b){
	return a * b;
}

int teglalap_kerulet(int a, int b){
	return 2 * (a + b);
}

double kor_terulet(int r){
	return r * r * acos(-1);
}
	

int main(){

	int a,b;
	printf("Kérem az a értékét!\n");
	scanf("%d",&a);

	printf("Kérem a b értékét!\n");
	scanf("%d",&b);

	int kerulet = 2 * (a+b);
	int terulet = a*b;

	printf("A téglalap kerülete: %d \n",kerulet);
	printf("A téglalap területe: %d \n",terulet);

	printf("A téglalap kerülete: %d \n",teglalap_kerulet(a,b));
	printf("A téglalap területe: %d \n",teglalap_terulet(a,b));

	printf("A kör területe: %f \n",kor_terulet(4));









}
