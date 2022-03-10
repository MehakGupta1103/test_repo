#include<bits/stdc++.h>
// #define int long long
using namespace std;


const int N = 1e5+10;
vector<int> Primes(N+1, 1); // initially assume all are primes

vector<int> SemiPrimes(N+1,0);

//for lowest prime and highest prime of a given no.
vector<int> lp(N, 0);
vector<int> hp(N, 0);

void is_prime()          
{
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
}
map<int, int> prime_factors(int n){
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
    return PrimeFactors;
}
bool is_semiprime(int n){
    if(n<=5) return false;
    // cout << n << " <this is n" << endl;
    map<int,int> prf = prime_factors(n);
    // cout << prf.size() <<"@@@@@@@@@@@@@@@"<< endl;
    int temp = 0;
    if(prf.size()==2){
        for(auto &it: prf)
        {
            temp += it.second;
        }
    }
    if(temp==2) return true;
    return false;
}



int32_t main(){
    is_prime();

    int t; cin >> t;
    while(t--){
        int a = 1;
        int num; cin >> num;
        if(num <= 11){
            cout << "NO" << endl;
        }
        else if(num==12){
            cout << "YES" << endl;
        }
        else{
            for(int i = 6; i < num; i++){
                if( is_semiprime(i) && is_semiprime(num-i)){
                    cout << "YES" << endl;
                    a = 0;
                    break;
                }
            }
        }
        if(a) cout << "NO" << endl;
    }
    return 0;
}