
#include<stdio.h>

struct process
{
      char process_name;
      int arrival_time, burst_time, ct, waiting_time, turnaround_time, priority;
      int status;
}process_queue[10];


int main()
{
      int i, time = 0, burst_time = 0, largest;
      char c;
      float wait_time = 0, turnaround_time = 0, average_waiting_time, average_turnaround_time;
      printf("----------------------------------------------------WELCOME TO THE PRIORITY SHCEDULING----------------------------------------------------------------------------");
      printf("\nEnter Total Number of Processes:\t");
      scanf("%d", &limit);
      for(i = 0, c = 'A'; i < limit; i++, c++)
      {
            process_queue[i].process_name = c;
            printf("\nEnter Details For Process[%C]:\n", process_queue[i].process_name);
            printf("Enter Arrival Time:\t");
            scanf("%d", &process_queue[i].arrival_time );
            printf("Enter Burst Time:\t");
            scanf("%d", &process_queue[i].burst_time);
            printf("Enter Priority:\t");
            scanf("%d", &process_queue[i].priority);
            process_queue[i].status = 0;
            burst_time = burst_time + process_queue[i].burst_time;
      }
      
            printf("\n%c\t\t%d\t\t%d\t\t%d\t\t%d", process_queue[largest].process_name, process_queue[largest].arrival_time, process_queue[largest].burst_time, process_queue[largest].priority, process_queue[largest].waiting_time);
      }
  }


