#include <stdio.h>

int main(int argc, char *argv[])
{ 
    // Go through each string in argv[])

    int i = 0;
    while(i < argc){ 
        printf("arg: %d: %s\n", i, argv[i]);
        i++;
    }

    // Let's make our own array of strings!

    char *states[] = {"California", "Oregon", "Washington"};
    
    int num_states = 4;
    i = 0;  // watch for this

    while(i < num_states){ 
        printf("arg: %d: %s\n", i, states[i]);
        i ++;
    }

/* Checks sizes of various arrays in prog.
    int st_size = sizeof(states);
    int argc_size = sizeof(argc);
    int argv_size = sizeof(argv);


    printf("size of states array: %d\nsize of argc: %d\nsize of argv[]: %d\n", st_size, argc_size, argv_size);

    i = 0;
    char *receptor[] = {"a", "a", "a", "a"};
    while(i < argc && sizeof(arg){ 
        receptor[i] = argv[i];
        printf("arg: %d: %s\n", i, receptor[i]);
        i ++;
   }
*/
    return 0;
}
