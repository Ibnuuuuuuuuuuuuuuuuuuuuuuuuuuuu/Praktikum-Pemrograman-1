#include <stdio.h>

int main() {
    double a, b, i, j, x, y;
    
    printf("Input: \n");
    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &i, &j, &x, &y);
    
    double hasil = (a - b) * (i / j) - (x + y);
    
    printf("Output: \n");
    printf("%.3lf\n", hasil);
    
    return 0;
}
