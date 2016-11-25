#include <stdio.h>
#include "combinatorics.h"

extern int extern_count;
int i_global_count;
int global_count = 0;
int main() {
	int n, k, local_count;
	local_count = i_global_count = extern_count = 0;     
printf("Addresses%x %x %x %x %x %x\n", &extern_count, &i_global_count, &global_count, &n, &k, &local_count);

	do {
		printf("Input #%d: Enter n,k: ", ++local_count);
		scanf("%d %d", &n, &k);
		printf("C(%d,%d)=%d\n", n, k, C(n, k));
	} while (n != 0 || k != 0);
	return 0;
}
