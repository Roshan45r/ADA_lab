#include<stdio.h>
#include<conio.h>

int gcd(int m,int n)
{
    if(n==o)
        return m;
    else if(m<n)
        return gcd(n,m);
    else
        return gcd(n,m%n);
}

int main(){
    time_t start,end;
    start = time(NULL);
    int v;
    v = gcd(3,6);
    printf("the GCD of the given number is %d",v);
    end = time(NULL);
    printf("%f",difftime(end,start));
    return 0;
}
