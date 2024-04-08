#include "stdio.h"

int main()
{


    for (int i = 2; i < 20; i++){
        for (int j = 2; j < 20; j++){
            if (i%j == 1){
                printf("%d \n", i,j);
                break;
            }
        }
    }

    return 0;
}
