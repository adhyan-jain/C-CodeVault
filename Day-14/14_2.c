// Weather Report

#include <stdio.h>

// Define enumeration for weather conditions
enum Weather {
    Sunny, Rainy, Cloudy, Snowy
};

int main() {
    enum Weather currentWeather;
    char *weatherNames[] = {"Sunny", "Rainy", "Cloudy", "Snowy"};

    printf("Enter the current weather condition (0: Sunny, 1: Rainy, 2: Cloudy, 3: Snowy): ");
    scanf("%d", &currentWeather);

    switch (currentWeather) {
        case Sunny:
            printf("The weather is Sunny. Wear sunglasses!\n");
            break;
        case Rainy:
            printf("The weather is Rainy. Don't forget your umbrella!\n");
            break;
        case Cloudy:
            printf("The weather is Cloudy. You might not need sunglasses today.\n");
            break;
        case Snowy:
            printf("The weather is Snowy. Stay warm and build a snowman!\n");
            break;
        default:
            printf("Invalid weather condition entered.\n");
    }

    return 0;
}
