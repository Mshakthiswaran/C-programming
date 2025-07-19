#include<stdio.h>
int Add(int x,int y){
    int result = x+y;
    return result ;
}
int main(){
    // variable scope = refers to where a variable is recognized and accessible.
    //   variable can share the same name if they.re in different scope{}

    int x =4;
    int y =5;
    int result = Add(x,y);
   printf( "%d ",result);
    return 0;

}