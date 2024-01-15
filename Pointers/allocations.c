#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int *ptr;

    ptr = (int*)malloc(sizeof(int));
    *ptr = 10;

    printf("The value at memory address %p is: %d\n", ptr, *ptr);

    return 0;
}
