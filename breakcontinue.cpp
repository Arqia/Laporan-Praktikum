#include <iostream> 
using namespace std; 
 
int main() { 
     int nilai; 
     cout << "pernyataan break batas 10\n" << endl; 
     for (nilai = 1; nilai <= 10; nilai++) { 
         if (nilai == 5); 
         else {  
            cout << nilai << endl;
            break; 
         } 
     } 
     cout << "pernyataan continue batas 10\n" << endl; 
     for (nilai = 1; nilai <= 10; nilai++){ 
         if (nilai <= 5) continue; 
         else { 
            cout << nilai << endl; 
         } 
     } 
     return 0; 
}



