/*
Name: Kieran Cahill
Student ID: 201944641
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char buffer[100] = "";   // should be enough for max inputs

    // process the command-line data using appropriate string functions
    for (int i = 1; i < argc; i++) {

        strcat(buffer, argv[i]);  // add current argument

        // add '-' if it's not the last one
        if (i < argc - 1) {
            strcat(buffer, "-");
        }
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}