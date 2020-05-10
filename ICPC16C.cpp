#include <iostream>
#include <iterator>

using namespace std;

int main()
{
    int rep;
    cin >> rep;
    while(rep--){
        unsigned long long int inp, digSum=0;
        cin >> inp;
        while(inp != 0){
            digSum += inp%10;
            inp /= 10;
        }
        std::cout << (digSum%9)+1 << std::endl;
    }
    return 0;
}
