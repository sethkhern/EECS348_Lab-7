#include "football.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    int num;

    while (1) {
        printf("Enter 0 or 1 to STOP \nEnter the NFL score: ");
        scanf("%d", &num);

        if (num <= 1) {
            break; // Stop when user enters 0 or 1
        }

        int total_combinations = count_combinations(num);
        printf("Total number of combinations: %d\n", total_combinations);
        
        print_combinations(num);
    }

    return 0;
}