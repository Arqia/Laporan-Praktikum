#include <iostream>

using namespace std;

int rec(int x){
    if(x==1) return 2;
    if(x==2) return 4;
    return rec(x-1) + rec(x-2);
}

int main(){
    
}