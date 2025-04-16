#include <stdio.h>
#include <stdlib.h>
int main(){
    // int* prt = NULL;
    // prt = (int*)malloc(sizeof(int));
    
    char* mrt = NULL;
    mrt = (char*)malloc(sizeof(char));
    if (mrt !=NULL)
    {
        *mrt = 'i am a boy';
        printf("This is me passig the CHAR: %s\n", *mrt);
        free(mrt);
    }else{
        printf("Memory allocation failed\n");
    }
    return 0;
}