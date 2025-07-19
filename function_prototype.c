#include<stdio.h>

void hello(char name[], int age);// function prototype
int main(){

    //function protype  = provide the compiler w/ information about a function 's:
    //                    name, return tyepe, and parameters before its actual definition.
    //                    Enables type checking and also functions to be used before
    //                    they're defined.
    //                    improves readability, organization, and helps prevent errors.

    hello("spongebob", 30);
    return 0;

}

void hello(char name[], int age){
    printf("Hello %s\n",name);
    printf("You are %d years old",age);
}
