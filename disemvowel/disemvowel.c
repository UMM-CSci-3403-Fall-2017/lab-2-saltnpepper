#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "disemvowel.h"

char* disemvowel(char* str) {
  int len, i, beg;
  len = 0;
  char *result;
  char string[] = "aeiouAEIOU";
  beg = strlen(str);

  for (i=0; i<beg; ++i) {
	if(strchr(string, str[i]) == NULL) {
	  ++len;
	 }
  }

  result = (char*) calloc(len+1, sizeof(char));

  len = 0;

  for (i=0; i<beg; ++i){
	if(strchr(string, str[i]) == NULL){
	  result[len] = str[i];
	  ++len;
	}
  }

  return result;
}
