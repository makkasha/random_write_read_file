#include "file.h"

FILE* open_file(char* filename, char* mode){
    FILE* pfile = fopen(filename, mode);
    if (pfile == NULL) {
        printf("\nFailed to open '%s'.\n", filename);
        return NULL;
    } else {
        printf("\nFile '%s' opened successfully.\n", filename);
        return pfile;
    }
}

int close_file(FILE* pfile){
    if(fclose(pfile) != EOF){
        pfile = NULL;
        return 0;
    }
    else{
        printf("\nFailed to close file.\n");
        return -1;
    }
}