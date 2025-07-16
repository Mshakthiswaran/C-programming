#include<stdio.h>
#include<stdbool.h>
int main(){
    float price =10.0;
    bool isstudent = 0;
    bool issenior = 1;

    if(isstudent){
        if(issenior){
            printf("You get a student and senior discound of 30% \n");
            price *=0.7;
        }
        else{
            printf("You get a student discound of 10% \n");
            price *=0.9;
        }
    }else{
        if(issenior){
        printf("you get a senior discound of 20%\n");
        price *=0.8;
        }
    }
    printf("the price of a ticket is :$%.2f\n",price);
}