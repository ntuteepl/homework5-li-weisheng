#include <stdio.h>
#include <math.h>

int main() {
    int hour, minute;
    double angle;
    scanf("%d", &hour);
    scanf("%d", &minute);
    double hourAngle = (hour % 12) * 30 + minute * 0.5;
    double minuteAngle = minute * 6;
    angle = fabs(hourAngle - minuteAngle);
    if (angle > 180) {
        angle = 360 - angle;
    }
    printf("%.3f \n", angle);

    return 0;
}

