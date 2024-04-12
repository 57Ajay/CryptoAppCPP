#include <iostream>
#include <string>
using namespace std;

void printMenu(){
    cout<< "1: Print Help\n";
    cout << "2: Print Exchange Stats\n";
    cout << "3: Make an offer\n";
    cout << "4: Make a bid\n";
    cout << "5: Print Wallet\n";
    cout << "6: Continue\n";
    cout << "==================\n";
    
};

int getUserOption(){
    cout << "Type in 1-6: \n";
    int userOption;
    cin >> userOption;
    cout << "you chose "<< userOption << "\n";
    return userOption;
}

void invalidInput(){
    cout<< "Bad Input. Choose 1-6\n";
}

void printHelp(){
    cout<< "Help: Your aim is to make money. Analyze the market and make bids and offers. \n";
}

void printMarketStats(){
    cout<< "Market Stats: \n";
}

void printOffer(){
    cout<< "Make an offer - enter the amount.\n";
}

void enterBid(){
    cout<< "Make bid - enter the amount.\n"; 
}

void printWallet(){
    cout<< "Wallet: \n";
}

void goToNextTimeFrame(){
    cout<< "Going to next time frame.\n";
}




void processUserOption(int userOption){
    
        if (userOption==0){
            invalidInput(); 
        };
        if (userOption==1){
            printHelp();
        };
        if (userOption==2){
            printMarketStats();   
        };
        if (userOption==3){
            printOffer(); 
        };
        if (userOption==4){
            enterBid();
        };
        if (userOption==5){
            printWallet();   
        };
        if (userOption==6){
            goToNextTimeFrame();
        };
}
int main (){

    double price = 0.48;
    double amount = 0.03123456;
    string timestamp{"2021/04/24 22:10:40.345678"};
    string product{"BTC/USDT"};
    string orderType{"bid"};

    
    while(true){

        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
        if (userOption==0){
            break;
        };
    };

    return 0;
}