// Shortest Seek Time First

#include<stdio.h>
#include<stdlib.h>
int main(){
int RQ[100],i,j,n, TotalHeadMov = 0, headPos;
printf("\n\n========== Shortest Seek Time First ==========\n\n");
printf("\nEnter the number of requests: ");
scanf("%d",&n);
printf("\nEnter the request sequence: ");
for(i = 0; i < n; i++){
    scanf("%d",&RQ[i]);
}
printf("\nEnter the initial head position: ");
scanf("%d",&headPos);

// logic for SSTF
for(i = 0; i < n; i++){
        int min = 1000, dif, index;
    for(j = 0; j < n; j++){
        dif = abs(headPos - RQ[j]);
        if(min > dif){
            min = dif;
            index = j;
        }
    }
    TotalHeadMov += min;
    headPos = RQ[index];
    RQ[index] = 1000;
}
printf("\nTotal head movement is = %d",TotalHeadMov);
return 0;
}

