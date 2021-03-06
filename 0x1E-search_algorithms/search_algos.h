#ifndef SEARCH_ALGOS
#define SEARCH_ALGOS

#ifndef INCLUDS
#define INCLUDS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#endif /*INCLUDS*/

#ifndef PROTOTYPES
#define PROTOTYPES

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);

#endif /*PROTOTYPES*/

#endif /*SEARCH_ALGOS*/
