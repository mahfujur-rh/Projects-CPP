// Simple Electricity Bill Calculator (if/else condition)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int units;
    double bill = 0;

    cout << "Enter Consumed Units : ";
    cin >> units;
    if (units <= 100) {
        bill = units * 5;
    }
    else if (units <= 200) {
        bill = (100 * 5) +   //1st 100 units er bill
          (units - 100) * 7;  // 100 er porer units er bill
    }
    else {
        bill = (100 * 5) + (100 * 7) + (units - 200) * 10;
    }

    cout << "Total Electricity Bill is : " << bill << endl;

    return 0;
}
