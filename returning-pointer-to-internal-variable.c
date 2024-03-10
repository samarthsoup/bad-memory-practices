#include<stdio.h>

int* function2() {
    int array[10] = {0}; // local array

    return array; // returning pointer to a local array
}

void function1() {
    int* array = function2();
    printf("%d", array[0]);
}

int main() {
    function1();
    return 0;
}

/* 
C will use the stack and push function1 on it first then function2
function 2 will create the array and return a pointer to its location 
it will then be popped off the stack, along with freeing of the memory of all the variables defined in that function
so function1 now has a pointer that points to deleted memory
*/