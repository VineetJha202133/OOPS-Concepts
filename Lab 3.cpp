/*Write a function power () which raise a number m to a power n. The function takes double value of m
and integer value of n and returns the result. Use a default value of n is 2 to make the function to calculate
squares when the arguments is omitted.*/

#include <iostream>
using namespace std;

double power(double m, int n=2)
{
    for(int i=1; i<n; i++){
        m*=m;
    }
    return m;
}

int main()
{
    int n;
    double m, res;
    cout << "Enter the number to be raised: ";
    cin >> m;
    cout << "Enter the power to which number to be raised: ";
    cin >> n;
    res = power(m, n);
    cout << m << " raise to the power " << n << " is " << res;
}
