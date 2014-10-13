#include <stdio.h>

int main(int argc, char *argv[])
{ 
    // create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alice", "Frank", "Bob", "Evelyn", "Mallory"};

    // safely get the sizes of ages

    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way of using indexing
    for(i = 0; i < count; i++){ 
        printf("%s has %d years alive.\n", names[i], ages[i]);
    }

    printf("---\n");

    // set up pointers to point at start of arrays
    int *cur_age = ages;
    char **cur_name = names;
    
    for(i = 0; i < count; i++){ 
        printf("%s has %d years alive.\n", *(cur_name + 1), *(cur_age + 1));
    }

    printf("---\n");

    // third was of using pointers -- using array indexing strategy 
    for(i = 0; i < count; i++){ 
        printf("%s has %d years alive.\n", cur_name[i], cur_age[i]);
    }
    
    printf("---\n");

    // fourth way of pointer usage -- silly
    for(cur_name = names, cur_age = ages; (cur_age - ages) < count; 
            cur_name++, cur_age++){ 
        printf("%s lived %d years so far.\n", *cur_name , *cur_age);
    }
            
    return 0;
}

