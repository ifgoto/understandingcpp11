#include <stdio.h>

#define LOG(...) {\
    fprintf(stderr, "%s: Line %d:\t", __FILE__, __LINE__);\
    fprintf(stderr, __VA_ARGS__);\
    fprintf(stderr, "\n");\
}


int main() {
    int x = 3;
    //.... some code
    LOG("X = %d", x)
    return 0;
}