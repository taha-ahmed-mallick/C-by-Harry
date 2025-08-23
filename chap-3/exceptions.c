#include <stdio.h>

int main() {
    if (0) {
        printf("It won't be executed");
    }
    if (1) {
        printf("This is considered true\n");
    }
    if (-20.5) {
        printf("Even negative values & floats are considered true.\n");
    }
    if ("") {
        printf("lets see if this empty \"\" prints out\n");
        printf("It actually does\n");
        printf("For some reason you can't write empty single quotes.");
    }
    return 0;
}