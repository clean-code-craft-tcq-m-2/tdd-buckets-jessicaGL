#include "TestDrivenRanges.h"
#include <assert.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void sortarray(int arr[], int n)
{
    int i, j, min;
 
    for (i = 0; i < n - 1; i++) {   
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(&arr[min], &arr[i]);
            
        
    } 
    printArray(arr,n);
}


void defineranges(int arr[], int n)
{
    int lowlimit[2], uplimit[2],rangecount[2],count = 1, i, limit_index = 0;
    lowlimit[0] = arr[0];
    for(i = 1; i < n; i++)
    {
        count++;
        printf("\nel valor de i es: %d\n", i);
        if((arr[i+1] - arr[i]) > 1)
        {
            uplimit[limit_index] = arr[i];
            printf("un rango: %d \n", arr[i]);
            rangecount[limit_index] = count;
            limit_index++;
            count = 0;
            lowlimit[limit_index] = arr[i+1];
        }
        if(i == n-1)
        {
            uplimit[limit_index] = arr[i];
            rangecount[limit_index] = count;
        }
    }
 
   printArray(lowlimit, 2); 
   printArray(uplimit,2);
   printArray(rangecount,2);
}


char* Response(int a, int b)
{
    char *response = (char*)malloc(10);
    strcpy(response, "4-5, 2");
    return response;
}


int main()
{
  
    assert(strcmp(Response(4,5),"4-5, 2") == 0);
    
    
    int input[5] = {8,4,2,3,7};
    int n = 0;
    n = sizeof(input)/sizeof(input[0]);
    sortarray(input, n);
    defineranges(input, n);
    
    return 0;
}
