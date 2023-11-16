#include <stdio.h>
#include <stdlib.h>


int main() {
    int RQ[100], choice, i, n, size, headPos,TotalHeadMov;

    printf("\n\n========== Scan or Elevator ==========\n\n");
    printf("\nEnter the total disk size: ");
    scanf("%d", &size);
    printf("\nEnter the number of requests: ");
    scanf("%d", &n);
    printf("\nEnter the request sequence: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &RQ[i]);
    }
    printf("\nEnter the initial head position: ");
    scanf("%d", &headPos);
    printf("Press \n1. For head movement towards lowest value. \n2. For head movement towards highest value: ");
    scanf("%d", &choice);
int max = -100, min = 1000;
    switch (choice) {
        case 1:

    for (int i = 0; i < n; i++) {
        if (RQ[i] > max) {
            max = RQ[i];
        }
    }
     TotalHeadMov = max + headPos;
            break;

        case 2:

    for (int i = 0; i < n; i++) {
        if (min > RQ[i]) {
            min = RQ[i];
        }
    }
    TotalHeadMov = (size - 1 - headPos) + (size - 1 - min);
            break;

        default:
            printf("Invalid input!!!.Please press 1 or 2.");
    }

    printf("\nTotal head movement is = %d", TotalHeadMov);

    getchar();
    return 0;
}

