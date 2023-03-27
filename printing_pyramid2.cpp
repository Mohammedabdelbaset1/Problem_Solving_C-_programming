#include<iostream>
/*
Draw the following shape depanding on the value of n:number of rows.

* 
* *
* * *
* * * *
* * * * *
*/

using namespace std;

int main()
{
    int n={0};
    cout<<"enter number of rows n: ";
    //cout<<INT_MAX;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j<=i)
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }


    return 0;
}