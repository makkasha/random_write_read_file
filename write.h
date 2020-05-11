#ifndef DATA_PROCESS_WRITE_H
#define DATA_PROCESS_WRITE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "file.h"

int* random(int start, int end, int count);
int random_write_file(char* filename, int start, int end, int count);

#endif //DATA_PROCESS_WRITE_H

