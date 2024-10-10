// Made by Serhij Čepil
// FIT VUT Student
// https://github.com/sipxi
// 09/10/2024

// The code is based on VUT FIT C Practicals



//Testing various functions


#include "types.h"
#include <stdio.h>

bool is_in_set(int set[], int length, int value) {
    for (int i = 0; i < length; i++) {
        if (set[i] == value) {
            return true; 
        }
    }
    return false;
}


bool is_alpha(char c) {

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
	return true;
  }
  return false;
}

bool is_name(char string[]) {

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
bool contains_char(char string[], int length, char target) {
    for (int i = 0; i < length; i++) {
        if (string[i] == target) {
            return true;
        }
    }
    return false;
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
