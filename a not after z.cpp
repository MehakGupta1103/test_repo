#include <bits/stdc++.h>

using namespace std;

string ans(){
	string p, c;
	cin >> p >> c;
	int index = 0;
	int count = 0;
	int len = p.length();
	for(int i = 0; i < len; i++){

		if(p[i]<=c[index]){
            cout << p[i] << c[index] << endl;
			count++;
			index++;
		}
        cout << count << " count " << index << "index\n";
		if(count==c.length()) return "YES";
		if(index == c.length()) return "NO";
	}
	return "NO yo";
}

int main() {
	int num;
	cin >> num;
	while(num--){
		string lo = ans();
        cout << lo << endl;
	}
}
