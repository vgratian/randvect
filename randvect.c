#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 100
#define MAX_MIN_DELTA (MAX - MIN)

double randreal() {
    return MIN + ( rand() / (double) RAND_MAX ) * MAX_MIN_DELTA;
}

int main(int argc, char *argv[]) {

    int i, n;
    time_t t;

    if (argc != 2) {
        printf("usage: randvect size\n");
        exit(1);
    }

	n = atoi(argv[1]);

	srand((unsigned) time(&t));

    for (i=0; i<n; i++) {
        printf("%.15f\n", randreal());
    }

    return 0;
}
