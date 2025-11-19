#include <iostream> 
using namespace std; 
 
int main() { 
     int n = 8; 
     for (int i = 0; i < n; i++) { 
           for(int j = 0; j < n; j++){
            if (i==5 && j > 2 && j < 6) cout << "* ";
            else if (i==4 && j > 3 && j < 5) cout << "* ";
            else if (i==6 && j > 3 && j < 5) cout << "* ";
            else cout << "- ";
           }
      cout << endl; 
     } 

     cout << endl;

     for (int i = 0; i < n; i++) { 
           for(int j = 0; j < n; j++){
            if (i==5 && j > 2 && j < 6) cout << "* ";
            else cout << "- ";
           }
      cout << endl; 
     } 
     return 0; 
}

