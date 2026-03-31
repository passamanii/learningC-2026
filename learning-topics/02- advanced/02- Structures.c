#include <stdio.h>


int main() {

    typedef struct {
        int age;
        char *name;
    } person;

    person john;
    john.age = 27;
    john.name = "John";
    
    printf("%s is %d years old.", john.name, john.age);

    return 0;
}