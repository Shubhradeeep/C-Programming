#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[100];
	int i,size,sm;
	printf("OPERATIONS:\n");
	printf("1. Insert a new element at any position.\n2. Delete any element from the array.\n3. Search an element in the array.\n4. Sort the elements of the array.\n5. Delete duplicate elements from the array.\n6. Count the elements present in the array.\n7. Count the occurrence of a given number in the array.\n8. Display the array.\n9. EXIT.");
	printf("\n------\n");
	printf("Enter the size of array: ");
	scanf("%d",&size);
	printf("Enter the elements of array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter the operation you want to perform: ");
	scanf("%d",&sm);
	if(sm>0 && sm<=9)
	{
		if(sm==1)
		{
			int x,p;
			printf("\nEnter element to be inserted: ");
			scanf("%d",&x);
			printf("Enter postion at which element is to be inserted: ");
			scanf("%d",&p);
			if(p>size+1 || p<=0)
    		{
        		printf("Invalid position!");
    		}
   			 else
   	 		{
        		for(i=size; i>=p; i--)
        		{
            		arr[i] = arr[i-1];
        		}
       			arr[p-1] = x;
        		size++; 
            	printf("Array elements after insertion : ");
        		for(i=0; i<size; i++)
       			{
            		printf("%d\t", arr[i]);
        		}
    		}		
		}
		
		else if(sm==2)
		{
			int p;
			printf("Enter the position of the element you want to delete: ");
			scanf("%d",&p);
			if (p >= size+1)
      			printf("Deletion not possible.\n");
   			else
   			{
      			for (i = p-1; i < size-1; i++)
         			arr[i] = arr[i+1];
					printf("Resultant array:\n");

      			for (i = 0; i < size-1; i++)
         			printf("%d\t", arr[i]);
   			}
		}
		
		else if(sm==3)
		{
			int srch,found;
			printf("Enter an element to search: ");
			scanf("%d",&srch);
			found=0;
			for(i=0; i<size; i++)
			{
        		if(arr[i] == srch)
        		{
        			printf("\n%d is found at position %d",srch,i+1);
            		found++;
        		}
    		}
    		if(found < 1)
    		{
        		printf("\n%d is not found in the array",srch);
 			}	
		}
		
		else if(sm==4)
		{
			int temp,j;
			for (i=0; i<size; i++) 
        	{
            	for (j=i+1; j<size; j++)
            	{
                	if (arr[i] > arr[j]) 
                	{
                    	temp = arr[i];
                    	arr[i] = arr[j];
                    	arr[j] = temp;
                	}
            	}
        	}
        	printf("The numbers arranged in ascending order:\n");
        	for (i=0; i<size; i++)
            	printf("%d\t", arr[i]);	
		}
		
		else if(sm==5)
		{
			int j,k;
			for (i=0; i<size; i++) 
			{
      			for (j=i+1; j<size;)
				{
         			if (arr[j] == arr[i])
					{
            			for (k=j; k<size; k++)
						{
               				arr[k] = arr[k + 1];
            			}
            			size--;
         			}
					else
            			j++;
      			}
   			}
   			printf("Array after deleting the duplicate element:\n");
   			for (i=0; i<size; i++) 
			{
      			printf("%d\t", arr[i]);
   			}
		}
		
		else if(sm==6)
		{
			printf("The number of elements present in array is: %d",size);
		}
		
		else if(sm==7)
		{
			int count,srch;
			printf("Enter the element to search:");
			scanf("%d",&srch);
			count=0;
			for(i=0; i<size; i++)
			{
				if(arr[i]==srch)
					count++;
			}
			printf("Element %d occurs %d times in the array",srch,count);
		}
		
		else if(sm==8)
		{
			printf("Array: \n");
			for(i=0;i<size;i++)
				printf("%d\t",arr[i]);
		}
		
		else if(sm==9)
		{
			printf("Exiting the program......");
			exit(0);
		}	
	}
	else
		printf("INVALID!");	
}
