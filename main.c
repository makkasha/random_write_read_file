#include "write.h"
#include "read.h"

#define COUNT 10
#define START 0
#define END 100

int main() {

    random_write_file("random.txt", START, END, COUNT);
    read_file("random.txt");

    return 0;
}
