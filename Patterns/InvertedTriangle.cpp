#include<iostream>
using namespace std;

int main(){
    int num = 1;
    int n=4;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<i ; j++){
            cout<<"  ";
        }
        for(int j = i ; j<=n ; j++){
            cout << i <<" ";
        }
        cout<<endl;
    }
}
