#include<iostream>
using namespace std;

int main(){
    int arr[] = {12, 34, 4, 2, 13 , -16 , -62};
    int size = 7;
    int max_index = 0;
    int min_index = 0;
    int max = arr[0];
    int min = arr[0];
    for(int i = 1 ; i<size ; i++){
        if (arr[i] >max ){
            max = arr[i];
            max_index = i;
        }
        if (arr[i] < min){
            min = arr[i];
            min_index = i;
        }
    }
    cout << "Largest element is: " << max << endl;
    cout << "Smallest element is: " << min << endl;
    cout << "Largest element index is: " << max_index << endl;
    cout << "Smallest element index is: " << min_index << endl;
    return 0;
}