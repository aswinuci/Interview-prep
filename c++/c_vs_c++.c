#include<stdio.h>

int func(int a,int b){
    return a+b;
}

int func(int a,int b , int c){
    return a+b+c;
}



int main(){
    printf("%d\n",func(2,3));
    printf("%d\n",func(2,3));
    return 0;
}
