#include <iostream>
#include <string>

char customer[100];

struct Item {
    std::string id;
    int quantity;
};

void dequeue() {
    for (int i = 0; i < 100; i++) {
        customer[i] = customer[i+1];
    }
}

int main() {
    int n;
    std::cout << "number of items: ";
    std::cin >> n;

    Item items[n];
    
    for (int i = 0; i < n; i++) {
        std::string name; int quantity;

        std::cout << "enter name of item " << i+1 << ": ";
        std::getline(std::cin, name);
        items[i].id = name;

        std::cout << "enter quantity of item " << i+1 << ": ";
        std::cin >> items[i].quantity;
    }

    for (int i = 0; i < n; i++) {
        std::cout << i+1 << ". " << items[i].id << "\n";
    }

    int m;
    std::cout << "enter number of customers: ";
    std::cin >> m;

    for (int i = 0; i < m; i++) {
        int num, k;

        std::cout << "customer " << i+1 << " is buying!\n";

        std::cout << "Enter ID of item to buy: ";
        std::cin >> num;

        std::cout << "Enter quantity to buy: ";
        std::cin >> k;

        if (k > items[num-1].quantity) {
            std::cout << "not enough quantity!\n";
            std::cout << "Customer " << i+1 << " leaves the queue!\n";
            dequeue();
        } else {
            items[num-1].quantity -= k;
            std::cout << "Customer " << i+1 << " bought " << k << items[num-1].id;
            std::cout << "Customer " << i+1 << " leaves the queue!\n";
            dequeue();
        }
    }
    return 0;
}
