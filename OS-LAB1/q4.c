#include<stdio.h>
int main(){
int arr[7] = {1,2,3,1,2,5,5};

int dup_count=0;
for(int i=0;i<7;i++){
    int count=0;
    for(int j=i+1;j<7;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
    if(count>0){
        dup_count++;
    }
}
printf("duplicate count is %d",dup_count);



return 0;
}
