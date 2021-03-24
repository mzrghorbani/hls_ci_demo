#include <iostream>
#include <cstdlib>
#include "../Algorithm/sort_top.h"

int main() {

	data_t a[N];
	data_t b[N];

	int i;

	for(i = 0; i < N; i++) {
		a[i] = i;
	}

	for(i = 0; i < N; i++) {
		b[i] = 0;
	}

	FILE *fp;
	fp = fopen("result.dat", "w");

	Sort_top(a, b);

	for(i = 0; i < N; i++) {
		fprintf(fp, "%d\t%d\n", a[i], b[i]);
	}

	fclose(fp);

//    printf("Comparing against output data \n");

//   if (system("diff -w result.dat result.golden.dat")) {
//        fprintf(stdout, "*********************************************\n");
//        fprintf(stdout, "FAIL: Output DOES NOT match the golden output\n");
//        fprintf(stdout, "*********************************************\n");
//        return 1;
//    } else {
//        fprintf(stdout, "*******************************************\n");
//        fprintf(stdout, "PASS: The output matches the golden output!\n");
//        fprintf(stdout, "*******************************************\n");
//        return 0;
//    }
    return 0;
}
