#include <stdio.h>
#include "convert.h"
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc > 0) {
        char *extra;
        long f = strtol(argv[1], &extra, 10 );
        printf("%ld fahrenheit is %.2f centigrade\n",f,ftoc(f));
    }
    printf("Hello, World!\n");
    return 0;
}
