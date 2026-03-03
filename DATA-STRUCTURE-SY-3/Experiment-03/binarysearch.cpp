// rule : the array must be sorted 
#include <iostream>
using namespace std;

int main(){
    int n,key;
    cout<<"ENTER NUMBER OF ELEMENTS:";
    cin>>n;
    cout<<"ENTER SORTED ELEMENTS"<<endl;

    int arr[n];
    for (int i=0;i<n;i++){
        cout<<"ENTER ELEMENT NO "<<1+i<<":";
        cin>>arr[i];
    }

    cout<<"ENTER ELEMENT TO SEARCH:";
    cin>>key;

    int low=0,high=n-1,mid;
    
    while(low<=high){
    mid=(low+high)/2;
    if (arr[mid]==key){
        cout<<"VALUE FOUND AT:"<<mid;
        return 0;
    }
    else if(arr[mid]<key){
        low=mid+1;
    }
    else if(arr[mid]>key){
        high=mid-1;
    }
}
}
