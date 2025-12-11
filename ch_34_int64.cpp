#include <windows.h>
#include <stdio.h>

int  main(void)
{
	__int64 x=900000000000000;

	printf("%I64d\n", x);

	return 0;
}