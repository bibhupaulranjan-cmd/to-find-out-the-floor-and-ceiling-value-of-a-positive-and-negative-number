#include <stdio.h>
#include <math.h>

int main() {
    double num, fl, cl;

    
    printf("Enter a number (positive or negative): ");
    scanf("%lf", &num);

    
    fl = floor(num);
    cl = ceil(num);

    
    printf("Number entered: %.2lf\n", num);
    printf("Floor value   : %.2lf\n", fl);
    printf("Ceiling value : %.2lf\n", cl);

    return 0;
}

