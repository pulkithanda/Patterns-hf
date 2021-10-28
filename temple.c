#include<stdio.h>

int main()
{
	int i,j,k;


	/* flage construction */
	for(i=1;i<=5;i++)
	{
		for(k=0;k<=30;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
			printf("\n");
	}
	for(i=1;i<4;i++)
	{
		for(k=0;k<=30;k++)
		{
			printf(" ");
		}
		for(j=i;j<=i;j++)
		{
			printf("*");
		}
			printf("\n");
	}
		// temple //

	for(i=1;i<=7;i++)
	{
		for(k=0;k<=31-i;k++)
		{
		   printf(" ");
		}
		for(k=0;k<2*i-1;k++)
		{
		printf("*");
		}
		printf("\n");
	}

	for(i=0;i<=5;i++)
	{       printf("\n");

		for(k=0;k<=23;k++)
		{
		printf(" ");
		}
		printf("*");
		if(i==0||i==1)
		{
			for(k=0;k<=12;k++)
			{
				printf(" ");
			}
			printf("*");

		}

		if(i==2)
		{

			for(k=0;k<=2;k++)
			{
				printf(" ");
			}
			printf("******");
			for(k=0;k<=3;k++)
			{
				printf(" ");
			}
			printf("*");
		}


		if(i==3||i==4||i==5)
		{
			for(k=0;k<=2;k++)
			{
				printf(" ");
			}
			printf("*    *");
			for(k=0;k<=3;k++)
			{
				printf(" ");
			}
			printf("*");
		}


	}
	 printf("\n");
		for(k=0;k<=23;k++)
		{
		printf(" ");
		}
		printf("***************");
	return 0;
}
