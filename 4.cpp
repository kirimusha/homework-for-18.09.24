#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int sale, MONEY, i, n;
    char category, client, payment;

    MONEY = 2500;

    cout << "Which category you want a product from? (variants: A, B, C): ";
    cin >> category;
    cout << "What the type of a client are you? (E, G, M, B): ";
    cin >> client;
    switch(client){
        case 'E':
            switch(category){
                case 'A': sale = 40;
                case 'B': sale = 30;
                case 'C': sale = 20;
            }
        case 'G':
            switch(category){
                case 'A': sale = 30;
                case 'B': sale = 20;
                case 'C': sale = 10;
            }
        case 'M':
            switch(category){
                case 'A': sale = 20;
                case 'B': sale = 10;
                case 'C': sale = 0;
            }
        case 'B':
            switch(category){
                case 'A': sale = 0;
                case 'B': sale = -5;
                case 'C': sale = -10;
            }

    }

    if(client == 'E' | client == 'G'){
        cout << "By what do you want to pay?(C (for cash), B (for bank card), D (for credit)): ";
        cin >> payment;
        while(payment != 'C' && payment != 'B' && payment != 'D'){
            cout << "By what do you want to pay?(C (for cash), B (for bank card), D (for credit)): ";
            cin >> payment;
        }
    }
    else if(client == 'M'){
        cout << "By what do you want to pay?(C (for cash), B (for bank card)): ";
        cin >> payment;
        while(payment != 'C' && payment != 'B'){
            cout << "By what do you want to pay?(C (for cash), B (for bank card)): ";
            cin >> payment;
        }
    }
    else if(client == 'B'){
        payment = 'C';
    }

    if(payment == 'C'){
        cout << "Cost in cash would be: " << MONEY * ((100 - sale) / 100) << endl;
    }else if(payment == 'B'){
        cout << "What is a percent of your contributions (3 - 15)?: ";
        cin >> i;
        cout << "What is an amount of your contributions?: ";
        cin >> n;
        cout << "Cost in bank card would be: " << MONEY * ((100 - sale - i * n) / 100) << endl;
    }else if(payment == 'D'){
        cout << "What is the amount of your payments? (1 - 6): ";
        cin >> n;
        cout << "What type of a credit do you want: platinum (5) of business (2)?: ";
        cin >> i;
        cout << "Cost in credit would be: " << MONEY * (100 - sale) * (1 + i / 100) << endl;
    }
    return 0;
}