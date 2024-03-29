#include<iostream>
using namespace std;
int main()
{
    int n,i;
    cout << "enter your arrey value : ";
    cin >> n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cout << "enter your value a[" << i << "] : ";
        cin >> a[i];
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout << "value is even " << a[i] << endl;
        }
    }
    return 0;
}