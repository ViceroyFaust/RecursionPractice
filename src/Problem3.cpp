#include<iostream>

/*
1. What's the simplest possible input? This is the base case
    partition(0, 0) = 1
    if n = 0, then output is always 1
    if m = 0, then 0
2. Play around with examples/experiment
3. Relate hard cases to easy cases
    count_partitions(n, m - 1) is subset of count_partitions(n, m)
    count_partitions(n, m) = count_partitions(n - m, m) + count_partitions(n, m - 1)
4. Generalize the pattern


5. Write code by combining a recursive pattern with the base case

*/


// Write a function that counts the number of ways you can partition n objects using parts up to m (assuming m >= 0)
int count_partitions(int n, int m) {
    if (n == 0)
        return 1;
    if (m == 0 || n < 0)
        return 0;
    return count_partitions(n - m, m) + count_partitions(n, m - 1);

}

int main() {
    std::cout << "Partitions\nn: ";
    int n, m;
    std::cin >> n;
    std::cout << "m: ";
    std::cin >> m;
    std::cout << "Partitions:  " << count_partitions(n, m) << std::endl;
    return 0;
}