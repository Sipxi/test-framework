// Made by Serhij Čepil
// FIT VUT Student
// https://github.com/sipxi
// 09/10/2024

// The code is based on VUT FIT C Practicals


#include "types.h"
#include <stdio.h>
/**
 * Determine whether the provided character is alphabetic.
 * 
 * @param c character
 * 
 * @return true when the provided character `c` is alphabetic;
 *    false otherwise
 */


bool is_in_set(int set[], int length, int value) {
    // Iterate through the array
    for (int i = 0; i < length; i++) {
        // Check if the current element matches the value
        if (set[i] == value) {
            return true; // Value is found
        }
    }
    return false; // Value is not found
}


bool is_alpha(char c) {

  /* 
   * This is quite easy, just use the ASCII table
   *
   * ASCII table: https://en.wikipedia.org/wiki/ASCII
   * simply said it comparing c ascii value with 'a' and 'z' or 'A' and 'Z' ascii values
   * suppose we have char c = 'b' it's ASCII value is 98 it checks with 97 and 122 and returns true
   * if not it returns false
  */

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	return true;
  }
  return false;
}

/**
 * Determine whether all characters of the provided `string`
 *    (character array) are alphabetic.
 * 
 * @param string input string
 * 
 * @return true when all characters in the provided string are alphabetic;
 * 	  false otherwise
 */
bool is_name(char string[]) {
	/*
		* I used while loop to iterate through the string and get it's length
		* For loop to iterate through the string and check if the characters are alphabetic
		
		!The code is not the best, but it works
	*/


	int length = 0;

	while (string[length] != '\0') {
		length++;
	}
	if (length == 0) {
		return false;
	}


	for(int i = 0; i < length; i++) {
		if(!is_alpha(string[i])) {
			return false;
		}
		
	}
	return true;
}


// Function to check if a specific character is present in a string
bool contains_char(char string[], int length, char target) {
    for (int i = 0; i < length; i++) {
        if (string[i] == target) {
            return true; // Character found
        }
    }
    return false; // Character not found
}

int add(int a, int b) {
	return a + b;
}



#ifndef TEST_BUILD

int main() {
	// Limit the size of names to 20 characters + terminating '\0'
	char name[21];
	char surname[21];

	// Let the user specify their name
	printf("Please provide your name: ");
	scanf("%20s", name);

	// Call our new function that checks if the name contains only alphabetic symbols
	// The argument supplied to the function can have a different name than the one
	// specified in the function definition.
	if(!is_name(name)) {
		printf("Provided name contains non-alphabetic characters!\n");
		return 1;
	}

	printf("Please provide your surname: ");
	scanf("%20s", surname);
	if(!is_name(surname)) {
		printf("Provided surname contains non-alphabetic characters!\n");
		return 1;
	}

	printf("Your full name is: %s %s\n", name, surname);
	return 0;
}



#endif
