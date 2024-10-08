#include <stdio.h>

// Define a structure to represent time
struct Time {
    int hours;
    int minutes;
    int seconds;
};

// Function to calculate the difference between two time periods
struct Time calculateTimeDifference(struct Time start, struct Time end) {
    struct Time diff;

    // Calculate difference in seconds
    if (end.seconds < start.seconds) {
        end.seconds += 60;
        end.minutes--;
    }
    diff.seconds = end.seconds - start.seconds;

    // Calculate difference in minutes
    if (end.minutes < start.minutes) {
        end.minutes += 60;
        end.hours--;
    }
    diff.minutes = end.minutes - start.minutes;

    // Calculate difference in hours
    diff.hours = end.hours - start.hours;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    // Input start time
    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

    // Input end time
    printf("Enter end time (hours minutes seconds): ");
    scanf("%d %d %d", &endTime.hours, &endTime.minutes, &endTime.seconds);

    // Calculate the time difference
    difference = calculateTimeDifference(startTime, endTime);

    // Display the difference
    printf("\nTime difference: %d hours, %d minutes, %d seconds\n",
           difference.hours, difference.minutes, difference.seconds);

    return 0;
}
