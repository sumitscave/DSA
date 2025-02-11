#include <iostream>
#include <set>
#include <functional>

int main(){
    std::set<int> val;
    val.insert(1);
    val.insert(1);
    val.insert(1);
    val.insert(1);
    val.insert(2);
    val.insert(3);
    val.insert(3);
    val.insert(4);
    val.insert(4);
    val.insert(5);
        std::cout<<"Integers - "<<std::endl;

    for (auto& values : val)
    {
        std::cout << values << std::endl;
    }

    std::cout<<"Charcaters - "<<std::endl;
    std::set<char> val2;
    val2.insert('G');
    val2.insert('F');
    val2.insert('G');

    for(auto& values2:val2){
        std::cout<<values2<<std::endl;
    }

    std::cout<<"In descending order - "<<std::endl;

    std::set<int, std::greater<int>> s1;
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);
    s1.insert(50);

    for(auto& i:s1){
        std::cout<<i<<std::endl;
    }
}