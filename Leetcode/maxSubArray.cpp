//
// Created by Deserve on 2020/2/14.
//
#include <stdio.h>
#include<malloc.h>


int maxSubArray(int *nums,int numSize){
   int max=nums[0],temp=0;
   for (int i = 0; i < numSize; ++i) {
       if(temp<0) temp=nums[i];
       else temp+=nums[i];
       if(temp>max) max=temp;
   }
   return max;
}

int main(){
   int nums[]={-212121312},re=-1;
   re=maxSubArray(nums,1);
   printf("%d",re);
   return 0;


}

