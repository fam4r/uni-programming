/*
Ingegneria e Scienze Informatiche
Programmazione
Elaborato 1
2016-10-02
*/

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	/* Tipi interi */
	char letter = 'M';
	signed char letter2 = 'F';
	unsigned char letter3 = 'R';
	short int birth = 21;
	unsigned short int year = 1997;
	int birth2 = 19;
	unsigned int little4 = 21;
	long int neglong = -12000;
	unsigned long int people = 12000;

	/* Tipi in virgola mobile */
	float pi = 3.14;
	double pi2 = 6.28318530;
	long double pi3 = 3.1415926535897936;

	/* Tipo, nome, valore attuale, valmin, valmax, occ. in mem*/
	printf("Type\t\t\tName\tValue\t\tMin\t\t\tMax\t\t\tOccupation (byte)\n");
	printf ("char\t\t\tletter\t%c\t\t%d\t\t\t%d\t\t\t%lu\n", letter, CHAR_MIN, CHAR_MAX, sizeof(char));
	printf ("signed char\t\tletter2\t%c\t\t%d\t\t\t%d\t\t\t%lu\n", letter2, SCHAR_MIN, SCHAR_MAX, sizeof(signed char));
	printf ("unsigned char\t\tletter3\t%c\t\t%d\t\t\t%d\t\t\t%lu\n", letter3, 0, UCHAR_MAX, sizeof(unsigned char));

	printf ("short int\t\tbirth\t%d\t\t%d\t\t\t%d\t\t\t%lu\n", birth, SHRT_MIN, SHRT_MAX, sizeof(short int));
	printf ("unsigned short int\tyear\t%hu\t\t%d\t\t\t%d\t\t\t%lu\n", year, 0, USHRT_MAX, sizeof(unsigned short int));
	printf ("int\t\t\tbirth2\t%d\t\t%d\t\t%d\t\t%lu\n", birth2, INT_MIN, INT_MAX, sizeof(int));
	printf ("unsigned int\t\tlittle4\t%u\t\t%d\t\t\t%u\t\t%lu\n", little4, 0, UINT_MAX, sizeof(unsigned int));
	printf ("long int\t\tneglong\t%ld\t\t%ld\t%ld\t%lu\n", neglong, LONG_MIN, LONG_MAX, sizeof(long int));
	printf ("unsinged long int\tpeople\t%lu\t\t%d\t\t\t%lu\t%lu\n",people, 0, ULONG_MAX, sizeof(unsigned long int));

	printf ("float\t\t\tpi\t%f\t%e\t\t%e\t\t%lu\n", pi, FLT_MIN, FLT_MAX, sizeof(float));
	printf ("double\t\t\tpi2\t%f\t%e\t\t%e\t\t%lu\n", pi2, DBL_MIN, DBL_MAX, sizeof(double));
	printf ("long double\t\tpi3\t%.10Lf\t%Le\t\t%Le\t\t%lu\n", pi3, LDBL_MIN, LDBL_MAX, sizeof(long double));

	return 0;
}
