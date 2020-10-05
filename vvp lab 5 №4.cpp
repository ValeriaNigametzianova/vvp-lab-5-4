#include <stdio.h>
#include<math.h>

int AB(int a, int b)
{
	int y;
	y = abs(b - a); return y;
}
int BC(int a, int b)
{
	int y;
	y = abs(b - a);
	return y;
}

int main()
{
	int x1, y1, x2, y2;
	int P, S;
	printf("Enter (x1;y1): (");
	scanf_s("%dn;", &x1);
	printf(";");
	scanf_s("%d", &y1);
	printf("Enter (x2;y2): (");
	scanf_s("%d", &x2);
	printf(";");
	scanf_s("%d", &y2);
	P = (AB(x1, x2) + BC(y1, y2)) * 2;
	S = AB(x1, x2) * BC(y1, y2);
	printf("Ploschad=%d\nPerimetr=%d", P, S);
	return 0;
}