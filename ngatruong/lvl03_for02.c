#include<stdio.h>

void main()

{

    int a,i;

    for(i=100;i<=999;i++)

        if(((i/100)*(i/100)*(i/100)+((i%100)/10)*((i%100)/10)*((i%100)/10)+((i%100)%10)*((i%100)%10)*((i%100)%10))==i)

        printf("%d\n",i);

}
