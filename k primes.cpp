#include<bits/stdc++.h>
#define int long long
using namespace std;


const int N = 1e5+10;
vector<int> Primes(N+1, 1); // initially assume all are primes



//for lowest prime and highest prime of a given no.
vector<int> lp(N, 0);
vector<int> hp(N, 0);


//to store multiples -- > same logic
vector<set<int>> multiples(N);

void is_prime()          
{
    cout << " chala one " << endl;
     //----. precomputation   --> primes & lp & hp
    Primes[0] = Primes[1] = 0;
    for(int i = 2; i < N; i++)
    {
        if(Primes[i]==1)
        {             

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
cout << "chala toeo " << endl;
    //prime factorisation of a no --> log(n)
    for(int i = 2; i < 200; i++){
        int temp = i;
        set<int> primeFactors;
        while(i>1)
        {
            int pf = hp[i];
            while(i%pf==0)
            {
                primeFactors.insert(pf);
                i /= pf;
            }
        } 
        multiples[temp] = primeFactors;
        for(auto &it: primeFactors)
    {
        cout << it << " " ;
    }
    cout << endl;
    }
    
}

int32_t main(){
    cout << "chala 3 \n";
    is_prime();
    

    return 0;
}