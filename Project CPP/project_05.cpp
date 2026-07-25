#include <bits/stdc++.h>
using namespace std;
int main () {
    int speed;
    cout<<"Enter Vehicle Speed:";
    cin>>speed;
if (speed<=80)
{
    cout<<"No Fine";

}
else if(speed<=100){
    cout<<"Fine of ৳1000";

}
else if(speed<=120){
        cout<<"Fine of ৳2000";
}
else{
    cout<<"Fine of ৳5000";
}


 return 0;
}
