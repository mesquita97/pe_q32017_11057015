#include <stdio.h>
#include <math.h>

int fatorial(int x){
    int f = 1;
    
    while(x>1)
    {
     f *= x; 
     x--;
    }
    
    return f;
}

int binomial(int n,int k)
{
    int b = fatorial(n);
    b /= (fatorial(k)*fatorial(n-k));
    return b;
}

int main(){
    int n,k;
    scanf("%d\n""%d", &n, &k);
    printf("%d",binomial(n,k));
    
}