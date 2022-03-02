#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    while (i<=n){
        int j=1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout << ch << " ";
            j+=1;
        }
        cout << endl;
        i+=1;
    }
}


/* output:
n=4
A A A A
B B B B
C C C C
D D D D
*/
