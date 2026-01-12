#include <graphics.h>
#include <math.h>
#include <conio.h>

int main()
{
    int gd = DETECT, gm;
    float u = 20;
    float theta = 45;
    float g = 9.8;
    float t, x, y;

    initgraph(&gd, &gm, "");

    theta = theta * (3.1416 / 180);

    line(0, 400, 640, 400);

    for(t = 0; t <= 3; t += 0.05)
    {
        x = u * cos(theta) * t;
        y = u * sin(theta) * t - 0.5 * g * t * t;

        cleardevice();
        line(0, 400, 640, 400);

        circle(50 + x * 10, 400 - y * 10, 5);
        delay(40);
    }

    getch();
    closegraph();
    return 0;
}
