// write a program that skips brewing green tea if user dislikse .
//  use a continue statement to skip over green tea but bew other types of tea in list

#include <bits/stdc++.h>
using namespace std;
int main()
{

    string teatypes[3] = {"Green Tea", "Black tea", "Lemon tea"};
    for (int i = 0; i < 3; i++)
    {
        if (teatypes[i] == "Green Tea")
        {
            cout<<"Skipping the "<<teatypes[i]<<endl;
            continue;
        }
        cout << " Brewing " << teatypes[i] << endl;
    }
    return 0;
}