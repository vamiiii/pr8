#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

int main() {
    FILE* file;
    errno_t err;

    err = fopen_s(&file, "cones.txt", "r");
    if (err != 0) {
        printf("Невозможно открыть файл.\n");
        return 1;
    }

    int r, h;
    double v;

    while (fscanf_s(file, "%d %d", &r, &h) == 2) {
        v = (1.0 / 3.0) * PI * pow(r, 2) * h;

        printf("r = %d, h = %d\n", r, h);
        printf("V = %.2f\n", v);
    }

    fclose(file);
    return 0;
}
