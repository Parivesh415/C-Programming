#include <stdio.h>

int main() {
    int x = 2;
    int y = 3;

    switch (x) {
        case 1:
            printf("x is 1\n");
            switch (y) {
                case 1:
                    printf("y is 1\n");
                    break;
                case 2:
                    printf("y is 2\n");
                    break;
                default:
                    printf("y is neither 1 nor 2\n");
                    break;
            }
            break;
        case 2:
            printf("x is 2\n");
            switch (y) {
                case 1:
                    printf("y is 1\n");
                    break;
                case 2:
                    printf("y is 2\n");
                    break;
                default:
                    printf("y is neither 1 nor 2\n");
                    break;
            }
            break;
        default:
            printf("x is neither 1 nor 2\n");
            break;
    }

    return 0;
}