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
    int start = arr[0];
    int end = arr[0];
    int range_count = 0;
    int readings = 1;

    int start_array[n], end_array[n], read_array[n];

      for (int i = 1; i < n; i++)
      {
        if (arr[i] - arr[i-1] > 1)
        {
          start_array[range_count] = start;
          end_array[range_count] = end;
          read_array[range_count] = readings;
          readings = 1;
          
          range_count++;
          
    
          start = arr[i];
          end = arr[i];
        }else 
        {
          end = arr[i];
          readings++;
        }
      }
    
      start_array[range_count] = start;
      end_array[range_count] = end;
      read_array[range_count] = readings;
      range_count++;
    
      Output(start_array,end_array,read_array, range_count);

}

void Output(int StartofRange[], int EndofRange[], int CountinRange[], int size)
{
    printf("Range, Readings\n");
    for (int i = 0; i < size; i++) 
    {
        printf("%d-%d, %d\n", StartofRange[i], EndofRange[i], CountinRange[i]); 
    }
    
}

int main()
{
  
    int input[5] = {8,4,2,3,7};
    int n = (sizeof(input)/sizeof(input[0]));
    sortarray(input, n);
    defineranges(input, n);
    int Example2[10] = {8,15,9,2,7,6,9,1,25,0};
    int m = (sizeof(Example2)/sizeof(Example2[0]));
    sortarray(Example2,m);
    defineranges(Example2,m);
    
    return 0;
}
