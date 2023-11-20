#include <stdio.h>
#include <stdlib.h>


int main() {
    // 1
    char* arr[4];
    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    arr[3] = 'd';

    for (int i = 0; i < 4; ++i) {
        printf("%c ", *(arr + i));
    }
    printf("\n");
    // 2

    char* arr2 = (char*)malloc(4 * sizeof(char));
    arr2[0] = 'a';
    arr2[1] = 'b';
    arr2[2] = 'c';
    arr2[3] = 'd';

    for (int i = 0; i < 4; ++i) {
        printf("%c ", arr2[i]);
    }
    free(arr2);
    
    return 0;
}
