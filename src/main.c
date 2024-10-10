// Made by Serhij Čepil
// FIT VUT Student
// https://github.com/sipxi
// 09/10/2024

// The code is based on VUT FIT C Practicals



// EXAMPLE OF MAIN.C


#include "types.h"
#include <stdio.h>

bool contains_char(char string[], int length, char target) {
    for (int i = 0; i < length; i++) {
        if (string[i] == target) {
            return true;
        }
    }
    return false;
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
