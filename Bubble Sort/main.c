#include "stdio.h"

int main()
{
    int arrayToSort[] = {10, 2, 4, 6, 8, 15, 2};
    int tmp = 0;

    for (int iter = 0; iter < sizeof(arrayToSort) - 1; iter++){
        printf("%i ", arrayToSort[iter]);
    }


    for (int i = 1; i < sizeof(arrayToSort) - 1; i++)
    {
        for (int j = 0; j < sizeof(arrayToSort); j++)
        {
            if (arrayToSort[j] > arrayToSort[i])
            {
                tmp = arrayToSort[i];
                arrayToSort[i] = arrayToSort[j];
                arrayToSort[j] = tmp;
                break;
            }
        }
    }
    
    for (int iter = 0; iter < sizeof(arrayToSort) - 1; iter++){
        printf("%i ", arrayToSort[iter]);
    }

}