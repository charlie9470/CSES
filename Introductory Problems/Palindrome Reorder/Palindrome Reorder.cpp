#include<iostream>
#include<vector>
using namespace std;
int main(){
    string input;
    cin >> input;
    int n = input.length();
    vector<int> M(30,0);
    for(auto i:input){
        M[i-'A']++;
    }
    int ODD = -1;
    for(int i = 0;i<26;i++){
        if(M[i]%2){
            if(ODD==-1) ODD = i;
            else{
                cout << "NO SOLUTION" << endl;
                return 0;
            }
        }
    }
    string out(n,ODD+'A');
    int index = 0;
    for(int i = 0;i<26;i++){
        for(int j = 0;j<M[i]/2;j++){
            out[index] = i+'A';
            out[n-1-index] = i+'A';
            index++;
        }
    }
    cout << out << endl;
    return 0;
}
