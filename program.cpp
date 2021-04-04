#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

int main(){

    int drawn;
    int theBiggest = 100;
    int theSmallest = 0;
    char character;
    srand(time(0));
    cout << "The program will guess your number in the range: 1-100\n";
    cout << "If number is: \n\t too small type: + \n\t too big type: - \n\t if number is right: =\n";


    do{
        drawn = rand() %theBiggest + 1;
        if(drawn>theSmallest){
        cout << drawn;
                cout << "\n>";
                cin >> character;
                switch(character){
                    case '+': {theSmallest = drawn;}
                    break;
                    case '-': {theBiggest = drawn;}
                    break;
                    case '=': {cout << "The program guessed your number :)";}
                    break;
        }
        }else{
            drawn = drawn + (theSmallest - drawn);
        }


    }while(character != '=');

    return EXIT_SUCCESS;
}
