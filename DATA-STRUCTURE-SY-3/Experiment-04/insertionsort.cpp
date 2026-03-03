#include<iostream>
using namespace std;

int main(){
    int n, key;
    cout<<"ENTER NUMBER OF ARRAY ELEMENT : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER ELEMENT NO "<<i+1<<": ";
        cin>>arr[i];
    }

    // insertion sort 
    for(int i=0; i<n;i++){
        key = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;   
    }
       for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
