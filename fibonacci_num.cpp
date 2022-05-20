#include <iostream>
using namespace std;

void fib(int n){
    int t1 = 0, t2 = 1, next = 0;
    for (int i = 1; i <= n; ++i) {

        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        
        cout << next << ", ";
    }
}
int main() {
    int n;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "\nFibonacci Series: ";

    fib(n);
    cout << "\n\n";
    return 0;
}