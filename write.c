#include "write.h"

int* random(int start, int end, int count){
    srand(time(NULL));
    int* array = (int*)calloc(count, sizeof(int));
    for (unsigned int i = 0; i < count; i++) {
        *(array + i) = rand() % (end - start + 1) + start;
    }
    return array;
}

int random_write_file(char* filename, int start, int end, int count){
    FILE* pfile = open_file(filename, "w+");
    int* ptr = random(start, end, count);
    for(int i = 0; i < count; i++){
        printf("%d ", *(ptr + i));
    }

    int ok = 0;
    if(pfile != NULL){
        for(int i = 0; i < count; i++){
            if(!fprintf(pfile,"%d\n", *(ptr + i))){
                printf("Writing to file was not successful.\n");
                return -1;
            }
            else{
                ok = 1;
            }
        }
    }

    if(ok){
        printf("were written to '%s'.", filename);
        close_file(pfile);
        return 0;
    }
    else{
        return -1;
    }
}