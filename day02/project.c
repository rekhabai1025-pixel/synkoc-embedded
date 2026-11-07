#include <stdio.h>

// At exactly 300, the pump turns ON.
#define DRY_THRESHOLD 300

int main(void) {
    int reading;

    printf("Project: AquaSense smart irrigation\n");

    printf("Pins:\n");
    printf("- Soil moisture sensor: A0\n");
    printf("- Float switch: 2\n");
    printf("- Pump relay: 7\n");
    printf("- Status LED: 13\n");

    printf("Soil reading: ");
    scanf("%d", &reading);

    printf("Reading: %d\n", reading);

    if (reading >= DRY_THRESHOLD) {
        printf("Decision: ON\n");
    } else {
        printf("Decision: OFF\n");
    }

    return 0;
}