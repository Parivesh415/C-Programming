#include<stdio.h>
void fun(int n){
    if (n==10){
        return ;
    }
    fun(n+1);
    printf("%d\n",n);

    
}
void main(){
    fun(1);
}