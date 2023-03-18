#include <iostream>
using namespace std;

int main() {
	int n,x,y;
	cin >> n;
	while(n--)
	{
	    cin >> x >> y;
	    if((x+y)>6)
	    {
	        cout << "yes \n";
	    }
	    else
	    {
	        cout << "no \n";
	    }
	}
	return 0;
}