#include <iostream>

using namespace std;

int main() {

    int t;

    cin>>t;

    while(t--){

        int n,count=0;

        cin>>n;

        int input[n];

        for(int i=0;i<n;i++){

        cin>>input[i];}

    for(int i=0;i<n;i++){

    if(1000<=input[i]){

        count++;

    }}

    cout<<count<<endl;

	// your code goes here	

}}
