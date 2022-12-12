#include <iostream>
#include <stdio.h>


using namespace std;



int itIsPerfect(int n)
{
    int i, soma = 0;

    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            soma += i;
    }
    if(soma == n)
        return 1;// perfect
    else
        return 0;// not perfect
}

void divisors(int n)
{
    int i;

  cout << n << ", ";

}

int main() {
    int n, perfect;

    cout << "Enter n: ";
    cin >> n;
    cout << "All perfect numbers in the range 1 and "<< n << " are: " << endl;

    for(int i = 1; i < n; i++)
    {
        perfect = itIsPerfect(i);
        if(perfect)
        {
            divisors(i);
        }

    }

    return 0;
}