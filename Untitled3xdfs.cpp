#include<stdio.h>

int main()

{

int leapdays,firstday,yr;

long int normaldays,totaldays;

printf("enter the year\n");

scanf("%d",&yr);

normaldays= (yr-1)*365L;

leapdays=(yr-1)/4- (yr-1)/100+(yr-1)/400;

totaldays=normaldays+leapdays;

firstday=totaldays%7;

if(firstday==0)

printf("monday");

if(firstday==1)

printf("tuesday");

if(firstday==2)

printf("wednesday");

if(firstday==3)

printf("thursday");

if(firstday==4)

printf("friday");

if(firstday==5)

printf("saturday");

if(firstday==6)

printf("sunday");

return 0;

}
