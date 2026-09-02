// Maximum sum subrarry problem
// Brute Force method
#include<stdio.h>
#include<math.h>
int main(){
    int i, j;
    int size = 7; int w = 4; // w is the size of subarray
    int arr[7] ={3,8,2,5,7,6,12};
   float maxx = -INFINITY;
   int current;

    for(i = 0; i<=(size-w); i++){

        current = 0;

        for ( j = i; j<=(i+w-1); j++)
        {
            current = current + arr[j];

            if(current >= maxx){
                maxx = current;
                printf("Maxx = %f\n", maxx);
            }
            else{
                maxx = maxx;
                printf("Maxx = %f\n", maxx);
            }
            
        }
      
    }
    printf("So the max value of sum of subarray is :%f",maxx); 
}