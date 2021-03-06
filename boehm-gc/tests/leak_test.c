#include "leak_detector.h"

int main() {
    int *p[10];
    int i;
    GC_find_leak = 1; /* for new collect versions not compiled  */
    /* with -DFIND_LEAK.                                        */
    for (i = 0; i < 10; ++i) {
        p[i] = malloc(sizeof(int)+i);
    }
    CHECK_LEAKS();
    for (i = 1; i < 10; ++i) {
        free(p[i]);
    }
    for (i = 0; i < 9; ++i) {
        p[i] = malloc(sizeof(int)+i);
    }
    CHECK_LEAKS();
    CHECK_LEAKS();
    CHECK_LEAKS();
    return 0;
}       
