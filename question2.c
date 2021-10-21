// C program to count frequency of each element of array

#include<stdio.h>
int main()
{
    int p[100],q[100],i,j,n,c=0 ;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&p[i]);
    }
    
  for(i=0; i<n; i++)
    {
        c=1;
        if(p[i]!=-1)
		{
		    for(j=i+1; j<n; j++)
     
            {
        	   if(p[i]==p[j])
        	    {
			       c++;
			       p[j]=-1;
		       }
	       }
	       q[i]=c;
		}
         
   
          
    }
     
        
         
 for(i=0; i<n; i++)
    {
         if(p[i]!=-1)
        {
        	printf("no of %d is %d \n",p[i],q[i]);
 
		} 
         
    }    
    return 0;
} 