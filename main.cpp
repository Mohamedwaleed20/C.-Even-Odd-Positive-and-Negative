#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int n ;
    cin >> n ;
    int Even = 0 ;
        int Odd = 0 ;
        int Positive = 0 ;
        int Negative = 0 ;
    while (n--)
    {
        int k ;
        cin >> k ;

            if (k%2==0)
            {
                Even ++;
            }
            else
            {
                Odd ++;
            }
            if (k>0)
            {
                Positive ++;
            }
            else if (k<0)
            {
                Negative ++;
            }


    }
        cout << "Even: " << Even << endl ;
        cout << "Odd: " << Odd << endl ;
        cout << "Positive: " << Positive << endl ;
        cout << "Negative: " << Negative << endl ;

    return 0;
}
