#include <stdio.h>

int ages[] = {23, 3, 88, 14, 97};
char *names[] = {"Alice", "Bob", "Evelyn", "Mallory", "Hannah"};

     
void pointerTest1(int agel[], char *namel[]);
void pointerTest2(int agel[], char *namel[]);

void pointerTest1(int agel[], char *namel[])
{ 
    // initialise count and indexing variable
    int count = sizeof(agel) / sizeof(int);
    int i = 0;

    //index arrays method
    for(i = 0; i < 5; i++){ 
        printf("%s has %d years alive.\n", namel[i], agel[i]);
    }

    printf("---\n");
}

void pointerTest2(int agel[], char *namel[])
{ 
    // initialise count and indexing variable
    //  int count = sizeof(agel) / sizeof(int);
    int i = 0;
    int size = sizeof(agel);

    // initialise pointers

    int *cur_age = agel;
    char **cur_name = namel;

    // get size of what is in pointer
    int count = sizeof(*cur_age);
    
    //index arrays method
    for(i = 0; i < count; i++){ 
        printf("%s has %d years alive.\n\n", cur_name[i], cur_age[i]);
        printf("i is %d\n", i);
        printf("count is %d\n", count);
    }

    printf("size of agel is: %d\n", size);
    printf("---\n");
}

//void pointerTest2(int agel[], char *namel[]){ }

int main(int argc, char *argv[])
{ 
   pointerTest1(*ages, names);

    int count = sizeof(*ages) / sizeof(int);
    int i = 0;
    for(i = 0; i < count; i++){ 
        printf("%d in ages\n", ages[i]);
        printf("%s in names\n", names[i]);
    }
    printf("count = %d\n", count);
    printf("---\n");

    pointerTest2(ages, names);

    int sizeages = sizeof(ages);

    printf("Size of ages: %d\n", sizeages);
    return 0;
}
