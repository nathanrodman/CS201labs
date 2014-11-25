#include <stdio.h>
#include <stdlib.h>

int main(int argc, char ** argv)
{
	int num = strtol(argv[1], NULL, 0);
	int byte1, byte2, byte3, byte4;
	int sum;

	num = num & 0x18181818;
	
	byte1 = (num >> 3) & 3;
	byte2 = (num >> 11) & 3;
	byte3 = (num >> 19) & 3;
	byte4 = (num >> 27) & 3;

	sum = byte1 + byte2 + byte3 + byte4;
	printf("sum = %d\n", sum);

	return 0;
}
