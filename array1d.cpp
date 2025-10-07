#include <stdio.h>


int main(){
    int i ;
    int data[]={11,3,4,7,24};


    int panjang = 10;


    printf("sebelum\n");


    for(i = 0; i < panjang; i++){
        printf("index ke-%d adalah %d\n",i,data[i]);
    }

    for(i = 0; i < panjang; i++){
        data[i] = data[i]*2;
    }

    printf("\n\nSesudah\n");

    for(i = 0; i < panjang; i++){
        printf("index ke-%d adalah %d\n",i,data[i]);
    }
}


