#include<iostream>
using namespace std;

int main(){
    // int arr[10]={1,4,2,3,6,5,3,};
    int n,key;
    cout<<"enter number of elements:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER ARRAY ELEMENT"<<i+1<<":";
        cin>>arr[i];
    }
    cout<<"ENTER VALUE TO FIND: ";
    cin>>n;
    for(int i=0;i<10;i++){
        if (arr[i]==n){
            cout<<"ELEMENT FOUND AT INDEX:"<< i<<endl;
            return 0;
        }
    }
    cout<<"ELEMENT NOT FOUND"<<endl;
    return 0;
        

}


