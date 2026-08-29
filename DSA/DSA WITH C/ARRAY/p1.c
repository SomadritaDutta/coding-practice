// Finding the 2nd largest value
#include<stdio.h>
int main(){
int size = 8;
int arr[8] = {25,18,38,10,35,48,20,50};
int max1, max2, i;
printf("The Array: ");
for ( i = 0; i < size; i++)
{
    printf("%d ", arr[i]);
}
printf("\n");
if(arr[0]>arr[1]){
    max1 = arr[0];
    max2 = arr[1];
    printf("Max1 is %d\n",max1," and Max2 is %d\n",max2);}
else{
    max2 = arr[0];
    max1 = arr[1];
    printf("Max1 is %d\n",max1, "and Max2 is %d\n ",max2);}

//  Now start the loop to find the largest and 2nd largest
for(i = 2; i<= size; i++){
    if(arr[i]>max1){
        max2 = max1;
        max1 = arr[i];
        printf("largest %d\n",max1);
        printf("2nd large %d\n", max2);
    }

    else if(arr[i]>max2){
        max2 = arr[i];
        printf("largest %d\n",max1);
        printf("2nd large %d\n", max2);
    }
}

printf("SO THE RESULT IS:\n");
printf("The largest number is %d\n", max1);
printf("The 2nd largest number is %d\n", max2);
return 0;
}
