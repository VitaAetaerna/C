#include "stdio.h"

int main(){
    int IntA = 5;
    int IntB = 4;

    char CharA[] = "abc";
    char CharB[] = "def";

    float FloatA = 1.2f;
    float FloatB = 2.75f;

    printf("Float Summarization: %f \n", FloatA+FloatB, "\n");
    printf("Int Summarization: %i \n", IntA+IntB, "\n");
    printf("%s %s", CharA,CharB);

    

    return 0;
}