
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