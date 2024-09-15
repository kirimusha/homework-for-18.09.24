#include <iostream>
#include <cmath>


using namespace std;

int main(){
    float price;
    int land, floors;
    char decision;
    cout << "What is the amount of your land?" << endl;
    cin >> land;
    cout << "What is the type of a covering of your land?" << endl;
    cin >> decision;
    while ((decision =! 'R') && (decision =! 'N') && (decision =! 'G')){
        cout << "Your options: 'R' for roof, 'N' for without roof, 'G' for garden" << endl;
        cin >> decision;
    }
    if(decision == 'R'){
        price = 5 * land;
    }else if(decision == 'N'){
        price = 3 * land;
    }else if(decision == 'G'){
        price = land;
    }
    cout << "What is the type of your material?" << endl;
    cin >> decision;
    while ((decision =! 'Q') && (decision =! 'S') && (decision =! 'A')){
        cout << "Your options: 'Q' for high quality, 'S' for saman, 'A' for another material" << endl;
        cin >> decision;
    }
    if(decision == 'Q'){
        price = 1.15 * price;
    }else if(decision == 'S'){
        price = 1.10 * price;
    }else if(decision == 'A'){
        price = 1.05 * price;
    }
    cout << "Does your building have availability of water and sewerage?" << endl;
    cin >> decision;
    while ((decision =! 'Y') && (decision =! 'N')){
        cout << "Your options: 'Y' for yes, 'N' for no" << endl;
        cin >> decision;
    }
    if(decision == 'Y'){
        price = price + 2.5;
    }
    cout << "How many floors does your building have?" << endl;
    cin >> floors;
    if(floors == 2){
        price = price * 1.1;
    }else if(floors == 3 | floors == 4){
        price = price * 1.15;
    }else if(floors > 4){
        price = price * 1.2;
    }

    cout << price << endl;
    return 0;
}
