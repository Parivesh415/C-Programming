#include<stdio.h>
int fun(int n){
    if (n==0){
        return 1 ;
    }
    long int num=n*fun(n-1);
    return num;
    printf("%d",num);
    
}
int main(){
    fun(4);
}