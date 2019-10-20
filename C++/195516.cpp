#include<stdio.h>
float pointer()
{   printf("\nEnter marks :  /20 /30 /50\n");
    float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float d=a+b+c;
	if(d>=80)
	 d=10;
	else if(d>=70)
	 d=9;
	else if(d>=60)
	 d=8;
	else if(d>=50)
	 d=7;
	else if(d>=45)
	 d=6;
	else if(d>=40)
	 d=5;
	else if(d>=30)
	 d=4;
	else
	 d=0;
	return d;	
}
float pointer1()
{   printf("\nEnter marks : /40 /60\n");
    float a,b;
	scanf("%f%f",&a,&b);
	float d=a+b;
	if(d>=80)
	 d=10;
	else if(d>=70)
	 d=9;
	else if(d>=60)
	 d=8;
	else if(d>=50)
	 d=7;
	else if(d>=45)
	 d=6;
	else if(d>=40)
	 d=5;
	else if(d>=30)
	 d=4;
	else
	 d=0;
	return d;
}
int main()
{   printf("\t\tCalculate your sgpi in first semester for NIT HAMIRPUR students ");
	float a[9];
	printf("\nMA101: ");
    a[0]=pointer();
	printf("PH101: ");
	a[1]=pointer();
	printf("CE101: ");
	a[2]=pointer();
	printf("CS101: ");
	a[3]=pointer();
	printf("EC101: ");
	a[4]=pointer();
	printf("ME101: ");
    a[5]=pointer1();
	printf("CS102: ");
	a[6]=pointer1();
	printf("EC102: ");
	a[7]=pointer1();
	printf("PH102: ");
	a[8]=pointer1();
	float x;
	x=((a[0]+a[1]+a[2])*4+(a[3]+a[4]+a[5])*3+(a[6]+a[7]+a[8])*1)/24;
	printf("Your pointer in first sem is %f",x);	
}
