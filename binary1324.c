#include<stdio.h>
int main()
{
int n,flag,temp=0,arr[5];
for(int i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
for(int i=0;i<5;i++)
{
for(int j=i+1;j<5;j++)
{
if(arr[i]>arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
for(int i=0;i<5;i++)
{
printf("%d",arr[i]);
}
printf("Enter the no.");
scanf("%d",&n);
for(int i=0;i<5;i++)
{
	if(arr[i]==n)
	{
	flag=1;
		
	}else
 	{
	flag=0;	
	}

if(flag==1)
{ 
	printf("%d is at location %d",arr[i],i+1);

}else if(flag==0)
{ printf("number is not present in Array");
}}
return 0;
}
