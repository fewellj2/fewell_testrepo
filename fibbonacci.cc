#include<iostream>
#include<string>

int main() {
    int fibNum = 0;
    int term1 = 0;
    int term2 = 1;

    std::cout << "Which Fibonacci number do you want? ";
    std::cin >> fibNum;
    std::cout << "You want the " << fibNum << " Fibonacci number." << std::endl;

    for (int i = 0; i < fibNum; i++) {
        int tmp = term2;
        term2 = term1;
        term1 = tmp;
    }

    std::cout << "The " << fibNum << " in the Fibbonacci sequence is" << term2 << std::endl;
    std::cout << std::endl;
}