#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+10;
vector<int> Primes(N+1, 1);
vector<int> lp(N,0), hp(N,0);
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
}

int main(){

    is_prime();
    // isPrime[0] = isPrime[1] = false;
    // for(int i = 2; i<N; ++i){
    //     lp[i] = hp[i] = i;
    //     if(isPrime[i] == true){
    //         for(int j = 2*i; j<N; j+=i){
    //             isPrime[j] = false;
    //             hp[j] = i;
    //             if(lp[j] == 0){
    //                 lp[j] = i;
    //             }
    //         }
    //     }
    // }
    

    int num;
    cin>>num;
    vector<int> prime_factors;
    while(num>1){
        int prime_factor = hp[num];
        while(num% prime_factor == 0){
            cout << prime_factor << endl;
              prime_factors.push_back(prime_factor);
              cout<<prime_factor<<"@"<<"\n";
            num/=prime_factor;
          
        }
    }
    // for(int i = 0; i<prime_factors.size(); ++i){
    //     cout<<prime_factors[i]<<" ";
    // }
   // for(int i = 1; i<100; ++i){
     //   cout<<isPrime[i]<<"\n";
    //}
    for(auto &it: prime_factors){
        cout << it << endl;
    }
}