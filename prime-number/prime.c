#include <stdio.h>

int main(void)
{
	unsigned long long prime = 0x7fffffff;
	unsigned long long tmp;

	printf("print bigger 0x%llx, %llu prime number\n", prime, prime);

	while (1) {
		tmp = 2;
		while (tmp < prime) {
			if ((prime % tmp) == 0)
				goto fail;
			
			tmp ++;

		}
		printf("0x%1lx, %llu\r\n", prime, prime);
	
fail:
		prime++;
	
	}

	return 0;
}
