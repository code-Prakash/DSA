#include<iostream>
using namespace std;

int main(){
    int n = 5;
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= n-i ; j++){
            cout<<"  ";
        }
        cout<<"* ";
        if(i != 1){
            for( int j = 1 ; j <= (2*(i-1)-1) ; j++){
            cout <<"  ";
        }
        cout << "* ";

        }
        cout<<endl;
    }
    for(int i = 1 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout <<"  ";
        }
        cout<<"* ";
        if(i != n-1){
            for( int j = 1 ; j <= (2*(n-i-1)-1) ; j++){
                cout <<"  ";
            }
            cout << "* ";
        }
        cout<<endl;

    }
}