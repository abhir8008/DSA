//BubbleSort


#include<iostream>
using namespace std;

int main()
{
    int arr[] = {5,1,4,2,3,20};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++) //number of passes
    // passes = n-1 takk // array start from 0 to n-1
    {
        bool flag= true;
        for(int j =0; j<n-1-i; j++) //n-1-i as we require the last element is already dont so no need to run the loop again and again
        {
            if( arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                flag = false; // swaping is present, iti s hapenning
            }
            
            
        }
        if ( flag == true) break;


    }

    for(int i =0 ; i<n ; i++)
        {
            cout<< arr[i]<< " ";
        }
        cout<<endl;


}