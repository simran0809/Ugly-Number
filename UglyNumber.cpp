// ugly number is the +ve integer which does not have prime factor other than 2 ,3 and 5

// ugly number we look at quotient and given number is divided 2 or 3 or 5 it is divided till we get 1 as quotient at end .

#include<iostream>
using namespace std;


class Solution{
public:
    bool isUgly(int n) {
        if (n <= 0) return false;  // Ugly numbers are positive
        
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        return (n == 1);  // Return true if n is reduced to 1, otherwise false
    }
};

// if public function then no condition needed in int main no int main required ;
// if int main we written call function out in  int main  and write all condition the function bool we made outside 

int main() {
    Solution sol; //classname variablename initialise.
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (sol.isUgly(num)){ //class .function name call
        cout << num << " is an ugly number." << endl;
    }
    else{
        cout << num << " is not an ugly number." << endl;
    }
    return 0;
}

