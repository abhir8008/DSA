//BubbleSort


#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,1,4,2,3,3,200};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++) //number of passes // passes = n-1 takk // array start from 0 to n-1
    {
        for(int j =0; j<n-1-i; j++) //n-1-i as we require the last element is already dont so no need to run the loop again and again
        {
            if( arr[j] >  arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            
        // for(int i =0 ; i<n ; i++)
        // {
        //     cout<< arr[i];
        // }
        // cout<<endl;  

        }


    }

    for(int i =0 ; i<n ; i++)
        {
            cout<< arr[i]<< " ";
        }
        cout<<endl;


}