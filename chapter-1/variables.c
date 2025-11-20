
# include<stdio.h>

int main(){
    int number = 25;
    int age = 20;
    return 0;
}

/* Rules for Variables in C:
1. Variables are case-sensitive.
   Example: 'abc' and 'Abc' are different variables.
2. The first character must be an alphabet or an underscore '_'.
   Example: 'abc' and '_abc' are different variables.
3. No spaces or commas are allowed in variable names.
   Example: 'abc' and 'a bc' are invalid.
4. No special characters are allowed except the underscore '_'.
   Example: 'abc@' is invalid, but 'abc_def' is valid.
*/

// Rule-1
#include <stdio.h>

int main(){
    int a = 10;
    int A = 20;
    return 0;
}

// Rule-2
#include <stdio.h>

int main (){
    int abc = 10; 
    int _abc = 20;
    return 0;
}

//Rule -3
#include <stdio.h>

int main(){
    int abc = 10; //Valid
    // int a bc = 20; //Invalid
    return 0;
}

//Rule-4
#include <stdio.h>

int main(){
    int abc_def = 10; //Valid
    // int abc@ = 20; //Invalid
    int finalNum = 30;
    return 0;
}


//Variables Data Types----[those are main data types]
#include <stdio.h>
int main(){
    int number = 40;       //Integer
    char star = "*";       //Character
    float salary = 120.5;  //Float
    return 0;
}


#include<stdio.h>

int main(){
    int age = 20;
    float pi = 3.14;
    char star = '*';
    printf("age is %d \n",age);  
    printf("pi is %f \n",pi);
    printf("star is %c \n",star);
    return 0;
}

//? ->  \n use for new line

/* NOTE: 
%d for integer 
%f for float
%c for character 
*/


#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);  // add input function
    printf("Your age is %d",age);
    return 0;
}

//Example of sum ------
#include<stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    int sum = a + b;
    printf("The sum of %d and %d is %d \n", a, b, sum);
    return 0;
}

//! --------------------PROBLEMS-------------------------

//Problem -1: Write a program to calculate area of a circle.(radius is given)

#include<stdio.h>

int main(){
    float radius;
    printf("radius value");
    scanf("%f", &radius);

    printf("value is: %f \n", 3.14 * radius * radius );
    return 0;
}

//Problem -2: Write a program to calculate the perimeter of a rectangle. (length and width are given)
#include <stdio.h>

int main() {
    float length, width;

    scanf("%f", &length);
    scanf("%f", &width);

    float perimeter = 2 * (length + width);
    printf("Perimeter of rectangle: %f\n", perimeter);

    return 0;
}


// problem-3: Write a program to convert Celsius temperature to Fahrenheit. (Celsius is given)
// Formula: F = (C × 9/5) + 32

#include <stdio.h>

int main() {
    float celsius;
    scanf("%f", &celsius);

    float fahrenheit = (celsius * 9/5) + 32;
    printf("the result is: %f \n", fahrenheit);

    return 0;
}

// Problem-4: Write a program to find the square of a number. (number is given)

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("result is: %d \n", num * num);
    return 0;
}

// Problem-5:  Write a program to calculate simple interest. (principal, rate and time are given)