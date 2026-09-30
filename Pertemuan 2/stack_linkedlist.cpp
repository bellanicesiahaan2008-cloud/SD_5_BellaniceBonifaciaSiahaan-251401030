#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system ("cls");
    Node* top = NULL;
    int input;

    // push -> tambah di depan
    while (cin >> input) {
        Node* baru = new Node;
        baru->data = input;
        baru->next = top;
        top = baru;
    }

    // pop -> ambil dari depan sampai kosong
    while (top != NULL) {
        cout << top->data << " ";
        Node* hapus = top;
        top = top->next;
        delete hapus;
    }

    cout << endl;
    return 0;
}