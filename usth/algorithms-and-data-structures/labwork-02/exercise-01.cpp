#include <iostream>
using namespace std;

struct poly {
    float constant;
    int degree;        
};

int main() {
    int terms;
    cout << "gib number of terms: ";
    cin >> terms;

    struct poly p[terms];
    for (int i = 0; i < terms; i++) {
        cout << "gib constant of term " << i + 1 << ": ";
        cin >> p[i].constant;
        cout << "gib degree of term " << i + 1 << ": ";
        cin >> p[i].degree;
    }

    // choices to add/remove terms/show polynomial/calculate value
    int choice;
    cout << "0 - escape, 1 - add term, 2 - remove term, 3 - show the polynomial, 4 - calculate the value of the polynomial: ";
    cin >> choice;

    while (choice != 0) {
        // to add new terms
        if (choice == 1) {
            terms++;
            cout << "Enter the constant value of term " << terms << ": ";
            cin >> p[terms - 1].constant;
            cout << "Enter the degree of term " << terms << ": ";
            cin >> p[terms - 1].degree;
            // if the degree of the new term already exists, add the constant values
            for (int i = 0; i < terms - 1; i++) {
                if (p[terms - 1].degree == p[i].degree) {
                    p[i].constant = p[i].constant + p[terms - 1].constant;
                    terms--;
                }
            }
        }

        // to remove terms
        if (choice == 2)
        {
            int term;
            cout << "Enter the term number to be removed: ";
            cin >> term;

            for (int i = term - 1; i < terms - 1; i++) {
                p[i].constant = p[i+1].constant;
                p[i].degree = p[i+1].degree;
            }
            terms--;
        }

        // to display the polynomial
        if (choice == 3)
        {
            // sorting the terms in descending order of degree
            for (int i = 0; i < terms; i++) {
                for (int j = 0;j < terms - i - 1; j++) {
                    if (p[j].degree < p[j + 1].degree) {
                        struct poly temp = p[j];
                        p[j] = p[j+1];
                        p[j+1] = temp;
                    }
                }
            }
            // displaying the polynomial
            cout << "The polynomial is: ";
            for (int i = 0;i < terms; i++) {
                // if the constant value is 0, don't display it
                if (p[i].constant == 0) {
                    continue;
                }
                // if the degree is 0, don't display the x
                if (p[i].degree==0) {
                    cout << p[i].constant;
                }
                // if the constant value is an interger, don't display the decimal point
                if (p[i].constant == (int)p[i].constant) {
                    int num = p[i].constant;
                    cout << num << " x^" << p[i].degree;
                } else {
                    cout << p[i].constant << " x^" << p[i].degree;
                }
                if (i != terms-1 && p[i+1].constant>0) {
                    cout << " + ";
                }
            }
        }

        // to calculate the exact value of polynomial
        if (choice == 4) {
            float x;
            cout << "Enter the value of x: ";
            cin >> x;

            float y = 0;
            for (int i = 0; i < terms; i++) {
                float temp = 1;
                for (int j = 0; j < p[i].degree; j++)
                {
                    temp = temp*x;
                }
                y = y + p[i].constant*temp;
            }
            cout << "value of polynomial: " << y;
        }
        cout << endl;
        cout << "Do you want to do another action: ";
        cin >> choice;
    }

    return 0;
}
