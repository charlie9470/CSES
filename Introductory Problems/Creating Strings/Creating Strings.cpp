#include<iostream>
#include<algorithm>
using namespace std;
void swap(string&X,int i,int j){
    char tmp = X[i];
    X[i] = X[j];
    X[j] = tmp;
    return;
}
int First(string& X){
    for(int i = X.length()-2;i>=0;i--){
        if(X[i]<X[i+1]) return i;
    }
    return -1;
}
int Second(string& X,int F){
    int tmp = F+1;
    for(int i = F;i<X.length();i++){
        if(X[i]>X[F]&&X[i]<X[tmp]) tmp = i;
    }
    return tmp;
}
void Helper(string& x){
    while(First(x)!=-1){
        cout << x << endl;
        int F = First(x);
        int S = Second(x,F);
        swap(x,F,S);
        sort(x.begin()+F+1,x.end());
    }
    cout << x << endl;
    return;
}
int fact(int x){
    int tmp = 1;
    for(int i = 2;i<=x;i++){
        tmp*=i;
    }
    return tmp;
}
int main(){
    string X;
    cin >> X;
    sort(X.begin(),X.end());
    int n = X.length();
    int O = fact(n);
    int tmp = 1;
    for(int i = 1;i<n;i++){
        if(X[i]==X[i-1]) tmp++;
        else{
            O/=fact(tmp);
            tmp = 1;
        }
    }
    O/=fact(tmp);
    cout << O << endl;
    Helper(X);
    return 0;
}
