#include <iostream>
using namespace std;


int main() {




    string user_cms;
    cout << "Enter a command: ";

    cin >> user_cms ;



    string cms[] = {"hi", "hello", "bye", "how are you", "whats up", "what is your name?", "i am sad", "i am happy"};



    if ( user_cms == cms[0]) {
        cout << "hello";
    }
    else if ( user_cms == cms[1]) {
        cout << "hi";
    }

    else if ( user_cms == cms[2]) {
        cout << "bye!";
    }

    else if ( user_cms == cms[3]) {
        cout << "Better than u are";
    }

    else if ( user_cms == cms[4]) {
        cout << "I am awesome";
    }


    else if ( user_cms == cms[5]) {

            cout << "I ma chatbot v12.344";

    }




}

