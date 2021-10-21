// C program to find an has duplicate elements or not (distinct or not)

#include<stdio.h>
int main(){
    int i,j,n;
    int arr[100];
    printf("ENTERVALUE FOR N\n");
    scanf("%d",&n);	
    printf("ENTER ARRAY ELEMENTS\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if((arr[i]==arr[j])&&(i!=j)){
                printf("ARRAY NOT DISTINCT\n");
                return 0;
            }
        }
    }
    printf("ARRAY IS DISTINCT\n");
    return 0;
}