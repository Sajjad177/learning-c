//Problem-1: Write a program to calculate area of a square.(side is given)

// #include<stdio.h>

// int main(){
//     int side;
//     printf("enter side");
//     scanf("%d", &side);

//     printf("area is : %d", side * side);
//     return 0;
// }


//Problem -2: Write a program to calculate area of a circle.(radius is given)

#include <stdio.h>

int main() {
    float length, width;

    scanf("%f", &length);
    scanf("%f", &width);

    float perimeter = 2 * (length + width);
    printf("Perimeter of rectangle: %f\n", perimeter);

    return 0;
}