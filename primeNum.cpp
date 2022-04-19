#include <iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==0 || n==1)
    {
        return false;
    }
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    for(int i=0; i<n; i++)
    {
        if(isPrime(i))
        {
            cout << "Prime No.: " << i << endl;;
        }
    }
    cout << endl;
}



// int main()
// {
//     int n,m=0,flag=0;
//     cin >> n;

//     m = n/2;

//     for(int i=2; i<=m; i++)
//     {
//         if(n%i==0)
//         {
//             cout << "Not a Prime No." << ": " << n << endl;
//             flag = 1;
//             break;
//         }
//     }
//     if(flag==0)
//     {
//         cout << "Prime No." << ": " << n << endl;
//     }
// }


// Primalty Check (TC = O(n))
// int main()
// {
//     int n;
//     cin >> n;

//     int count = 0;

//     for(int i=2; i<=n; i++)
//     {
//         if(n%i==0)
//         {
//             count++;
//         }
//     }
//     cout << "Factors = " << count+1 << endl;  // +1 is for 1 because 1 is a factor of ever number
    

//     if(count==1)
//     {
//         cout << "It is a Prime Number!";
//     }
//     else
//     {
//         cout << "Not a Prime Number!";
//     }
// }
