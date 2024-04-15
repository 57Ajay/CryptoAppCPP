#include <iostream>
#include <string>
#include <vector>
using namespace std;

enum class OrderBookType{bid, ask};

class OrderBookEntry{
    public:
        double price;
        double amount;
        string timestamp;
        string product;
        OrderBookType orderType;
};

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
    // string orderType{"anything"};
    //This enum will make sure of order of only type 
    //2 type: bid, ask;

    
    OrderBookType orderType = OrderBookType::bid;

    vector<double> prices;
    vector<double> amounts;
    vector<string> timestamps;
    vector<string> products;
    vector<OrderBookType> orderTypes;
    prices.push_back(5000.01);
    amounts.push_back(0.001);
    timestamps.push_back("2021/04/24 22:10:40.345678");
    products.push_back("BTC/USDT");
    orderTypes.push_back(OrderBookType::bid);

    cout<< "prices"<< prices[0]<< "\n";
    cout<< "prices"<< prices[1]<< "\n";



    while(true){

        printMenu();
        int userOption = getUserOption();
        processUserOption(userOption);
        if (userOption==0){
            break;
        };

    };

    OrderBookEntry order1;
        order1.price = 10000;
        order1.amount = 0.002;
        order1.timestamp = "2021/04/24 22:10:40.345678";
        order1.product = "BTC/USDT";
        order1.orderType = OrderBookType::bid;

        cout<< "price: "<< order1.price<< "\n";
        cout<< "amount: "<< order1.amount<< "\n";



    return 0;
}