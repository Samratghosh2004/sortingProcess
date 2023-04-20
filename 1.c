#include<stdio.h>
int fact(int n) {
    int function = 1 ;
    for(int  i =1; i<=n;i++) {
        function *= i;
    }
    return function;
}
int main() {
    int n ,r;
    scanf("%d %d",&n,&r) ;
    int factorial = fact(n);
    printf("%d",factorial);
    int ncr;
    ncr = fact(n)/(fact(r)*fact(n-r));
    printf("%d",ncr);
    return 0;
}