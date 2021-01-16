#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

        int size = atoi(argv[1]);

        char board[size][size];

        for (int i = 0; i < size; i++){
                for (int j = 0; j < size; j++){
                        printf("1");
                }
                printf("\n");
        }

}