#include <iostream>
#include <string>

const int CAPACITY = 1000;

struct _Stack {
    std::string data[CAPACITY];
    int top;
};

typedef struct _Stack Stack;

bool is_empty(Stack st) {
    return (st.top < 0);
}

bool is_full(Stack st) {
    return ((st.top + 1) > CAPACITY);
}

int size(Stack st) {
    return (st.top + 1);
}

void push(Stack *st, std::string _val) {
     if (is_full(*st)) {
         std::cout << "stack is full!" << std::endl;
     } else {
         st->top++;
         st->data[st->top] = _val;
     }
}

void pop(Stack *st) {
    if (is_empty(*st)) {
        std::cout << "stack empty!" << std::endl;
    } else {
        st->top--;
    }
}

void display(Stack *st) {
    if (is_empty(*st)) {
        std::cout << "stack empty!" << std::endl;
    } else {
        for (int i = 0; i < st->top + 1; i++) {
            std::cout << st->data[i] << std::endl;
        }
    }
}

void undo(Stack *_undo, Stack *_redo) {
    push(_redo, _undo->data[_undo->top]);
    pop(_undo);
}

void redo(Stack *_undo, Stack *_redo) {
    push(_undo, _redo->data[_redo->top]);
    pop(_redo);
}

int main() {
    Stack _undo = {
        .data = { "" },
        .top = -1,
    };

    Stack _redo = {
        .data = { "" },
        .top = -1,
    };

    {
        int count;
        std::cout << "numbers of elements in redo initialization: \n";
        std::cin >> count;

        std::cout << "initialize redo: ";

        for (int i = 0; i < count; i++) {
            std::string value;
            std::getline(std::cin, value);
            push(&_redo, value);
        }
    }

    {
        int count;
        std::cout << "numbers of elements in undo initialization: \n";
        std::cin >> count;

        std::cout << "initialize undo: ";

        for (int i = 0; i < count; i++) {
            std::string value;
            std::getline(std::cin, value);
            push(&_undo, value);
        }
    }

    int choice;
    std::cout << "0 - quit, 1 - display, 2 - undo, 3 - redo: ";
    std::cin >> choice; 
    while (choice != 0) {
        if (choice == 1) {
            int disp_choice;
            std::cout << "0 - go back, 1 - undo, 2 - redo: ";
            std::cin >> disp_choice;
            
            while (disp_choice != 0) {
                if (disp_choice == 1) {
                    display(&_undo);
                } else {
                    display(&_redo);
                }
                std::cout << "0 - go back, 1 - undo, 2 - redo: ";
                std::cin >> disp_choice;
            }
        }

        if (choice == 2) {
            undo(&_undo, &_redo);
            std::cout << "undo successful!" << std::endl;
        }

        if (choice == 3) {
            redo(&_undo, &_redo);
            std::cout << "redo successful!" << std::endl;
        }

        std::cout << "0 - quit, 1 - display , 2 - undo, 3 - redo: ";
        std::cin >> choice;
    }
    return 0;
}
