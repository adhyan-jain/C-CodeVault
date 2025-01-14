// Traffic Light Simulation

#include <stdio.h>

// Define enumeration for traffic lights
enum TrafficLight {
    Red, Green, Yellow
};

// Function to get the next traffic light
enum TrafficLight getNextLight(enum TrafficLight currentLight) {
    return (currentLight + 1) % 3;
}

int main() {
    enum TrafficLight current = Red;
    char *lightNames[] = {"Red", "Green", "Yellow"};

    printf("Current light: %s\n", lightNames[current]);
    enum TrafficLight next = getNextLight(current);
    printf("Next light: %s\n", lightNames[next]);

    return 0;
}
