// usedma,cpp -- inheritance, friends, and DMA
// compile with dma.cpp

#include <iostream>
#include "dma.h"

int main()
{
    using std::cout;
    using std::endl;

    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "blimpo", 4);
    hasDMA map("Mercator", "Buffalo keys", 5);
    cout <<"Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout <<"Displaying lacksDMA object:\n";
    cout << balloon << endl;
    cout << "Displaying hasDMA object:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of hasDMA copy:\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;

    return 0;
}
