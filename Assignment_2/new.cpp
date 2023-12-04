#include <iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* head = NULL;

void insert(int x, int v) {
  Node* new_node = new Node();
  new_node->data = v;

  if (x == 0) {
    new_node->next = head;
    head = new_node;
  } else {
    Node* temp = head;
    while (temp->next != NULL) {
      temp = temp->next;
    }
    temp->next = new_node;
  }
}

void print() {
  Node* temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

int main() {
  int q;
  cin >> q;

  for (int i = 0; i < q; i++) {
    int x, v;
    cin >> x >> v;
    insert(x, v);
    print();
  }

  return 0;
}
