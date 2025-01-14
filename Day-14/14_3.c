// Seasons of the Year

#include <stdio.h>

// Define enumeration for seasons
enum Season {
    Spring, Summer, Autumn, Winter
};

int main() {
    enum Season currentSeason;
    char *seasonNames[] = {"Spring", "Summer", "Autumn", "Winter"};

    printf("Enter the current season (0: Spring, 1: Summer, 2: Autumn, 3: Winter): ");
    scanf("%d", &currentSeason);

    switch (currentSeason) {
        case Spring:
            printf("The season is Spring. Go hiking and enjoy the blooming flowers!\n");
            break;
        case Summer:
            printf("The season is Summer. Time for a beach day and ice cream!\n");
            break;
        case Autumn:
            printf("The season is Autumn. Enjoy the colorful leaves.\n");
            break;
        case Winter:
            printf("The season is Winter. Build a snowman or sip hot cocoa!\n");
            break;
        default:
            printf("Invalid season entered.\n");
    }

    return 0;
}
