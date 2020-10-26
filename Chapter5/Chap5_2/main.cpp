//
//  main.cpp
//  Chap5_2
//
//  Created by 윤형찬 on 2020/10/26.
//

#include <iostream>

int main() {
    using namespace std;
    
    int x;
    cout<<"input your number" <<endl;
    cin >> x;
    
    if(x > 10)
    {
        cout << x << " is greater than 10" << endl;
        cout << "Test 1" << endl;
    }
    else
        cout << x << " not is greater than 10" << endl;
    
    
    return 0;
}
