#include <iostream>
using namespace std;

int arr[20];
int n;

void input() {
    while (true) {
        cout << "Input Maximum Length: ";
        cin >> n;

        if (n <= 20) {
            break;
        } else {
            cout << "n is bigger than 20\n";
        }
    }

    cout << "\n=========================\n";
    cout << "Enter Elements of Array\n";
    cout << "=========================\n";

    for (int i = 0; i < n; i++) {
        cout << "Data " << i + 1 << " : ";
        cin >> arr[i];
        cout << endl;
    }
}

// sorting loop logic
void bubleSortAlgorithm() {
    int pass = 1;  // Initialize pass
    do {
        for (int j = 0; j < n - pass; j++) {  // Fixed loop condition
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];  // Swap elements
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
        pass = pass + 1;  // Increment pass
    } while (pass <= n - 1);  // Corrected while condition
}

void display() {
    cout << "\n=================\n";
    cout << "Sorted Array\n";
    cout << "=================\n";

    for (int i = 0; i < n; i++) {
        cout << "Data " << i + 1 << " : " << arr[i] << endl;
    }
}

int main() {
    input();
    bubleSortAlgorithm();
    display();
    return 0;
}
