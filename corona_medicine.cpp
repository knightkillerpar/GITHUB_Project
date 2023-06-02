#include<iostream>

using std::cin;
using std::cout;

int main()
{
    int n , k , p , q;
    cin >> n;
    cin >> k;
    cin >> p;
    cin >> q;
    int residuum_of_shekarestan = n-k;
    int residuum_of_namakestan = p-q;
    if(residuum_of_shekarestan > residuum_of_namakestan)
    {
        cout << "Shekarestan";
    }
    else if(residuum_of_namakestan > residuum_of_shekarestan)
    {
        cout << "Namakestan";
    }
    else
    {
        cout << "Equal";
    }
}
