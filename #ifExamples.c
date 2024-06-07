#include <stdio.h>
#include <stdlib.h>
#define FEATURE_VERSION 2
#define ABC
// #define  configMINIMAL_STACK_SIZE 10

// #ifndef configMINIMAL_STACK_SIZE
// #error "configMINIMAL_STACK_SIZE must be defined in FreeRTOSConfig.h"
// #endif
int main() {
    int *ptrInt=NULL;
    #if  (FEATURE_VERSION > 2 ) || defined ABC
    printf("Feature version 2 or higher is enabled.\n");
    #else
    printf("Feature version 1 is enabled.\n");
    #endif

    return 0;
}