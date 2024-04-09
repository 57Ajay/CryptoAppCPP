#include <iostream>
using namespace std;

int main (){
    while(true){
        cout<< "1: Print Help\n";
        cout << "2: Print Exchange Stats\n";
        cout << "3: Make an offer\n";
        cout << "4: Make a bid\n";
        cout << "5: Print Wallet\n";
        cout << "6: Continue\n";
        cout << "==================\n";
        cout << "Type in 1-6: \n";
        
        int userOption;
        cin >> userOption;
        cout << "you chose "<< userOption << "\n";

        if (userOption==0){
            cout<< "Bad Input. Choose 1-6\n";
            break;
        };
        if (userOption==1){
            cout<< "Help: Your aim is to make money. Analyze the market and make bids and offers. \n";
        };
        if (userOption==2){
            cout<< "Market Looks Good.\n";
        };
        if (userOption==3){
            cout<< "Make an offer - enter the amount.\n";
        };
        if (userOption==4){
            cout<< "Make bid - enter the amount.\n";
        };
        if (userOption==5){
            cout<< "Your Wallet is empty.\n";
        };
        if (userOption==6){
            cout<< "Going to next time frame.\n";
        };
    };

    return 0;
}