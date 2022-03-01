#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int i=1;
    
    int count=1;
    while(i<=n){
        int j=1;
        int x=i;
        while(j<=i){
            cout << x;
            j+=1;
            x+=1;
            }
        cout << endl;
        i+=1;
            
        
    }

    return 0;
}

/* output:
n=4
1 
2 3 
3 4 5 
4 5 6 7 
*/
