#include <stdio.h>
#include <stdlib.h>
#define MAX 1000000
int arr[MAX];



typedef struct
{
    int m_arrLen;
    int* m_p_array; 
}my_array;

int find_maximum(int i,int arrLen,int max,int* m_p_array)
{ 
    if (i == arrLen - 1)
    {
        return max;
    }
    if (m_p_array[i] < m_p_array[i+1])
    {
        max = m_p_array[i+1];
    }
    return find_maximum(++i, arrLen, max, m_p_array);
}

int max(int* array, int i, int array_max)
{
    if (i == 5)
    {
        return array_max;
    }
    if (array_max < array[i + 1])
    {
        array_max = array[i + 1];
    }
    return max(array, ++i, array_max);
}

int main() 
{
    my_array a1;
    printf("Enter the size of array: ");
    scanf_s("%d", &a1.m_arrLen);

    if (a1.m_arrLen <= 0)
        return 0;

    a1.m_p_array = (int*)malloc(a1.m_arrLen * sizeof(int));

    if (!a1.m_p_array)
        return 0;

    printf("Input array: ");
    for (int i = 0; i < a1.m_arrLen; i++)
    {
        scanf_s("%d", &a1.m_p_array[i]);
    }

    int max = a1.m_p_array[0];
    printf("The maximum of the array is %d", find_maximum(0, a1.m_arrLen,max, a1.m_p_array));
    free(a1.m_p_array);
    return 0;
}