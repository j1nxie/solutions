#include <iostream>
using namespace std;

struct car {
    int passengers;
    char name[10];
    struct car *link;
}; 

struct car* head = NULL;

// function to add a car at the beginning and continue to add cars after
void append() {
    struct car* temp;
    // type casting malloc to struct car
    temp = (struct car*)malloc(sizeof(struct car));

    cout << "enter car passengers: ";
    cin >> temp->passengers;
    cout << "enter car name: ";
    cin >> temp->name;

    temp->link = NULL;

    if (head==NULL) {
        head = temp;
    } else { 
       struct car* p;
       p = head;
       while (p->link != NULL)
       {
            p = p->link;
       }
       p->link = temp;
    }
}

// function to remove a car if the passengers value is 0
void remove_car() {
    struct car* temp;
    struct car* p;
    temp = head;

    while (temp != NULL) {
        if (temp->passengers == 0) {
            if (temp==head) {
                head = temp->link;
                temp = head;
            } else {
                p->link = temp->link;
                temp = p->link;
            }
        } else {
            p = temp;
            temp = temp->link;
        }
    }
}

// function to display the train
void display() {
    struct car* temp;
    temp = head;
    while (temp != NULL) {
        cout << "name: " << temp->name << ", passengers: " << temp->passengers << endl;
        temp = temp->link;
    }
}
// function to display the length of the train
void length() {
    struct car* temp;
    temp = head;
    int count = 0;

    while (temp != NULL) {
        count++;
        temp = temp->link;
    }
    printf("The length of the train is %d", count);
}

// main
int main() {
    int choice;
    cout << "0 - escape, 1 - add car, 2 - display train, 3 - display length: ";
    cin >> choice;
    while (choice != 0) {
        if (choice==1) {
            remove_car();
            append();
        }

        if (choice==2) {
            remove_car();
            display();
        }

        if (choice==3) {
            remove_car();
            length();
        }

        cout << "0 - escape, 1 - add car, 2 - display train, 3 - display length: ";
        cin >> choice;
    }

    return 0;
}
