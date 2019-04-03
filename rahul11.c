#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	float x=0,y=0;
	int i,n,count;
	int a[1000],b[1000],prio[1000],;
	char yes;
	printf("**********************************WELCOME TO PREEMTIVE PRIORITY SCHEDULING ALGORITHM***********************************\n\n\n");
	printf("Enter the number of processes you want : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
	printf("Enter the Burst Time for process %d : ",i);
	scanf("%d",&b[i]);
	}
	
	for(i=1;i<=n;i++){
	printf("Enter the Arrival Time for process %d : ",i);
	scanf("%d",&a[i]);
	}
	
	for(i=1;i<=n;i++){
	printf("Enter the Priority for process %d : ",i);
	scanf("%d",&prio[i]);
	}
}
