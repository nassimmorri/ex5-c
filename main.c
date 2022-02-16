#include <stdio.h>
#include <stdlib.h>

int saisi(){
int n ;
do{
    printf("donne un entier");
    scanf("%d",&n);
}while(n<=0||n>9);
return n;
}
int factorielle(int n ){


 if(n==0)
    return 1;
 else
    return  n*factorielle(n-1);


 }
int main()
{int x;
 x=saisi();
printf(" la factorielle de %d est %d ",x,factorielle(x));
}
