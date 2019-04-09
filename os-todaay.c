
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct process
{
	int j,n,count,i;
	int a[1000],b[1000],pr[1000];
}p;
void getdata()
{
	int i;
	printf("**********************************WELCOME TO PREEMTIVE PRIORITY SCHEDULING ALGORITHM***********************************\n\n\n");
	printf("Enter the number of processes you want : ");
	scanf("%d",&p.n);
	
	for(i=1;i<=p.n;i++){
	printf("Enter the Burst Time for process %d : ",i);
	scanf("%d",&p.b[i]);
	}
	
	for(i=1;i<=p.n;i++){
	printf("Enter the Arrival Time for process %d : ",i);
	scanf("%d",&p.a[i]);
	}
	
	for(i=1;i<=p.n;i++){
	printf("Enter the Priority for process %d : ",i);
	scanf("%d",&p.pr[i]);
	}
}
void display()
	{
	printf("Process Number\t\t\tBurst Time\t\t\tArrival Time\t\t\tPriority\n");
	for(p.i=1;p.i<=p.n;p.i++){
	printf("    %d\t\t\t\t    %d\t\t\t\t     %d\t\t\t\t    %d\n",p.i,p.b[p.i],p.a[p.i],p.pr[p.i]);
	}
}
void priority(){
	p.count=0;
	p.pr[p.i]==0;
	if(p.pr[p.i]==0){
	p.pr[p.i]=1;
	printf("%d is executing \n",p.i);
	printf("\nProcess Number\t\t\tBurst Time\t\t\tArrival Time\t\t\tPriority\n");
	printf("    %d\t\t\t\t    %d\t\t\t\t     %d\t\t\t\t    %d\n",p.i,p.b[p.i],p.a[p.i],p.pr[p.i]);
	p.count++;
	}
	printf("\n\n\nProcesses in the READY queue are \n\n");
	for(p.i=1;p.i<=p.n;p.i++){
	if(p.pr[p.i]!=p.count){
	p.pr[p.i]=2;
	printf("\nProcess Number\t\t\tBurst Time\t\t\tArrival Time\t\t\tPriority\n");
	printf("    %d\t\t\t\t    %d\t\t\t\t     %d\t\t\t\t    %d\n",p.i,p.b[p.i],p.a[p.i],p.pr[p.i]);	
		}
	}
}
void process1()
{
	int j,temp=0;
	int wt[p.n],tat[p.n];
	for(p.i=1;p.i<=p.n;p.i++)

{

for(j=p.i+1;j<=p.n;j++)

{

if(p.pr[p.i]<p.pr[j])

{

temp=p.pr[p.i];

p.pr[p.i]=p.pr[j];

p.pr[j]=temp;

temp=p.b[p.i];

p.b[p.i]=p.b[j];

p.b[j]=temp;
p.pr[p.i]=p.pr[p.i]+1;
}
}

wt[p.i]=0;

}

for(p.i=1;p.i<=p.n;p.i++)

{

for(j=1;j<=p.i;j++)

{

wt[p.i]=wt[p.i]+p.b[j];

}

tat[p.i]=wt[p.i]+p.b[p.i];

}

float avwt=0,avtat=0;

printf("Process\tP\tBT\tWT\tTAT\n");

for(p.i=1;p.i<=p.n;p.i++)

{

printf("\t%d\t%d\t%d\t%d\n",p.pr[p.i],p.b[p.i],wt[p.i],tat[p.i]);

avwt=avwt+wt[p.i];

avtat=avtat+tat[p.i];
}

avwt=avwt/p.n;

avtat=avtat/p.n;

printf("Average Waiting Time: %f\n",avwt);

printf("\nAverage Turnaround Time: %f",avtat);

}
	
int main()
{
	getdata();
	display();
    process1(); 
}

