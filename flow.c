#include <stdio.h>

void captureRange(int minX, int minY, int maxX, int maxY, int rgbRange) {
    printf("captured specific range, parameters: %d, %d, %d, %d, %d\n", minX, minY, maxX, maxY, rgbRange);
}

void captureScreen(int rgbRange) {
    printf("captured full screen, parameters: %d\n", rgbRange);
}

int main() {
    captureScreen(5);


    return 0;
}
