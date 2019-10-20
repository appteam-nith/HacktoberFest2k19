#include<stdio.h>
int main()
{
	float entry(); float ent(); float ptr(float); float cg();
	float ma,ph,ec,ce,cs,me,cl,pl,el,sgpi,cgpi;
	int n;
	printf("This code for Sem 1 only...\n");
	printf("MA101: ");
	ma=entry();
	ma=ptr(ma);
	printf("PH101: ");
	ph=entry();
	ph=ptr(ph);
	printf("CE101: ");
	ce=entry();
	ce=ptr(ce);
	printf("CS101: ");
	cs=entry();
	cs=ptr(cs);
	printf("EC101: ");
	ec=entry();
	ec=ptr(ec);
	printf("ME101: ");
	me=ent();
	me=ptr(me);
	printf("CS102: ");
	cl=ent();
	cl=ptr(cl);
	printf("EC102: ");
	el=ent();
	el=ptr(el);
	printf("PH102: ");
	pl=ent();
	pl=ptr(pl);
	sgpi=(4*(ma+ph+ce)+3*(cs+me+ec)+cl+el+pl)/24;
	printf("Ae Yo!\nYour SGPI is %f",sgpi);	printf("\nDo you also wanna see your CGPI? 1 or 0\n ");
	scanf("%d",&n);
	if(n==0)
		printf("OK.");
	else if(n==1)
	{
		cgpi=cg();
		printf("Ae Yo!\nYour CGPI is %f",cgpi);
	}
	else
		printf("Invalid Input.");
	printf("\nEnter any key to exit.");
	getch();
}

float cg()
{
	int n,i;
	printf("Enter No. of Semesters over : ");
	scanf("%d",&n);
	float sg[n]; int cr[n];
	printf("Enter your SGPI's semester wise\n");
	for(i=0;i<n;i++)
	{
		printf("%d. ",i+1);
		scanf("%f",&sg[i]);
	}
	printf("Now enter the credits in the same order\n");
	for(i=0;i<n;i++)
	{
		printf("%d. ",i+1);
		scanf("%d",&cr[i]);
	}
	float num=0.0; int den=0;
	for(i=0;i<n;i++)
	{
		num+=sg[i]*cr[i];
		den+=cr[i];
	}
	float cgpi=num/den;
	return cgpi;
}

float entry()
{
	float a,b,c;
	printf("Enter marks /20 /30 /50\n");
	scanf("%f %f %f",&a,&b,&c);
	a=a+b+c;
	return a;
}

float ent()
{
	float a,b;
	printf("Enter marks /60 /40\n");
	scanf("%f %f",&a,&b);
	a+=b;
	return a;
}
float ptr(float x)
{
	float y;
	if(x>=80)
		y=10.0;
	else if(x>=70)
		y=9.0;
	else if(x>=60)
		y=8.0;
	else if(x>=50)
		y=7.0;
	else if(x>=45)
		y=6.0;
	else if(x>=40)
		y=5.0;
	else if(x>=30)
		y=4.0;
	else
		y=0.0;
	return y;
}
