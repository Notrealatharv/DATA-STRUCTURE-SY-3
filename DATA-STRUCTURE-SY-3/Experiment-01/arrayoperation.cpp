#include<iostream>
using namespace std;

int main(){
    int n, choice, pos, value;
    
    cout<<"ENTER NUMBER OF ELEMENTS: ";
    cin>>n;
    
    int arr[100];
    int size = n;
    
    // Input array elements
    cout<<"\nENTER ARRAY ELEMENTS:\n";
    for(int i=0; i<n; i++){
        cout<<"ENTER ELEMENT "<<i+1<<": ";
        cin>>arr[i];
    }
    
    while(true){
        cout<<"\n--- ARRAY OPERATIONS MENU ---\n";
        cout<<"1. DISPLAY ARRAY\n";
        cout<<"2. INSERT ELEMENT\n";
        cout<<"3. DELETE ELEMENT\n";
        cout<<"4. SEARCH ELEMENT\n";
        cout<<"5. UPDATE ELEMENT\n";
        cout<<"6. EXIT\n";
        cout<<"ENTER YOUR CHOICE: ";
        cin>>choice;
        
        switch(choice){
            case 1:
                // Display Array
                cout<<"\nARRAY ELEMENTS: ";
                for(int i=0; i<size; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
                break;
                
            case 2:
                // Insert Element
                cout<<"\nENTER POSITION (0 TO "<<size<<"): ";
                cin>>pos;
                cout<<"ENTER VALUE TO INSERT: ";
                cin>>value;
                
                if(pos<0 || pos>size){
                    cout<<"INVALID POSITION!\n";
                }
                else{
                    for(int i=size; i>pos; i--){
                        arr[i] = arr[i-1];
                    }
                    arr[pos] = value;
                    size++;
                    cout<<"ELEMENT INSERTED SUCCESSFULLY!\n";
                }
                break;
                
            case 3:
                // Delete Element
                cout<<"\nENTER POSITION TO DELETE (0 TO "<<size-1<<"): ";
                cin>>pos;
                
                if(pos<0 || pos>=size){
                    cout<<"INVALID POSITION!\n";
                }
                else{
                    for(int i=pos; i<size-1; i++){
                        arr[i] = arr[i+1];
                    }
                    size--;
                    cout<<"ELEMENT DELETED SUCCESSFULLY!\n";
                }
                break;
                
            case 4:
                // Search Element
                cout<<"\nENTER VALUE TO SEARCH: ";
                cin>>value;
                
                int found;
                found = -1;
                for(int i=0; i<size; i++){
                    if(arr[i] == value){
                        found = i;
                        break;
                    }
                }
                
                if(found != -1){
                    cout<<"ELEMENT FOUND AT POSITION: "<<found<<endl;
                }
                else{
                    cout<<"ELEMENT NOT FOUND!\n";
                }
                break;
                
            case 5:
                // Update Element
                cout<<"\nENTER POSITION TO UPDATE (0 TO "<<size-1<<"): ";
                cin>>pos;
                
                if(pos<0 || pos>=size){
                    cout<<"INVALID POSITION!\n";
                }
                else{
                    cout<<"ENTER NEW VALUE: ";
                    cin>>value;
                    arr[pos] = value;
                    cout<<"ELEMENT UPDATED SUCCESSFULLY!\n";
                }
                break;
                
            case 6:
                cout<<"\nEXITING PROGRAM...\n";
                return 0;
                
            default:
                cout<<"\nINVALID CHOICE! TRY AGAIN.\n";
        }
    }
    
    return 0;
}