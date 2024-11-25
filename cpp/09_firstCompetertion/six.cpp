#include <iostream>
#include <vector>
#include <algorithm>  // For std::sort

using namespace std;

int main() {
    // Declare a vector of numbers (you can change the numbers)
    vector<int> numbers = {5,10,15,55,60,7};

    sort(numbers.begin(), numbers.end());

    for(int num : numbers){
        cout << num << " "  ;
    }

    return 0;
}