#include <iostream>

/*
1. What's the simplest possible input? This is the base case
    sum(0) = 0
2. Play around with examples/experiment
3. Relate hard cases to easy cases
    Could sum(4) be solved with sum(3)?
4. Generalize the pattern
    n = k and n = k - 1
    (1 + 2 + ... + k) and (1 + 2 + ... + (k - 1))
5. Write code by combining a recursive pattern with the base case
    sum(n) = {0 if n = 0; sum(n-1) + n}
*/


// Write a recursive function that given an input n sums all nonnegative integers up to n
int sum(int n) {
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main() {
    std::cout << "Recursive Sum\nNumber: ";
    int n;
    std::cin >> n;
    std::cout << "Sum: " << sum(n) << std::endl;
    return 0;
}