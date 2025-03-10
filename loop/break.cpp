#include <bits/stdc++.h>
using namespace std;
int main()
{
    // for coming out of a statement

    string response;

    while(true){
cout<<"Do you want more tea? (type 'stop' to exit): ";
getline(cin, response);
if(response == "stop"){
    //exit the loop;
    break;
}
cout<<"Here is your another cup of tea ";
    }

    cout<<"No more tea will be served "<<endl;


    return 0;
}