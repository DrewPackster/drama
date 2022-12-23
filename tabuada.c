#include<stdio.h>
int main()
{
    int X;
    scanf("%d", &X);

    for(int i = 1; i<=10; ++i){
        if(X<0 || X>1000){
            break;
        }
        //1 x 5 = 5
        printf("%d*%d = %d\n", X, i, X * i);
    }
}