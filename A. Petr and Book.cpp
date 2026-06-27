#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    // Array to store pages read from Monday (index 0) to Sunday (index 6)
    vector<int> pagesPerDay(7);
    for (int i = 0; i < 7; i++) {
        cin >> pagesPerDay[i];
    }

    int dayIndex = 0;

    // Loop until all pages are read
    while (n > 0) {
        n -= pagesPerDay[dayIndex]; // Subtract pages read on the current day

        // If the book is finished, stop the loop
        if (n <= 0) {
            break;
        }

        // Move to the next day, wrapping around back to Monday (0) after Sunday (6)
        dayIndex = (dayIndex + 1) % 7;
    }

    // Output the day number (Converting 0-6 index to 1-7 natural day format)
    cout << (dayIndex + 1) << "\n";

    return 0;
}