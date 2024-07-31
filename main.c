#include <stdio.h>

//Emirhan Dizdaroğlu

int CDS(int x, int y) {
    int sum = 0;
    for (int i = 1; i <= x && i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

int CDP(int x, int y) {
    int multiply = 1;
    for (int i = 1; i <= x && i <= y; i++) {
        if (x % i == 0 && y % i == 0) {
            multiply = multiply * i;
        }
    }
    return multiply;
}
/* -> At first I thought like that but this is just find all common divisors of x and y.
void commonDivisorFunction(int x, int y) {
    int i, j;
    printf("Common divisors of X's(%d) Y's(%d) \n", x, y);
    for (i = 1; i <= x; i++) {
        for (j = 1; j <= y; j++) {
            if (x % i == 0 && y % j == 0 && i == j) {
                printf("X: %d Y: %d \n", i, j);

            } else {

            }
        }
    }
}
*/
int main() {
    int n;
    printf("Enter an integer:\n");
    scanf("%d", &n);
    printf("Perfect pairs conditions: (x-y) where (x <= y) and [(x, y) < %d] are:\n", n);
    for (int x = 1; x < n; x++) {
        for (int y = x; y < n; y++) {
            if (x * y == CDS(x, y) * CDP(x, y)) {
                printf("%d-%d\n", x, y);
            }
        }
    }
    //commonDivisorFunction(6, 12);


    return 0;
}