#include <iostream>

int main() { return 0; }

float f2() { return 10; }

int f3() {
    for(int i = 0; i < 54; ++i) { std::cout << i << std::endl;}
    int temp = 10;
    while (temp != 10) { temp = rand() % 10; }
}
