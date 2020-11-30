#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[]){
    if(argc < 2) {
        printf("Provide port number\n");
        exit(EXIT_FAILURE);
    }
    int port = atoi(argv[1]);
    printf("port:%d\n",port);
}