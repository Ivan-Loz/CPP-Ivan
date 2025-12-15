#include <stdio.h>
#include <string.h>
using namespace std;
int main() {
	int n, i =0, k = 0;
	char x[40], x2[80], *px, *px2;
	px = x;
	px2 = x2;
	puts("txt 39 ");
	gets_s(x);
	n = strlen(x) + 1;
		while (k < n)
		{
			if (strncmp((px + k), "ky", 2) != 0) {
				*(px2 + i++) = *(px + k++);
			}
			else
			{
				*(px2 + i++) = 'A';
				k += 2;
			}
		}
		puts(x2);
}