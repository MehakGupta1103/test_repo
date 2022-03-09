#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int arr[N+1];
        iota(arr+1,arr+N+1,1); 
        int sum = 1;
        while(next_permutation(arr+1,arr+N+1))
        {    
            int count=0;
            for(int j=1;j<N+1;j++)
            {    
                int x=arr[j];
                if(arr[x]!=j) break;
                else count++;
            }
            if(count==N)
            {
                sum++;
            }
        }
        cout << sum << endl;

    }
    return 0;
}