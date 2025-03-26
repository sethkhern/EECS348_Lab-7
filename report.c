#include "report.h"
#include <stdio.h>

void convert() {
    float t;
    printf("Enter the temperature: ");
    scanf("%d", t);

    int ct;
    printf("Choose the current scale (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
    scanf("%d", ct);


    if ((ct == 1 && t > -273.15) || (ct == 2 && t > -459.67) || (ct == 3 && t > 0)) {
        int nt;
        printf("Convert to (1) Celsius, (2) Fahrenheit, (3) Kelvin: ");
        scnaf("%d", nt);
    
        if (nt == 3 || nt == 2 || nt == 1) {
        int newtemp;
        if (ct == 1) {
            if (nt == 1) {
                printf("Conversion not needed. Temp is %d", t);
                return 0;
            }
            if (nt == 2) {
                newtemp = celsius_to_fahrenheit(t);
            }
            if (nt == 3) {
                newtemp = celsius_to_kelvin(t);
            }
        }
        if (ct == 2) {
            if (nt == 1) {
                newtemp = fahrenheit_to_celsius(t);
            }
            if (nt == 2) {
                printf("Conversion not needed. Temp is %d", t);
                return 0;
            }
            if (nt == 3) {
                newtemp = fahrenheit_to_kelvin(t);
            }
        }
        if (ct == 3) {
            if (nt == 1) {
                newtemp = kelvin_to_celsius(t);
            }
            if (nt == 2) {
                newtemp = kelvin_to_fahrenheit(t);
            }
            if (nt == 3) {
                printf("Conversion not needed. Temp is %d", t);
                return 0;
            }
        }
    
        if (nt = 1) {
            if (newtemp <= 0) {
                printf("Converted temperature: %d°C", newtemp);
                printf("\nTempterature Category: Freezing");
                printf("\nWeather advisory: You should stay inside.");
            }
            if (newtemp > 0 && newtemp <= 10) {
                printf("Converted temperature: %d°C", newtemp);
                printf("\nTempterature Category: Cold");
                printf("\nWeather advisory: You should wear a jacket.");
            }
            if (newtemp > 10 && newtemp <= 25) {
                printf("Converted temperature: %d°C", newtemp);
                printf("\nTempterature Category: Comfortable");
                printf("\nWeather advisory: You should feel comfortable.");
            }
            if (newtemp > 25 && newtemp <= 35) {
                printf("Converted temperature: %d°C", newtemp);
                printf("\nTempterature Category: Hot");
                printf("\nWeather advisory: You should dress lightly.");
            }
            if (newtemp > 35) {
                printf("Converted temperature: %d°C", newtemp);
                printf("\nTempterature Category: Extreme Heat");
                printf("\nWeather advisory: You should stay inside.");
            }
        }
        if (nt = 2) {
            if (newtemp <= 32) {
                printf("Converted temperature: %d°F", newtemp);
                printf("\nTempterature Category: Freezing");
                printf("\nWeather advisory: You should stay inside.");
            }
            if (newtemp > 32 && newtemp <= 50) {
                printf("Converted temperature: %d°F", newtemp);
                printf("\nTempterature Category: Cold");
                printf("\nWeather advisory: You should wear a jacket.");
            }
            if (newtemp > 50 && newtemp <= 77) {
                printf("Converted temperature: %d°F", newtemp);
                printf("\nTempterature Category: Comfortable");
                printf("\nWeather advisory: You should feel comfortable.");
            }
            if (newtemp > 77 && newtemp <= 95) {
                printf("Converted temperature: %d°F", newtemp);
                printf("\nTempterature Category: Hot");
                printf("\nWeather advisory: You should dress lightly.");
            }
            if (newtemp > 95) {
                printf("Converted temperature: %d°F", newtemp);
                printf("\nTempterature Category: Extreme Heat");
                printf("\nWeather advisory: You should stay inside.");
            }
        }
        if (nt = 3) {
            if (newtemp <= 273.15) {
                printf("Converted temperature: %dK", newtemp);
                printf("\nTempterature Category: Freezing");
                printf("\nWeather advisory: You should stay inside.");
            }
            if (newtemp > 273.15 && newtemp <= 285.15) {
                printf("Converted temperature: %dK", newtemp);
                printf("\nTempterature Category: Cold");
                printf("\nWeather advisory: You should wear a jacket.");
            }
            if (newtemp > 283.15 && newtemp <= 298.15) {
                printf("Converted temperature: %dK", newtemp);
                printf("\nTempterature Category: Comfortable");
                printf("\nWeather advisory: You should feel comfortable.");
            }
            if (newtemp > 298.15 && newtemp <= 308.15) {
                printf("Converted temperature: %dK", newtemp);
                printf("\nTempterature Category: Hot");
                printf("\nWeather advisory: You should dress lightly.");
            }
            if (newtemp > 308.15) {
                printf("Converted temperature: %dK", newtemp);
                printf("\nTempterature Category: Extreme Heat");
                printf("\nWeather advisory: You should stay inside.");
            }
        }
        } else {
            printf("Invalid option for conversion temperature.");
            return 0;
        }
        } else {
        if (ct == 3 && t < 0) {
            printf("Kelvin cannot be negative.");
            return 0;
        }
        if (ct == 2 && t < -491.67) {
            printf("Fahrenheit cannot be below -459.67.");
            return 0;
        }

        if (ct == 1 && t < -273.15) {
            printf("Celsius cannot be below -273.15.");
            return 0;
        }
    
        if (ct > 3) {
            printf("Invalid option for current temperature.");
            return 0;
        }
    }
}

float celsius_to_fahrenheit (float celsius) {
    return 1.8 * celsius + 32;
}

float fahrenheit_to_celsius (float fahrenheit) {
    return (fahrenheit - 32) / 1.8;
}

float celsius_to_kelvin (float celsius) {
    return celsius + 273.15;
}

float kelvin_to_celsius (float kelvin) {
    return kelvin - 273.15;
}

float fahrenheit_to_kelvin(float fahrenheit) {
    return ((fahrenheit - 32) / 1.8) + 273.15;
}

float kelvin_to_fahrenheit(float kelvin) {
    return 1.8 * (kelvin - 273.15) + 32;
}