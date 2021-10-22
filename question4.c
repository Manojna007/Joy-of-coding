// pair sum in array

#include<stdio.h>
int main (){
    
    int arr[100], n, j, sum, i;
    printf ("enter value of n\n");
    scanf ("%d", &n);
    printf ("enter the array elements\n");
    for (i = 0; i < n; i++){
        scanf ("%d", &arr[i]);
    }
    printf ("enter the target sum\n");
    scanf ("%d", &sum);
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
    	    if ((arr[i] + arr[j]) == sum){
    	        printf ("target sum found at index %d %d", i, j);
    	    }
    	}
    }
      
    return 0;

}
