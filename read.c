#include "read.h"

int read_file(char* filename){
    FILE* pfile = open_file(filename, "r");
    int ok = 0;
    if(pfile != NULL) {
        int z = 0;
        int n = 0;
        long sum = 0;
        while (fscanf(pfile, "%d", &z) == 1) {
            n++;
            sum += z;
        }
        printf("Mean: %f\n", (float) sum / n);
        ok = 1;
    }
    if(ok){
        printf("\nReading done.");
        close_file(pfile);
        return 0;
    }
}