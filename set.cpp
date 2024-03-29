#include<iostream>
#include<set>


using namespace std;


int main()
{
    // Initialize set
    set<int> s;
 
    s.insert(1);
    s.insert(4);
    s.insert(2);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(3);
 
    // finding position of 6
    auto pos = s.find(3);
 
    // print element position if it is present in set
    if (pos != s.end())
        cout << "Element found at position : "
             << distance(s.begin(), pos) << endl;
    else
        cout << "Element not present in set";

    
    for(auto &it : s){
        cout << it << endl;
    }

    return 0;
}