
#include <stdio.h>

#define THRESHOLD 400

// Function prototypes
float averageReadings(int r[], int n);
int countAbove(int r[], int n, int threshold);

int main() {
    int n, i;
    int r[50];
    float avg;

    scanf("%d", &n);

    if (n < 1 || n > 50) {
        printf("Invalid count\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &r[i]);
    }

    avg = averageReadings(r, n);

    printf("Average: %.2f\n", avg);
    printf("Above threshold: %d\n",
           countAbove(r, n, THRESHOLD));

    if (avg >= THRESHOLD) {
        printf("Decision: ON\n");
    } else {
        printf("Decision: OFF\n");
    }

    return 0;
}

float averageReadings(int r[], int n) {
    int sum = 0;
    int i;

    for (i = 0; i < n; i++) {
        sum += r[i];
    }

    return (float)sum / n;
}

int countAbove(int r[], int n, int threshold) {
    int count = 0;
    int i;

    for (i = 0; i < n; i++) {
        if (r[i] > threshold) {
            count++;
        }
    }

    return count;
}