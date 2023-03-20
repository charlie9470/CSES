#include<iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    while(x!=1){
        cout << x << " ";
        if(x%2) x = x*3+1;
        else x/=2;
    }
    cout << x << endl;
    return 0;
}
