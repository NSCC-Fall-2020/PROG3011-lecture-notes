#include <stdio.h>

int main() {

    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int i = 0;
    while (i < sizeof(nums)/sizeof(nums[0])) {
        printf("nums[%i] = %i\n", i, nums[i]);
        i++;
        /*
        i = i + 1;
        i += 1;
        */
    }

    i = 0;
    do {
        printf("nums[%i] = %i\n", i, nums[i]);
        i++;
    } while (i < 10);

    for (i = 0; i < 10; i++) {
        printf("nums[%i] = %i\n", i, nums[i]);
    }

    /*
    for (;;) {
         run forever
    }
    */

    for( int i=0, j=4; i < 4 && j > 0; i += 1, j--) {
        printf("i = %i, j = %i\n", i, j);
    }

    for(;;i++){
        if (i > 10) break;
        printf("%i\n", i);
    }

    return 0;
}