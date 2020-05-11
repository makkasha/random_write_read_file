#ifndef DATA_PROCESS_FILE_H
#define DATA_PROCESS_FILE_H

#include <stdio.h>
#include <stdlib.h>

FILE* open_file(char* filename, char* mode);
int close_file(FILE* pfile);

#endif //DATA_PROCESS_FILE_H
