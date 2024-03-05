#include<stdio.h>
void fun(int n){
    if (n==0){
        return ;
    }
    fun(n-1);
    printf("%d \n",n);

    
}
void main(){
    fun(10);
}