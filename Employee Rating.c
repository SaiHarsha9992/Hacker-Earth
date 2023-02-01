#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (int N, int* workload) {
    // Write your code here
   int result = 0;
        int temp = 0;
 
        for(int i = 0; i < N; i++){
            if(workload[i] > 6){
                temp++;
            }else{
                if(temp > result){
                    result = temp;
                }
                temp = 0;
            }
        }
        return result;
}

int main() {
    int N;
    scanf("%d", &N);
    int i_workload;
    int *workload = (int *)malloc(sizeof(int)*(N));
    for(i_workload = 0; i_workload < N; i_workload++)
    	scanf("%d", &workload[i_workload]);

    int out_ = solve(N, workload);
    printf("%d", out_);
}