#include <iostream>
#include<random>

#define NO_GOOD_MOVE  0
#define MAX_MOVE 3
#define N_COINS 23
#define HUMAN 1
#define COMPUTER 0

int nCoins = N_COINS, n;
int whoseTurn = HUMAN;

using namespace std;

bool isBadPosition(int nCoins);

int findGoodMove(int nCoins) {
    for (int n = 1; n <= MAX_MOVE; n++)
        if (isBadPosition(nCoins - n))
            return n;
    return NO_GOOD_MOVE;
}

bool isBadPosition(int nCoins) {
    if (nCoins == 1)
        return true;
    return
            findGoodMove(nCoins) == NO_GOOD_MOVE;
}

void basicGame(){

    cout << "Each one picks 1 to " << MAX_MOVE << " coins.\n";

    while (nCoins > 1) {
        cout << "\nWe have " << nCoins << ".\n";
        cout << "-----------" << (whoseTurn ? "Human" : "Computer") << "Turn ------------- " << endl;

        switch (whoseTurn) {
            case HUMAN:
                n = nCoins + 10;
                while (n < 1 || n > 3 || n > nCoins) {
                    cout << "Pls pick 1 to 3 coins and <= remaining coins: ";
                    cin >> n;
                }
                break;

            case COMPUTER:
                n = findGoodMove(nCoins);
                if (!n)
                    n = 1;
                cout << "Computer takes " << n << " coins.\n" ;
        }

        nCoins -= n;
        whoseTurn = (whoseTurn + 1) % 2;
    }

    cout << "\n\nWinner is : " << (whoseTurn ? "Computer \n" : "Human \n");
}


void game1(){
    int pile1 = 0, pile2 = 0;
    cout << "Each one picks 1 to " << MAX_MOVE << " coins.\n";

    while (nCoins > 0) {
        cout << "\nWe have " << nCoins << ".\n";
        cout << "Human Pile 1: " << pile1 << "\t" << "Computer Pile 2: " << pile2 << endl;
        cout << "-----------" << (whoseTurn ? "Human" : "Computer") << "Turn ------------- " << endl;

        switch (whoseTurn) {
            case HUMAN:
                n = nCoins + 10;
                while (n < 1 || n > 3 || n > nCoins) {
                    cout << "Pls pick 1 to 3 coins and <= remaining coins: ";
                    cin >> n;
                }
                pile1 += n;
                break;

            case COMPUTER:
                n = findGoodMove(nCoins);
                if (!n)
                    n = 1;
                cout << "Computer takes " << n << " coins.\n" ;
                pile2 += n;
                break;
        }

        nCoins -= n;
        whoseTurn = (whoseTurn + 1) % 2;
    }
    cout << "\nHuman Pile 1: " << pile1 << endl;
    cout << "\nComputer Pile 2: " << pile2 << endl;
    if(pile1 % 2 == 0){
        cout << "\nWinner is : Human" << endl;
    }
    else if(pile2 % 2 == 0){
        cout << "\nWinner is : Computer" << endl;
    }
    else cout << "DRAW" << endl;
}


int calNimSum(int pile1, int pile2, int pile3){
    return (pile1 ^ pile2 ^ pile3);
}


void game2(){
    int pile1 = rand() % 12, pile2 = rand() % 10, pile3 = 23 - (pile1 + pile2);
    nCoins = pile1 + pile2 + pile3;
    int nimSum = calNimSum(pile1, pile2, pile3);


    cout << "Each one picks 1 to " << MAX_MOVE << " coins.\n";
    cout << "\nWe have 3 Piles " << endl;
    while (pile1 > 0 || pile2 > 0 || pile3 > 0) {
        nimSum = calNimSum(pile1, pile2, pile3);

        cout << "Pile 1 : " << pile1 << "  " << " Pile 2 : " << pile2 << "  " << " Pile 3 : " << pile3 <<"\n";
        cout << "-----------" << (whoseTurn ? "Human" : "Computer") << "Turn ------------- " << endl;
        switch (whoseTurn) {
            case HUMAN:
                int option;
                do {
                    cout << "Choose a Pile to Draw: ";

                    cin >> option;
                }while(option > 3 || option <= 0);
                switch (option) {
                    case 1:
                        n = pile1 + 10;
                        while (n < 1 || n > 3 || n > pile1) {
                            cout << "Pls pick 1 to 3 coins : ";
                            cin >> n;
                        }
                        pile1 -= n;
                        break;
                    case 2:
                        n = pile2 + 10;
                        while (n < 1 || n > 3 || n > pile2 ) {
                            cout << "Pls pick 1 to 3 coins : ";
                            cin >> n;
                        }
                        pile2 -= n;
                        break;
                    case 3:
                        n = pile3 + 10;
                        while (n < 1 || n > 3 || n > pile3) {
                            cout << "Pls pick 1 to 3 coins : ";
                            cin >> n;
                        }
                        pile3 -= n;
                        break;
                }
                nimSum = calNimSum(pile1, pile2, pile3);
            break;

            case COMPUTER:
               // n = findGoodMove(nCoins);
                if(nimSum != 0){
                    if((pile1 ^ nimSum) < pile1){
                        cout << "Computer Choose pile 1" << endl;
                        n = (pile1 - (pile1 ^ nimSum)) % 3;
                        if(n == 0) n = 1;
                        pile1 -= n;
                    }
                    else if((pile2 ^ nimSum) < pile2){
                        cout << "Computer Choose pile 2" << endl;
                        n = (pile2 - (pile2 ^ nimSum)) % 3;
                        if(n == 0) n = 1;
                        pile2 -= n;
                    }
                    else if((pile3 ^ nimSum) < pile3){
                        cout << "Computer Choose pile 3" << endl;
                        n = (pile3 - (pile3 ^ nimSum)) % 3;
                        if(n == 0) n = 1;
                        pile3 -= n;
                    }
                    cout << "Computer takes " << n << " coins." << endl;
                }
                else{
                    if(pile1 > 0){
                        cout << "Computer Choose pile 1" << endl;
                        n = (rand() % pile1) % 3;
                        if(n == 0) n = 1;
                        pile1 -= n;
                    }
                    else if(pile2 > 0){
                        cout << "Computer Choose pile 2" << endl;
                        n = (rand() % pile2) % 3;
                        if(n == 0) n = 1;
                        pile2 -= n;
                    }
                    else if(pile3 > 0){
                        cout << "Computer Choose pile 3" << endl;
                        n = (rand() % pile3) % 3;
                        if(n == 0) n = 1;
                        pile3 -= n;
                    }
                    cout << "Computer takes " << n << " coins." << endl;
                }
                break;
        }
        whoseTurn = (whoseTurn + 1) % 2;
    }

    cout << "\n\nWinner is : " << (whoseTurn ? "Computer \n" : "Human \n");
}




int main() {

    cout << "Welcome to Nim. We start with " << nCoins << endl;
    cout << "Choose Game 0, 1, or 2" << endl;
    cout << "0. Basic Nim Game" << endl;
    cout << "1. Variant 1" << endl;
    cout << "2. Variant 2" << endl;
    cout << "Your Option : ";
    int option;
    bool error = false;
    do{
        if(error){
            cout << "Please Choose 1 or 2 for Nim Game !" << endl;
        }
        cin >> option;
        if(option != 2 && option != 1 && option != 0){
            error = true;
        }
    }while(error);

    switch (option) {
        case 0:
            basicGame();
            break;

        case 1:
            game1();
            break;

        case 2:
            game2();
            break;
    }


}
