// /* hello.c  -- 输出hello world*/ 
// #include <stdio.h>


// int main() {
// 	printf("Hello World!\n");
// 	return 0;
// }

// /* showf_pt.c -- 以两种方式显示float类型的值*/

// #include <stdio.h>

// int main(void) {
// 	float about = 32000.0;
// 	double abet = 2.14e9;
// 	long double dip = 5.32e-5;

// 	printf("%f can be written %e\n", about, about);

// 	// 下一行要求编译器支持 C99 或其中相关特性
// 	printf("And it's %a in hexadecimal, poers of 2 notation\n", about);

// 	printf("%f can be writen %e\n", abet, abet);
// 	printf("%Lf can be writen %Le\n", dip, dip);

// 	return 0;
// }

// /* floaterr,c -- 演示舍入错误 */
// #include <stdio.h>

// int main(void) {
// 	float a, b;
// 	b = 2.0e20 + 1.0;
// 	a = b - 2.0e20;
// 	printf("%f\n", a);
// 	return 0;
// }


/* sizeof */
#include <stdio.h>

int main() {
	int x[10];
	printf("%d\n", sizeof(x));
	return 0;
}
