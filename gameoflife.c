#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

        int sizeX = atoi(argv[1]);
        int sizeY = atoi(argv[2]);

        printf("%d %d\n", sizeX, sizeY);

        char board[sizeX][sizeY];

        for (int i = 0; i < sizeX; i++){
                for (int j = 0; j < sizeY; j++){
                        if (i == 0 || j == 0){
                                printf("# ");
                        } else if (i == sizeX - 1 || j == sizeY - 1){
                                printf("# ");
                        } else {
                                printf(" ");
                        }
                }
                printf("\n");
        }

}