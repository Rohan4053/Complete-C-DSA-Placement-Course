#include<iostream>
using namespace std;


/*
1 
2 3
4 5 6 
7 8 9 10
*/

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int i=1,count=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}