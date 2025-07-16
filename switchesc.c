#include<stdio.h>
int main(){
    //switches = an alternative to using many if else statement 
    //  mare efficient  fixed integer values
    int day =0;
    printf("Enter the number(1-7) you want to know the day : ");
    scanf("%d",&day );

    switch(day){
        case 1:
        printf("Monday.");
        break;
     
        case 2:
        printf("Tuesday.");
        break;
        
        case 3:
        printf("Wednesday.");
        break;
        
        case 4:
        printf("Thursday.");
        break;
        
        case 5:
        printf("Friday.");
        break;
        
        case 6:
        printf("Saturday.");
        break;

        case 7:
        printf("Sunday.");
        break;
        
        default:
        printf("INVALID NUMBER! Please enter the valid number.");
        
    }
}