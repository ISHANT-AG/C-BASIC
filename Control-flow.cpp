#include <iostream>
using namespace std;

// if-statement

int main()
{

    // int budget;
    // cout << "enter your budget : " << endl;

    // // input
    // cin >> budget;

    //     if (budget > 20000000)
    // {
    //     cout << "you can buy scorpio" << endl;
    // }
    // else {
    //     cout << "you cannot buy scorpio" << endl;
    // }

    // return 0;


//if-else-if block
//if-else-if-else block

int marks = 75;
if(marks> 90) {
    cout <<"A";
}
else if(marks > 80) {
    cout << "B" ;
}

else if (marks > 70) {
    cout << "C" ;
}
else {
    cout << "fail";
}

int height=7;
int weight=77;

if (height > 5)
{
    if (weight > 70)
    {
        cout << "A";
    }
    else
    {
        cout << "B";
    }
}
else
{
    cout << "C";
}

return 0;

}

