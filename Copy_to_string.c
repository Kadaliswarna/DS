#include<stdio.h>
struct point{
    int x;
    int y;
};
int main()
{
    struct point p1 = {10,20};
    struct point p2 = p1;
    printf("X-value:%d\n",p2.x);
    printf("Y-value:%d\n",p2.y);

}
