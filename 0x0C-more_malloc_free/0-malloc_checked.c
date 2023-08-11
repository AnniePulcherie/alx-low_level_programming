/* file: 0-malloc_checked.c
 * Auth: Annie
 */

#include "main.h"
#include <stdlib.h>
void *malloc_checked(unsigned int b){
  void *ptr = malloc(b);
  if(ptr == NULL){
    exit(98);
  }
  return ptr;
}
