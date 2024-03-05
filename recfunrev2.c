#include<stdio.h>
void fun(int n){
    if (n==0){
        printf("%d\n",n);
    return ;
    }
    fun(n-1);

    
}
void main(){
    fun(10);
}