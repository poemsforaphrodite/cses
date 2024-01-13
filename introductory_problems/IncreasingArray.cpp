#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    long long moves = 0;  // To store the total number of moves
    long long prev;
    
    for (int i = 0; i < n; i++) {
        long long current;
        cin >> current;
 
        if (i > 0) {
            // Check if the current element is smaller than the previous element
            if (current < prev) {
                // Calculate the number of moves required and add it to the total moves
                moves += (prev - current);
                // Update the current element to make it equal to or larger than the previous element
                current = prev;
            }
        }
 
        prev = current;  // Update the previous element for the next iteration
    }
 
    cout << moves << endl;
    return 0;
}