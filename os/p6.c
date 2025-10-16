#include <stdio.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    for (long long i = 0; i < 10000000000; i++);

    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("%d\n", CLOCKS_PER_SEC);
    printf("Execution time: %f seconds\n", cpu_time_used);
    return 0;
}
