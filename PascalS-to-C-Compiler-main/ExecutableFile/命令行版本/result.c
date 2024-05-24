#include<stdio.h>
typedef enum {False, True} boolean;
int x, y;
int gcd(int a, int b){
    int result;
    if(b == 0){
        result = a;
    }
    else{
        result = gcd(b, a % b);
    }
    return result;
    return result;
}
int main(int argc, char* argv[]){
    scanf("%d%d", &x, &y);
    printf("%d", gcd(x, y));
    return 0;
}
