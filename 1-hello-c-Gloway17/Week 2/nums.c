// nums.c
#include <stdio.h>
#include <limits.h>

int main() {
	// char 1byte (character)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);
	printf("Min: %d\n", CHAR_MIN);

	// signed short int 2byte (integer)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);
	printf("Min: %d\n", SHRT_MIN);

	// unsigned short int 2byte (integer)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);

	// signed int 4byte (integer)
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);
	printf("Min: %d\n", INT_MIN);

	// unsigned int 4byte (integer)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);

	// long has different byte size in each OS
	// Default is 4bytes, but has 8bytes in Linux/Unix/Mac
	// in Windows, long long has 8bytes

	// signed long int 4byte (integer)
	signed int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);
	printf("Min: %d\n", LONG_MIN);

	// unsigned long int 4byte (integer)
	unsigned int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);

	// float (Always exist) 4byte (real number)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value: %f\n", f);
	// printf("Max: %f\n", FLT_MAX);
	// printf("Min: %f\n", FLT_MIN);

	// double (Always exist) 8byte (real number)
	float d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);
	// printf("Max: %f\n", DBL_MAX);
	// printf("Min: %f\n", DBL_MIN);
}