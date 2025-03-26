#include <stdio.h>
#include "football.h"

int count_combinations(int points) {
    int count = 0;
    
    for (int td2pt = 0; td2pt * 8 <= points; td2pt++) {
        for (int td1fg = 0; td1fg * 7 <= points; td1fg++) {
            for (int td = 0; td * 6 <= points; td++) {
                for (int fg = 0; fg * 3 <= points; fg++) {
                    for (int safety = 0; safety * 2 <= points; safety++) {
                        if (td2pt * 8 + td1fg * 7 + td * 6 + fg * 3 + safety * 2 == points) {
                            count++;
                        }
                    }
                }
            }
        }
    }
    
    return count;
}

void print_combinations(int points) {
    printf("Possible combinations of scoring plays if a team’s score is %d:\n", points);
    
    for (int td2pt = 0; td2pt * 8 <= points; td2pt++) {
        for (int td1fg = 0; td1fg * 7 <= points; td1fg++) {
            for (int td = 0; td * 6 <= points; td++) {
                for (int fg = 0; fg * 3 <= points; fg++) {
                    for (int safety = 0; safety * 2 <= points; safety++) {
                        if (td2pt * 8 + td1fg * 7 + td * 6 + fg * 3 + safety * 2 == points) {
                            printf("%d TD + 2pt, %d TD + FG, %d TD, %d 3pt FG, %d Safety\n",
                                   td2pt, td1fg, td, fg, safety);
                        }
                    }
                }
            }
        }
    }
}

int main() {
    int num;
    
    while (1) {
        printf("Enter 0 or 1 to STOP \nEnter the NFL score: ");
        scanf("%d", &num);
        
        if (num <= 1) {
            break;
        } else {
        
        int total_combinations = count_combinations(num);
        printf("Total number of combinations: %d\n", total_combinations);
        
        print_combinations(num);
        }
    }
    
    return 0;
}
