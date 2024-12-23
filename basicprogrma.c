#include<stdio.h>
#if 0
#include<stdio.h>
int main()
{
    int n1, n2;
    printf("enter the number\n");
    scanf("%d %d",&n1,&n2);
    printf("n1= %d,n2= %d", n1, n2);
    if(n1>n2)
    {
	printf("num1 is greater then %d\n",n1);
    }
    else
    {
	printf("num2 is greater then %d\n",n2);
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
    int n1, n2, n3;
    printf("enter the number\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    printf("n1= %d,n2= %d,n3= %d \n", n1, n2, n3);
    if(n1>n2 && n1>n3)
    {
	printf("num1 is greater then %d\n",n1);
    }
    else if(n2>n1 && n2>n3)
    {
	printf("num2 is greater then %d\n",n2);
    }
    else
    {
	printf("num3 is greater then %d\n",n3);
    }
    return 0;
}
#endif
#if 0
#include<stdio.h>
int main()
{
    unsigned int count1 = 10; // sing and unsing values
    signed int count2 = -1;
    if (count1 > count2)
    {
	printf("Yes\n");
    }
    else
    {
	printf("No\n");
    }
    return 0;
}
#endif
#if 0
#include <stdio.h>  //if condition
int main()
{
    int num = 4;
    if (num < 5)
    {
	printf("num < 5\n");
    }
    printf("num is %d\n", num);
    return 0;
}
#endif
#if 0
#include <stdio.h> // if esle condition
int main()
{
    int num = 10; // num is variable and int is modifier data types
    if (num < 5)
    {
	printf("num is smaller than 5\n");
    }
    else
    {
	printf("num is greater than 5\n");
    }
    return 0;
}
#endif
#if 0
#include <stdio.h>   // nested if condition
int main()
{
    int num = 10;
    if (num < 5)
    {
	printf("num is smaller than 5\n");
    }
    else if (num > 5)
    {
	printf("num is greater than 5\n");
    }
    else
    {
	printf("num is equal to 5\n");
    }
    return 0;
}
#endif
#if 0
int main()                 //switch case
{
    int option;
    printf("choose the options\n");
    scanf("%d",&option);
    switch(option)
    {
	case 10:
	    printf("you are entered 10\n");
	    //break;
	case 20:
	    printf("you are entered 20\n");
	    //  break;
	default:
	    printf("invalied\n");
	    `	 //   break;
    }
    return 0;
}
#endif
#if 0
int main()                 //switch case check in upper lower 
{
    //int  a; 
    char ch;
    printf("choose the options\n");
    scanf("%c",&ch);
    switch(ch)
    {
	case 'a' ... 'z':

	    printf("lower case\n");
	    break;
	case 'A' ... 'Z' :
	    printf("UPPER CASE\n");
	    break;
	case '0' ... '9':
	    printf("digit number\n");
	    break;
defaulf:
	    printf("NO MAICHING\n");
	    break;
    }
    return 0;
}
#endif 
#if 0
int main()
{
    int x=1;
    while (x<=10)
    {
	printf(" loop %d times \n",x);
	x++;
    }
    return 0;
}
#endif
#if 0 
int main()
{
    int iter;
    for (iter = 1; iter < 10; iter++)
    {
	printf("Looped %d times\n", iter);
    }
    return 0;
}
#endif
#if 0 
int main()                // fabonicc ass2
{
    int num,i=0,a=0,b=1,c;
    printf("enter the fibonacci number\n");
    scanf("%d",&num);

    while(i<=num)
      if(num>=0)
	printf("%d ",c);
	c=a+b;
	a=b;
        b=c;	
	i++;
      else
      printf("invalid\n");
    return 0;
}
#endif
#if 0
#include <stdio.h>
int main()
{
int iter;
for (iter = 1; iter <= 10; iter++)
{
if (iter == 7)
{
break;                    // if use break then loop will break only 7 times looping
}
printf("%d\n", iter);
}
return 0;
}

#endif
#if 0
#include<stdio.h>
int main()
{
int iter;
for (iter = 0; iter < 10; iter++)
{
if (iter == 5)
{
continue;
}
printf("%d\n", iter);
}
return 0;
}
#endif
#if 0 
#include <stdio.h>                   //assignment oprater
int main()
{
int num1 = 1, num2 = 1;
float num3 = 1.7, num4 = 1.5;
num1 += num2 += num3 += num4;
printf("num2 is %d\n", num2);
return 0;
}
#endif
#if 0
#include <stdio.h>
int main()                               //assignment value
{
float num1 = 1;
if (num1 = 1)
{
printf("Yes, it is equal!!\n");
}
else
{
printf("No, it is not equal\n");
}
return 0;
}
#endif
#if 0 
#include <stdio.h>
int main()                                           // leep year
{
    int year;
    printf("enter the leep year\n");
    scanf("%d",&year);
    if(year%400==0)
	printf("%d this is leep year\n",year);
    else if(year%100==0)
	printf("%d this is leep year\n",year);
    else if(year%4==0)
	printf("%d this is leep year\n",year);
    else	
    printf("%d this is not leep year\n",year);

return 0;
}
#endif
#if 0 
#include <stdio.h>
int main()
{
    char ch;
    printf("enter the alphabates number ");
    scanf("%c",&ch);
   if(ch == 'A' && ch <='Z')
       for (ch='A';ch<='Z';ch++)
	printf("%c " ,ch);
      else
       printf("only enter alphabates char\n");
	return 0;
}

#endif
#if 0 
#include <stdio.h>                                         // increment /decrement
int main()
{
	int num1 = 1, num2 = 1;


	printf("Result is %d\n", num1++ + ++num2);
	printf("num1 = %d, num2 = %d\n", num1, num2);

	return 0;
}
#endif
#if 0                                                    // data type sizeof
#include <stdio.h>
int main()
{
int num = 5;
printf("%ld:%ld:%ld\n", sizeof (int), sizeof num, sizeof 5);
return 0;
}
#endif
#if 0
int main()                    // prine number or not
{
    int n,i,n2=0;
    printf("enter the prime number..");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    n2++;
	}
	if(n2==2)
	{
	    printf("%d is prime number\n",n);
	}
	else
	{
	    printf("%d is not prime number\n",n);
          }
	return 0;
}
#endif
#if 0
int main()
{
    int td,y,m,d;
    {
    printf("enter the total days ");
    scanf("%d",&td);
      y=td/365;
      m=td%365/30;
      d=td%365%30;
printf("year=%d ,month=%d, day=%d,",y,m,d);
}
return 0;
}
#endif
#if 1
int main()
{
    int x=13;
    printf("%1d %1$c %1$#x %1$o ",x,x);

return 0;
}
#endif
