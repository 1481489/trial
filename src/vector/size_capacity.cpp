#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    cout << "vec: size: " << vec.size();  // this will just 0 since the ctor isnt populated with anything
    cout << " capacity: " << vec.capacity() << endl; // This will also give us zero because there isnt anything populated therefore there is no storage space used.

    for(int i=0; i<24; i++)
    {
        vec.push_back(i);
        cout<< "vec: size: " << vec.size();
        cout<< " capacity: " << vec.capacity() << endl;
    }
    return 0;
}

// The vector size is the amount of components it contains and this can be hard to determine since a vector
// is flexible to work with hence its just the number of elements within a vector

// vector capacity is the storage space used to accomodate vector elements, therefore returns the number of bits an element
// is classified under. for an example number 24 would be classified as a 32 bit number whereas 5 would be classified as an
// 8 bit number.
