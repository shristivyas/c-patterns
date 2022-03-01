#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int x = n*n;
    
    int i=1;
    int j=1;
    
    while(i<=n){
        if (n<=x){
            while(j<=n){
                cout << j <<" ";
                j+=1;
                }
            cout << endl;
            n=n+3;
            i+=1;
            
        }
    }

    return 0;
}



/*output : 1 2 3
           4 5 6
           7 8 9 */
