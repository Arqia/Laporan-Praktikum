#include <stdio.h>
#define length(arr) ((int) (sizeof (arr) / sizeof (arr)[0]))

int main(){
    int data[3][3];
    int i,j;
    int kolom = length(data);
    int baris = length(data[0]);

    for(i=0; i < kolom; i++){
        for(j=0; j < baris; j++){
            data[i][j] = i * j;
        }
    }

    for(i=0; i < kolom; i++){
        for(j=0; j < baris; j++){
            printf("%d ",data[i][j]);
        }
        printf("\n");
    }
}
    
