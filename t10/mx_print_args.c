#include "unistd.h"

void mx_printchar(char c);
void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if(argc <= 1) 
        return 0;

    char *temp;
    for (int i = 1; i < argc; i++) {
        temp = argv[i];
        mx_printstr(temp++);
        mx_printchar('\n');
    }
    return 0;
}

