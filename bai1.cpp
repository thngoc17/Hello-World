#include<stdio.h>
void doicho(double& x, double& y) {
	static double d;
	if (x > y) {
		d = x;
		x = y;
		y = d;
	}
}
int main() {
	double a, b, c;
	printf("Nhap 3 so a, b, c: ");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	doicho(a, b);
	doicho(a, c);
	doicho(b, c);
	printf("Sap xep theo thu tu tang dan: %lf %lf %lf", a, b, c);
	return 0;
}
