#include<bits/stdc++.h>
using namespace std;

int main(){
    //brute force
    // --> devisiors 
    int sum = 0, count = 0;
    int n ; cin >> n;
    for(int i = 1; i <= n; i++){                     //! O(n)
        if(n%i==0)
        {
            cout << i << " ";
            count++;
            sum += i;
        }
    }
    cout << sum << " " << count << " ";
    cout << endl;



    // optamized brute force -- >                        what about the perfect sq nos.
    //1 24                                               1 36
    // 2 12                                              2 18
    // 3 8                                               3 12
    // 4 6 <-- after this the numbers are repeated       4 9 
    // 6 4                                               6 6  <-- the no will repeaat <-- clearly this is for sqr
    // 8 3                                               9 4  
    // 12 2                                              12 3 
    // 24 1                                              18 2  
                                                    //  36 1 
    sum = 0, count = 0;

    for(int i = 1; i*i <= n; i++)
    {
        if(n%i==0)
        {
            if(i!=(n/i) )
            {
                cout << i << " " << n/i << " ";
                count += 2;                             //! O(squt(n))
                sum += i;  sum += n/i;
            }
            else
            {
                cout << i << " " ;
                count++;
                sum += i;

            }
        }      
    }
    cout << sum << " " << count << " ";
    cout << endl;
    //store these in set for uniqueness

    return 0;
}
