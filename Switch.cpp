#include<iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter your Grade" << endl;
    cin >> grade;

    if(grade == 'A') {
        cout << "Your marks will be in range of 90 to 100" << endl;
    }
    else if(grade == 'B') {
        cout << "Your marks will be in range of 80 to 90" << endl;
    }
    else if(grade == 'C') {
        cout << "Your marks will be in range of 70 to 80" << endl;
    }
    else {
        cout << "your marks will be in range of 0 to 60" << endl;
    }

    switch(grade) {
        case 'A': cout << "your marks will be in range of 90 to 100" << endl;
                  break;
        case 'B': cout << "your marks will be in range of 80 to 90" << endl;
                  break;
        case 'C': cout << "your marks will be in range of 70 to 80" << endl;
                  break;
        case 'D': cout << "your marks will be in range of 60 to 70" << endl;
                  break;
        default:  cout << "your marks will be in range of 0 to 60" << endl;
    }

    int age = 12;
    switch(age > 10) {
        case 1:
            cout << "hello" << endl;
            break;
        case 0:
            cout << "false" << endl;
            break;
    }

    return 0;
}
