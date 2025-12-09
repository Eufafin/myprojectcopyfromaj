#include<iostream>
using namespace std;
int x;
int i,even,odd;
int main(){
    while(true){
    cout << "Enter an integer: ";
    cin >> x;
    if(x == 0){
        break;
    }
        if(x%2 == 0){
            even++;
        }else{
            odd++;
        }
    i++;
}
    cout << "#Even numbers = " << even << "\n";
    cout << "#Odd numbers = " << odd;
    return 0;
}
