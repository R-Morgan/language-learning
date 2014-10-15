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
    int count = sizeof(agel) / sizeof(int);
    int i = 0;

    int *cur_age = agel;
    char **cur_name = namel;

    //index arrays method
    for(i = 0; i < 5; i++){ 
        printf("%s has %d years alive.\n", cur_name[i], cur_age[i]);
        printf("count is %d\n", i);
    }

    printf("---\n");
}

//void pointerTest2(int agel[], char *namel[]){ }

int main(int argc, char *argv[])
{ 
   pointerTest1(ages, names);

    int count = sizeof(ages) / sizeof(int);
    int i = 0;
    for(i = 0; i < count; i++){ 
        printf("%d in ages\n", ages[i]);
        printf("%s in names\n", names[i]);
    }
    printf("count = %d\n", count);
    printf("---\n");

    pointerTest2(ages, names);

    return 0;
}
