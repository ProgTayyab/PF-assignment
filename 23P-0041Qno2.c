#include <stdio.h>

int collatz(int number) {
    int steps = 0;

    while (number != 1) {
        if (number % 2 == 0) {
            number /= 2;
        } else {
            number = (number * 3) + 1;
        }
        steps++; 
    }

    return steps; 
}

int main() {
    int seriesNum, serieslength;

    printf("Enter a number to find Collatz series length: ");
    scanf("%d", &seriesNum);

    serieslength = collatz(seriesNum);
    printf("The Collatz series length for %d is %d\n", seriesNum, serieslength);

    return 0;
}
