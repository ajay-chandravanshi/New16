#include <iostream>
using namespace std;
int fibo(int number)
{
    if(number<=1)
    {
        return number;
    }
    return fibo(number-1
    )+fibo(number-2);
}
int main()
{
    cout<<fibo(4);
}