#include <iostream>
#include <string>

using namespace std;

int main()
{
    // find out index of an array where the array size is 11
    // index number = (sum_of_ASCII_codes) Mod (array_size)
    // our array is:: { Bea, Tim, Leo, Sam, Mia, Zoe, Jan, Lou, Max, Ada, Ted }
    
    int x1, x2, x3; // for storing ASCII values
    x1 = 77, x2 = 105, x3 = 97; // // ASCII value
    int a = x1 + x2 + x3;
    int arraySize = 11; // array size
    
    cout << a % b << endl; // index that element of the array
    
    
    // find out all of the ASCII values inside of s string
    string name = "Jahangir";
    int sz = name.size();
    for(int i=0; i<sz; i++) {
        cout << name[i] << "=" << (int) name[i] << " ";
    }

    return 0;
}
