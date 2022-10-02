#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
int *ptr, *ptr1; 
int n, i, sum = 0; 
 
   n = 5; 
  printf("Enter number of elements: %d\n", n); 
  
    // Dynamically allocate memory using malloc() 
    ptr = (int*)malloc(n * sizeof(int)); 
  
    // Dynamically allocate memory using calloc() 
    ptr1 = (int*)calloc(n, sizeof(int)); 
  
    if (ptr == NULL || ptr1 == NULL) { 
        printf("Memory not allocated.\n"); 
        exit(0); 
    } 
    else { 
printf("Memory successfully allocated using malloc.\n"); 
    free(ptr); 
    printf("Malloc Memory successfully freed.\n"); 
    // Memory has been successfully allocated 
    printf("\nMemory successfully allocated using calloc.\n"); 
    // Free the memory 
        free(ptr1); 
        printf("Calloc Memory successfully freed.\n"); 
    } 
    return 0; 
} 
