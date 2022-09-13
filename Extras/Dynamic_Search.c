#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, *arr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Error! memory not allocated.");
        exit(0);
    }

    printf("Enter the elements in the array one by one: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\narr[%d] => ", i);
        scanf("%d", (arr + i));
    }
    printf("\nElements in the array are: \n");
    for (int i = 0; i < n; i++)
        printf("%d  ", *(arr + i));
    int key, lb = 0, ub = n - 1, ptr, flag = 0;
    printf("\nEnter the element you want to search: ");
    scanf("%d", &key);

    // sort2(&arr, n);
        int *temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
        
    }

    printf("\nElements in the array are: \n");
    for (int i = 0; i < n; i++)
        printf("%d  ", *(arr + i));
    while (lb <= ub)
    {
        ptr = (lb + ub) / 2;
        if (*(arr + ptr) > key)
            ub = ptr - 1;
        if (*(arr + ptr) < key)
            lb = ptr + 1;
        if (*(arr + ptr) == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        printf("\nSearch Successfull :)");
    else
        printf("\nSearch Not Successfull Pal :(");
    free(arr);
    return 0;
}
void sort(int *(*arr), int n)
{
    int min; 
    int *temp;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (*(arr + min) < *(arr + j))
            {
                min = j;
            }
        }
        temp = *(arr + min);
        *(arr + min) = *(arr + i);
        *(arr + i) = temp;
    }
}
void sort2(int *(*arr),int n){
    int *temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(*(arr+i)<*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
        
    }
    
}