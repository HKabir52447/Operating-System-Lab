// First Come First Serve

#include<stdio.h>
#include<stdlib.h>
int main(){
int RQ[100],i,n, TotalHeadMov = 0, headPos;
printf("\n\n========== First Come First Serve ==========\n\n");
printf("\nEnter the number of requests: ");
scanf("%d",&n);
printf("\nEnter the request sequence: ");
for(i = 0; i < n; i++){
    scanf("%d",&RQ[i]);
}
printf("\nEnter the initial head position: ");
scanf("%d",&headPos);

// logic for FCFS
for(i = 0; i < n; i++){
    TotalHeadMov += abs(headPos - RQ[i]);
    headPos = RQ[i];
}
printf("\nTotal head movement is = %d",TotalHeadMov);
return 0;
}
