#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float sale;
    char category, client, payment;
    cout << "Which category you want a product from? (variants: A, B, C): ";
    cin >> category;
    cout << "What the type of a client are you? (E, G, M, B): ";
    cin >> client;
    cout << "By what do you want to pay?(C (for cash), B (for bank card), D (for credit)): ";
    cin >> payment;
    switch(client){
        case 'E':
            switch(category){
                case 'A': sale = 0.4;
                case 'B': sale = 0.3;
                case 'C': sale = 0.2;
            }
        case 'G':
            switch(category){
                case 'A': sale = 0.3;
                case 'B': sale = 0.2;
                case 'C': sale = 0.1;
            }
        case 'M':
            switch(category){
                case 'A': sale = 0.2;
                case 'B': sale = 0.1;
                case 'C': sale = 0;
            }
        case 'B':
            switch(category){
                case 'A': sale = 0;
                case 'B': sale = -0.05;
                case 'C': sale = -0.1;
            }

    }

    return 0;
}