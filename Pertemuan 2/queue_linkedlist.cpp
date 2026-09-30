#include <iostream>
#include <cstdlib>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    system ("cls");
    Node* front = NULL;
    Node* rear = NULL;
    int input;

    //tambah di belakang
    while (cin >> input) {
        Node* baru = new Node;
        baru->data = input;
        baru->next = NULL;

        if (front == NULL) {
            front = rear = baru;
        } else {
            rear->next = baru;
            rear = baru;
        }
    }

    //ambil dari depan sampai kosong
    while (front != NULL) {
        cout << front->data << " ";
        Node* hapus = front;
        front = front->next;
        delete hapus;
    }

    cout << endl;
    return 0;
}