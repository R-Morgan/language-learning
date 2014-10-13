#include <stdio.h>

int main(int argc, char *argv[])
{ 
/*    if(argc != 2){ 
        printf("ERROR: You need one argument.");
        // This is how you abort a prog
        return 1;
    }
*/
    int i = 0;
    int j = 0;

    for(i = 1; i < argc; i++){ 
        for(j = 0; argv[i][j] != '\0' ; j++){ 
        
            char letter = argv[i][j];

            switch(letter){ 
                case 'a':
                case 'A':
                    printf("%d: 'A'\n", i);
                    break;
            
                case 'e':
                case 'E':
                    printf("%d: 'E'\n", i);
                    break;

                case 'i':
                case 'I':
                    printf("%d: 'I'\n", i);
                    break;

                case 'o':
                case 'O':
                    printf("%d: 'O'\n", i);
                    break;

                case 'u':
                case 'U':
                    printf("%d: 'U'\n", i);
                    break;

                case 'y':
                case 'Y':
                    if(argc > 2){ 
                    // it's only sometimes y
                    printf("%d: 'Y'\n", i);
                    }
                    break;
                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }
    return 0;
}



