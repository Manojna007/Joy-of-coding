
// c program to eliminate duplicate elemennts

#include<stdio.h>

int
main ()
{

  int arr[100], n, i, j, k;

  printf ("enter the value for n\n");

  scanf ("%d", &n);
  printf ("enter, array elements\n");

  for (i = 0; i < n; i++)
    {

      scanf ("%d", &arr[i]);
    }

  for (i = 0; i < n; i++)
    {

      for (j = i + 1; j < n; j++)
	{

	  if ((arr[i] == arr[j]) && (i != j))
	    {

	      for (k  =j; k < n - 1; k++)
		{

		  arr[k] = arr[k + 1];
		}
	      n--;
	      j--;
	    }
	}
    }


  printf ("array after deleting duplicate elements\n");

  for (i = 0; i < n; i++)
    {

      printf ("%d\n", arr[i]);

    }

  return 0;
}
