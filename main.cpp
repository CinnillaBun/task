#include <iostream>

int f(int n) {
    if ( n == 1 || n == 2) return (n - 1); 
    return f(n-1) + f(n-2); 
}

int main()
{
    std::cout << "Hello, world!" << std::endl;
    std::cout <<f(10)<<std::endl;  
    return 0;
}
