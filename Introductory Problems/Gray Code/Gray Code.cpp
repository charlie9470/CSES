#include<iostream>
using namespace std;
void Helper(string& x,int i){
    if(i==x.length()){
        cout << x << endl;
        return;
    }
    Helper(x,i+1);
    x[i]=(x[i]=='0')?'1':'0';
    Helper(x,i+1);
}
int main(){
    int n;
    cin >> n;
    string tmp(n,'0');
    Helper(tmp,0);
    return 0;
}
