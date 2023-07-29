#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Input number of test cases

    while (T--) {
        int N;
        scanf("%d", &N); // Input number of cars for this test case

        int maxSpeed[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &maxSpeed[i]); // Input the maximum speeds of the cars
        }

        int maxSpeedCars = 0; // Counter for cars moving at their maximum speed
        int currentMaxSpeed = maxSpeed[N - 1]; // Initialize currentMaxSpeed with last car's speed

        // Start iterating from the second last car to the first car
        for (int i = N - 2; i >= 0; i--) {
            if (maxSpeed[i] > currentMaxSpeed) {
                currentMaxSpeed = maxSpeed[i];
            } else {
                maxSpeedCars++; // If the car's speed is less than or equal to the currentMaxSpeed, it can move at its maximum speed
            }
        }

        // Count the last car (always moving at its maximum speed)
        maxSpeedCars++;

        printf("%d\n", maxSpeedCars); // Output the number of cars moving at their maximum speed
    }

    return 0;
}
