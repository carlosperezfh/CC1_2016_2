#include <iostream>

/*2.2 Implement the min functionality from part 1 using only preprocessor macros. (Hint: You
will probably need the ternary operator – the ?: syntax.)
#define min(x, y){
    (x < y ? x : y)
}*/
using std::cout;
using std::endl;
//using std::min;
//using namespace std;

/*2.1 Using templates, implement a min function which returns the minimum of two elements of
any comparable type (i.e., it takes two arguments of some type T, and works as long as values
of type T can be compared with the < operator).
(To test this function, you may need to omit your usual using namespace std; line,
since there is already an std::min function.)// practica 4 2.1*/
template < typename T>
T min(const T t1, const T t2) {
    return t1 < t2?t1:t2;
}

int main()
{
    cout << min(2,4) << endl;
}
