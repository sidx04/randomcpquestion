#include <iostream>
using namespace std;

int main() {
	int t, n ,m, k;
    cin >> t;
    while (t--){
        cin >> n >> m >> k;
        if ((m*k)>=n){
            cout << "yes" << endl;
        }
        else{
            cout << "no" << endl;
        }
    }
	return 0;
}
