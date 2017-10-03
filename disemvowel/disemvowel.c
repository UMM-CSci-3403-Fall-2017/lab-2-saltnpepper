#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "disemvowel.h"

char* disemvowel(char* str) {
  //declare len, i and beg as integer type
  int len, i, beg;
  //initialize len as 0
  len = 0;
  //declare result as char array
  char *result;
  char string[] = "aeiouAEIOU";
  //initiaite beg as the length of string
  beg = strlen(str);

  //for loop
  for (i=0; i<beg; ++i) {
	//search for the non-occurrence of characters in string[] in str
	if(strchr(string, str[i]) == NULL) {
	  //if there are no characters that are vowel, add one to the len
	  ++len;
	 }
  }

  //purpose of the previous for loop is to find the size/amount of elements in the new string after disemvoweling

  result = (char*) calloc(len+1, sizeof(char));

  //initiaite result with the appropriate size, size was determined by the previous for loop

  len = 0;

  for (i=0; i<beg; ++i){
	if(strchr(string, str[i]) == NULL){
	  result[len] = str[i];
	  ++len;
	}
  }
  //using similar method above, all non-vowel characters are put into the result char array

  return result;
}
