#include <iostream>

using namespace std;

class worker{
    private:
        string name;
        long long nip;
        string position;

    public:
        double salary;

        worker(string x, long long y){
            name = x;
            nip = y;
        }
        string getName(){
            return name;
        }
        
        long long getNIP(){
            return nip;
        }

        void work(int workTime){
            money += workTime * 5; 
        }

        void printinfo(){
            cout << "Name\t: " << name << endl;
            cout << "NIP\t: " << nip << endl;
            cout << "Salary\t: " << salary << endl;
            cout << "Position\t: " << position << endl;
            cout << "Money\t: " << money << endl;
        }

        void payDay(){
            money = money / 2;
        }

    protected:
        double money;

};

class programmer : public worker{
    private:
        string language;

    public:
        programmer(string x, long long y, string z){
            name = x;
            nip = y;
            language = z;
        }

        
};