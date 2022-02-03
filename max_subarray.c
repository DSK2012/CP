/*initialize the array manually and run the program*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// O(n^2) Solution
/*
int main(){
    int arr[] = {5,4,-1,7,8};
    int curSum,max,len;
    len = sizeof(arr)/sizeof(int);
    max = arr[0];
    for(int i = 0; i < len; i++){
        curSum = 0;
        for (int j = i; j < len; j++){
            curSum += arr[j];
            if ( curSum > max)
                max = curSum;
        }
    }
    printf("\n------%d-----\n",max);
}
*/




// O(n) solution

int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int curSum,max,len;
    len = sizeof(arr)/sizeof(int);
    max = arr[0];
    
    curSum = 0;
    for( int j = 0;j < len; j++){
        if(curSum < 0){
            curSum = arr[j];
            continue;}
        curSum += arr[j];
        if(max < curSum)
            max = curSum;
        
    }
    printf("\n------%d-----\n",max);
}