#include<bits/stdc++.h>
// #define int long long
using namespace std;


const int N = 1e5+10;
vector<int> Primes(N+1, 1); // initially assume all are primes



//for lowest prime and highest prime of a given no.
vector<int> lp(N, 0);
vector<int> hp(N, 0);


//to store multiples -- > same logic
vector<vector<int>> multiples(N);

void is_prime()          
{
     //----. precomputation   --> primes & lp & hp
    Primes[0] = Primes[1] = 0;
    for(int i = 2; i < N; i++)
    {
        if(Primes[i]==1)
        {                                                //! n log(log(n))

        //lp and hp for prime no is the no itself
        lp[i] = hp[i] = i;

            for(int j = 2*i; j < N; j += i)
            {
                Primes[j] = 0;

                // for lp and hp
                hp[j] = i;
                if(lp[j]==0)
                {
                    lp[j] = i;
                }
            }

        }
    }

    //to store only multiples
    for(int i = 2; i < N; i++)
    {                                   
        for(int j = i; j < N; j += i)
        {
            multiples[j].push_back(i);
        }

    }
    // for(auto &it: Primes)
    // {
    //     cout << it << " ";
    // }
}

int32_t main(){
    is_prime();

    //prime factorisation of a no --> log(n)
    int n; cin >> n;

    /**
    vector<int> primeFactors;
    while(n>1)
    {
        int pf = hp[n];
        while(n%pf==0)
        {
            primeFactors.push_back(pf);
            n /= pf;
        }
    }


    for(auto &it: primeFactors)
    {
        cout << it << " " ;
    }
    cout << endl;
    **/

    //store the count too
    map<int, int> PrimeFactors;
    while(n>1)
    {
        int pf = hp[n];
        while(n%pf==0)
        {
            PrimeFactors[pf]++;
            n /= pf;
        }
    }


    for(auto &it: PrimeFactors)
    {
        cout << it.first << " " << it.second << endl;;
    }
    cout << endl;

    return 0;
}