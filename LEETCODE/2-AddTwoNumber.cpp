#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

class solution {
public:
    Node *addtwonumber(Node *list1, Node *list2) {

        Node *ans = NULL;
        Node *temp = ans;
        int p = 0;

        while(list1 != NULL && list2 != NULL) {

            int c = (p + list1->data + list2->data) % 10;

            if(ans == NULL) {
                ans = new Node(c);
                temp = ans;
            }
            else {
                temp->next = new Node(c);
                temp = temp->next;
            }

            p = (p + list1->data + list2->data) / 10;

            list1 = list1->next;
            list2 = list2->next;
        }

        while(list1 != NULL) {

            int c = (p + list1->data) % 10;

            if(ans == NULL) {
                ans = new Node(c);
                temp = ans;
            }
            else {
                temp->next = new Node(c);
                temp = temp->next;
            }

            p = (p + list1->data) / 10;

            list1 = list1->next;
        }

        while(list2 != NULL) {

            int c = (p + list2->data) % 10;

            if(ans == NULL) {
                ans = new Node(c);
                temp = ans;
            }
            else {
                temp->next = new Node(c);
                temp = temp->next;
            }

            p = (p + list2->data) / 10;

            list2 = list2->next;
        }

        if(p != 0) {
            temp->next = new Node(p);
        }

        return ans;
    }
};

int main() {

    int n1, n2;
    cin >> n1 >> n2;

    Node *list1 = NULL;
    Node *list2 = NULL;

    Node *temp = NULL;
    Node *temp2 = NULL;

    // Create first linked list
    for(int i = 0; i < n1; i++) {

        int x;
        cin >> x;

        if(list1 == NULL) {
            list1 = new Node(x);
            temp = list1;
        }
        else {
            temp->next = new Node(x);
            temp = temp->next;
        }
    }

    // Create second linked list
    for(int i = 0; i < n2; i++) {

        int x;
        cin >> x;

        if(list2 == NULL) {
            list2 = new Node(x);
            temp2 = list2;
        }
        else {
            temp2->next = new Node(x);
            temp2 = temp2->next;
        }
    }

    // Add two numbers
    solution obj;

    Node *ans = obj.addtwonumber(list1, list2);

    // Print answer
    while(ans != NULL) {
        cout << ans->data << " ";
        ans = ans->next;
    }

    return 0;
}