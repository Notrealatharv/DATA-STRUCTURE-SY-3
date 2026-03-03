#include<iostream>
using namespace std;

#define M 7

class HashTable {
    int table[M];

public:
    HashTable() {
        for(int i = 0; i < M; i++)
            table[i] = -1;
    }

    int hashFunction(int k) {
        return k % M;
    }

    void insert(int k) {
        int index = hashFunction(k);
        while(table[index] != -1) {
            index = (index + 1) % M;
        }
        table[index] = k;
        cout << "Key " << k << " inserted at index " << index << endl;
    }

    void display() {
        cout << "\nHash Table:\n";
        for(int i = 0; i < M; i++) {
            cout << i << " --> " << table[i] << endl;
        }
    }
};

int main() {
    HashTable h;
    int n, key;

    cout << "Enter number of keys: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Enter key: ";
        cin >> key;
        h.insert(key);
    }

    h.display();

    return 0;
}