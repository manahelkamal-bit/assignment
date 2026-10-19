#include <iostream>
int main()
//{
//    cout << "Orientation Day" << endl
//        cout << "Total students: " 450 << endl;
//    cout << "Seats left: " << 500 - 450 << endl;
//    cout << 'Have a nice day << endl;
//        return 0;
//}
//correct code
#include <iostream>
using namespace std;

int main()
{
    cout << "Orientation Day" << endl; // cout ki pehli statement ke end par semicolon (;) missing tha.

    cout << "Total students: " << 450 << endl;//  "Total students: " ke baad 450 se pehle insertion operator (<<) missing tha.

    cout << "Seats left: " << 500 - 450 << endl; // Seats left calculate karna: 500 - 450 = 50

    cout << "Have a nice day" << endl;  // String ke liye single quotes (') ki jagah double quotes (") use honge.Have a nice day ke baad closing double quote (") missing tha.

    return 0;
}
