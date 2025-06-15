#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

int main() {
    int n;
    cout << "Enter value: ";
    cin >> n;

    auto start = high_resolution_clock::now();

    for(int i = 0; i < n; i++) {
        cout << i << " ";
    }

    auto end = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(end - start);

    cout << "\nTime taken: " << duration.count() << " ms" << endl;
    return 0;
}

