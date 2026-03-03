#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"ENTER NUMBER OF ELEMENTS:";
    cin>>n;
int arr[n];

for (i=0;i<n;i++){
cout<<"ENTER ELEMENT NO "<<i+1<<":";
cin>>arr[i];
}

//bubble sort 
for(int j=0;j<n;j++){
for(i=0;i<n;i++){
    int temp=0;
    if(arr[i]>arr[i+1]){
        temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}
}

//output result
cout<<"SORTED ARRAY : ";
for (i=0;i<n;i++){
cout<<arr[i]<<" ";
}
}