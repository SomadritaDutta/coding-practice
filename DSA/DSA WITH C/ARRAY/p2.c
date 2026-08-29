// USING TWO POINTER TECHNIQUE
// Two sum problem
#include<stdio.h>
int main(){
    int size = 8;
    int left, right;
    int a[8] = {1,2,3,5,7,10,11,15};
    left = 0;
    right = size - 1;
    int target = 15;
    while(left<right){
        int current_sum = a[left] + a[right];
       if( current_sum == target){
        printf("Indexes are %d and %d\n", left, right);
        printf("Values are %d and %d\n", a[left], a[right]);
        return 0;
       }
       else{
            if(current_sum < target){
                left++;
            }
            else{
                right--;
            }
       }

    }
    return 0;
}