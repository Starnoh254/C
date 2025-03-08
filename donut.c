#include <stdio.h>
#include <string.h>
#include <math.h>
#include <unistd.h>  // For usleep()

#define SCREEN_WIDTH  80
#define SCREEN_HEIGHT 24
#define R1 1.0  // Radius of the tube
#define R2 2.0  // Radius of the donut
#define K2 5.0  // Distance from viewer
#define K1 15   // Scale factor

void render_frame(double A, double B) {
    char buffer[SCREEN_WIDTH * SCREEN_HEIGHT];
    double z_buffer[SCREEN_WIDTH * SCREEN_HEIGHT];

    memset(buffer, ' ', sizeof(buffer)); // Fill buffer with spaces
    memset(z_buffer, 0, sizeof(z_buffer)); // Initialize depth buffer

    for (double theta = 0; theta < 2 * M_PI; theta += 0.07) {
        for (double phi = 0; phi < 2 * M_PI; phi += 0.02) {
            // Calculate torus coordinates
            double cosTheta = cos(theta), sinTheta = sin(theta);
            double cosPhi = cos(phi), sinPhi = sin(phi);

            // 3D coordinates before rotation
            double x = (R2 + R1 * cosTheta) * cosPhi;
            double y = (R2 + R1 * cosTheta) * sinPhi;
            double z = R1 * sinTheta;

            // Rotate around X-axis
            double y1 = y * cos(A) - z * sin(A);
            double z1 = y * sin(A) + z * cos(A);

            // Rotate around Z-axis
            double x2 = x * cos(B) - y1 * sin(B);
            double y2 = x * sin(B) + y1 * cos(B);

            double depth = 1 / (z1 + K2); // Perspective projection
            int screenX = (int)(SCREEN_WIDTH / 2 + K1 * depth * x2);
            int screenY = (int)(SCREEN_HEIGHT / 2 - K1 * depth * y2);

            int bufferIndex = screenY * SCREEN_WIDTH + screenX;

            if (screenX >= 0 && screenX < SCREEN_WIDTH && screenY >= 0 && screenY < SCREEN_HEIGHT) {
                if (depth > z_buffer[bufferIndex]) {
                    z_buffer[bufferIndex] = depth;
                    buffer[bufferIndex] = ".,-~:;=!*#$@"[(int)(depth * 10)]; // ASCII shading
                }
            }
        }
    }

    printf("\x1b[H"); // Move cursor to top-left
    for (int i = 0; i < SCREEN_WIDTH * SCREEN_HEIGHT; i++) {
        putchar(i % SCREEN_WIDTH ? buffer[i] : '\n');
    }
}

int main() {
    double A = 0, B = 0;  // Rotation angles

    while (1) {
        render_frame(A, B);
        A += 0.04; // Rotate over time
        B += 0.02;
        usleep(30000); // Slow down animation
    }

    return 0;
}
