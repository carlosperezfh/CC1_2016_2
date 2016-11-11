#include <iostream>

/*2.2 Implement the min functionality from part 1 using only preprocessor macros. (Hint: You
will probably need the ternary operator – the ?: syntax.)*/
#define min(x, y)(x < y ? x : y)
using std::cout;
using std::endl;
using namespace std;



int main()
{
    cout << min <int> (3,4) << endl;

}

