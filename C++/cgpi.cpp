#include<stdio.h>
int main()
{
	float a1,b1,c;
	
	float a[9];
	int i;
	printf("Enter your marks in CE101: /20  /40  /60\n");
	scanf("%f%f%f",&a1,&b1,&c);
	a[0]=a1+b1+c;
	printf("Enter your marks in MA101: /20  /40  /60\n");
	scanf("%f%f%f",&a1,&b1,&c);
	a[1]=a1+b1+c;
	printf("Enter your marks in PH101: /20  /40  /60\n");
	scanf("%f%f%f",&a1,&b1,&c);
	a[2]=a1+b1+c;
	printf("Enter your marks in ECE101: /20  /40  /60\n");
	scanf("%f%f%f",&a1,&b1,&c);
	a[3]=a1+b1+c;
	printf("Enter your marks in CS101: /20  /40  /60\n");
	scanf("%f%f%f",&a1,&b1,&c);
	a[4]=a1+b1+c;
	printf("Enter your marks in CS102: /40 /60\n");
	scanf("%f%f",&a1,&b1);
	a[5]=a1+b1;
	printf("Enter your marks in PH101: /40 /60\n");
	scanf("%f%f",&a1,&b1);
	a[6]=a1+b1;
	printf("Enter your marks in ECE102: /40 /60\n");
	scanf("%f%f",&a1,&b1);
	a[7]=a1+b1;
	printf("Enter your marks in ME101: /40 /60\n");
	scanf("%f%f",&a1,&b1);
	a[8]=a1+b1;
	float b[9];
	for(i=0;i<9;i++)
	{
		if(a[i]>=80&&a[i]<=100)
        {
            b[i]=10;
        }
        else if(a[i]>=70&&a[i]<80)
        {
            b[i]=9;
        }
        else if(a[i]>=60&&a[i]<70)
        {
            b[i]=8;
        }
        else if(a[i]>=50&&a[i]<60)
        {
            b[i]=7;
        }
        else if(a[i]>=45&&a[i]<50)
        {
            b[i]=6;
        }
        else if(a[i]>=40&&a[i]<45)
        {
            b[i]=5;
        }
        else if(a[i]>=30&&a[i]<40)
        {
            b[i]=4;
        }
        else
        {
            b[i]=0;
        }
    }
    
    float x;
    x=((b[0]*4+b[1]*4+b[2]*4+b[3]*3+b[4]*3+b[5]*1+b[6]*1+b[7]*1+b[8]*3)/24);
	printf("Your sgpi in first semester is %f",x);
	 int e;
	float y;
	y=0;
	x=0;
	printf("Hello guys calculate your cgpi upto the semesters you have attended");
		printf("\nEnter how many semesters are over ");
		scanf("%d",&e);
		float m[e],n[e];
		for(i=0;i<e;i++)
		{
		  printf("\nEnter your sgpi in sem %d : ",i+1);
		  scanf("%f",&m[i]);
		}
		for(i=0;i<e;i++)
		{
			printf("\nEnter your credits in sem %d : ",i+1);
		  scanf("%f",&n[i]);
		}
		for(i=0;i<e;i++)
		{
			 x+=m[i]*n[i];
		  y+=n[i];	
		}
		printf("Your cgpi till now is %f",(x/y));	
} 
