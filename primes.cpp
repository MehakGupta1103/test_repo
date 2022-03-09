#include<bits/stdc++.h>
using namespace std;

int main(){
    is_prime();
    //brute force --> O(n)
    bool isPrime = true;
    
    int n;
    cin >> n;
    int temp = n;
    //every no divisible by 1 and n
    if(n==1)
    {
        cout << "none" << endl;
        return 0;
    }
    // O(sqrt(n))
    for(int i = 2; i*i <= n; i++)
    {
        if(n%i==0)
        {
            isPrime = false;
        }
    }
    cout << isPrime << endl;

/** --------------------------- kisi bhi no ka sabse chota devisior (excluding 1) is always one -------------**/
    vector<int> primefactors;
    for(int i = 2; i<=n; i++)
    {
        while(n%i==0)
        {
            primefactors.push_back(i);                //!O(n)
            n /= i;
        }
    }
    for(auto &it: primefactors)
    {
        cout << it << " ye lo " << endl;
    }

/**-----------------given a composite no || there always exist a prime no less then sqart n ----**/
//ptimising -- > sqrt(n)
// dikkat --> if a single prime is left in n 
    n = temp;
    vector<int> primefactors2;
    for(int i = 2; i*i<=n; i++)                        //24 = 2*2*2*3 --> 3 bach jaega n mega
    {                                                  //36 = 2*2*3*3  --> 9 hogo to i=3 me 3*3 = 9 chal jaega
        while(n%i==0)
        {
            primefactors2.push_back(i);                //!O(sqrt(n))
            n /= i;
        }
    }
    if(n>1)
    {
        primefactors2.push_back(n);
    }
    for(auto &it: primefactors2)
    {
        cout << it << " jee baata lo " << endl;
    }


/**----------OPTIMIZED WAY - SEIVE ALGORITHEM ----------------**/

    return 0;
}

