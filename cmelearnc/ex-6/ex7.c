#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
    int bugs = 100;
    double bug_rate = 1.2;

    printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
    
    unsigned long p2 = pow(2, 63);
    unsigned long universe_of_defects = p2 - 1;
    printf("The entire universe of bugs has %ld bugs\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("You are expected to have %f bugs.\n", expected_bugs);

    double part_of_the_universe = expected_bugs / universe_of_defects;
    printf("That is only %e %% of the universe.\n", part_of_the_universe);

    // This is nonesense, it just does something weird.
    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("Which means you should care %d%%.\n", care_percentage);
    printf("Null byte: %s.\n", nul_byte);

    return 0;
} 
