#include<stdio.h>
#include<string.h>
#include<math.h>
#include<limits.h>
int main(){
    float x;
    int y, z, c;

    scanf("%f %d %d %d", &x, &y, &z, &c);
    // printf("%f\n", x);
    // printf("%d\n", y);
    // printf("%d\n", z);

    int topVal = ceil(x);
    int lowVal = floor(x);
    int roundVal = round(x);
    double sqrVal = sqrt(y);
    int powVal = pow(y, z);
    int absVal = abs(c);

    printf("%d\n", topVal);
    printf("%d\n", lowVal);
    printf("%d\n", roundVal);
    printf("%lf\n", sqrVal);
    printf("%d\n", powVal);
    printf("%d\n", absVal);
    return 0;
}