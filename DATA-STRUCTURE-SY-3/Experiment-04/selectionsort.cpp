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
//selection 
for(i=0;i<n;i++){
    int minindex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minindex]){
            minindex=j;
        }
    }
    //swap
    int temp=arr[i];
    arr[i]=arr[minindex];
    arr[minindex]=temp;
}

//output result
cout<<"SORTED ARRAY : ";
for (i=0;i<n;i++){
cout<<arr[i]<<" ";
}

}