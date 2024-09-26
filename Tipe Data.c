#include "stdio.h"
#include "conio.h"

int main()
{
	int x;
	float y;
	char z;
	double w;
	x=24343093;     /* variable x diisi dengan 24343093 */
	y=9.45;         /* variable y diisi dengan 9.45 */
	z='H';          /* variable z diisi dengan karakter “H” */
	w=3.45E+20;     /* variable w diisi dengan 3.45E+20 */
	printf("Nilai dari x adalah : %u\n",x);  /* Menampilkan isi variable x */
	printf("Nilai dari y adalah : %f\n",y);  /* Menampilkan isi variable y */
	printf("Nilai dari z adalah : %c\n",z);  /* Menampilkan isi variable z */
	printf("Nilai dari w adalah : %lf\n",w);  /* Menampilkan isi variable w */
	getch;
}