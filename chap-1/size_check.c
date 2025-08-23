#include <stdio.h>

int main() {
    printf("Size of int:          %zu bytes\n", sizeof(int));
    printf("Size of float:        %zu bytes\n", sizeof(float));
    printf("Size of char:         %zu bytes\n", sizeof(char));
    printf("Size of double:       %zu bytes\n", sizeof(double));
    printf("Size of long:         %zu bytes\n", sizeof(long));
    printf("Size of long long:    %zu bytes\n", sizeof(long long));
    printf("Size of pointer:      %zu bytes\n", sizeof(void*));
    return 0;
}
// ┌─────────────────┬───────────┬────────────┐
// │ Data Type / OS  │   WIN64   │ WSL:Ubuntu │
// ├─────────────────┼───────────┼────────────┤
// │ int             │  4 bytes  │  4 bytes   │
// │ float           │  4 bytes  │  4 bytes   │
// │ char            │  1 bytes  │  1 bytes   │
// │ double          │  8 bytes  │  8 bytes   │
// │ long            │  4 bytes  │  8 bytes   │
// │ long long       │  8 bytes  │  8 bytes   │
// │ pointer         │  4 bytes  │  8 bytes   │
// └─────────────────┴───────────┴────────────┘