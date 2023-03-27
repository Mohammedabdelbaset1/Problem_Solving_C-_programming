#include<iostream>
/*
    Draw the following shape depanding on the value of n:number of rows.
       *       
      * *
     * * *
    * * * *
   * * * * *
  * * * * * *
 * * * * * * * 
* * * * * * * *

*/
using namespace std;

int main()
{
    int n;
    cout<<"enter the number of rows n : ";
    cin>>n;
    if(n%2 == 0)
    {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n-1);j++)
        {
            if((j>= (n-(i-1))) && (j<= (n+(i-1))))
            {
                
                if((((i % 2 == 0) && (j % 2 == 0))) || (((i % 2 != 0) && (j % 2 != 0))))
                {
                    cout<<" ";
                }
                else
                {
                    cout<<"*";
                }
                
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    }
    else
    {
       for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(2*n-1);j++)
        {
            if((j>= (n-(i-1))) && (j<= (n+(i-1))))
            {
                
                if((((i % 2 == 0) && (j % 2 == 0))) || (((i % 2 != 0) && (j % 2 != 0))))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
                
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    } 
    }



    return 0;
}