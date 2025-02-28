#include <bits/stdc++.h>
using namespace std;

// void printName(int n){    
//     if(n == 0){
//         return;
//     }
//     cout << "Sumit Mukharjee" << endl;
//     // n++;
//     printName(n-1);
// }

void anotherName(int i, int n){

    if(i>n){
        return;
    }

    cout<<"Sumit Mukharjee"<<endl;

    anotherName(i+1, n);

}
int main()
{
    // printName(5);
    anotherName(1, 10);
    return 0;
}