#include <stdio.h>

// Assuming these are global arrays defined somewhere in your code
int player[4] = {10, 20, 30, 0}; // Example player stats
char *stat[4] = {"Gold", "Food", "Military", "Happiness"}; // Example stat names

int statChecker(int result[]) {
    for (int j = 0; j < 4; j++) { 
        if (player[j] <= 0) {
            result[0] = 1; // true
            result[1] = j;
            return 1; // Indicate that a stat reached 0
        }
    }
    return 0; // Indicate no stat reached 0
}

//EVENTS FORMAT
//Change content
void statDisp(int result[]) {
    if (result[0] == 1) {
        printf("Your %s has reached 0, you have failed your people.\n", stat[result[1]]);
    } else {
        for (int i = 0; i < 4; i++) {
            printf("%s: %d\n", stat[i], player[i]);
        }
    }
}

void randomEvents() {
    // This function assumes event[] is defined somewhere in your code
    int random_event = rand() % 25;
    // event[random_event](); // This line is commented out as event[] is not defined in your provided code
}

int main() {
    int result[2] = {0}; // Array to store the result of statChecker()

    // Example usage
    randomEvents(); // Call randomEvents() to simulate events affecting player stats
    if (statChecker(result)) { // Check if any stat has reached 0
        statDisp(result); // Display appropriate message
    } else {
        statDisp(result); // Display current stats
    }

    return 0;
}