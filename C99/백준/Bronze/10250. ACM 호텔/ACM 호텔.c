#include <stdio.h>
#include <string.h>
#include <math.h>

#pragma warning(disable:4996)  

int main()
{
    int t, h, w, n;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &h, &w, &n);
        int floor, room;
        if (n % h == 0)
        {
            floor = h;
            room = n / h;
        }
        else
        {
            floor = n % h;
            room = n / h + 1;
        }
        
        printf("%d%02d\n", floor, room);
    }

    return 0;
}
