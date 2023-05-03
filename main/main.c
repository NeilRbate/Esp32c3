#include <stdio.h>

extern int add3(int one, int two, int three);

void app_main(void) {

	int a = 11, b = 11, c = 20;
	int ret = 0;
	ret = add3(a, b, c);
	printf("ret->%d\n", ret);
}
