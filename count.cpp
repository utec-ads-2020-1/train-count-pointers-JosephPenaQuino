#include "count.h"

#define find_value(vec, value) std::find(vec.begin(), vec.end(), value)

struct int_value
{
    int * ptr_value;
    int cnt;
    int_value(int * ptr_value) : ptr_value{ptr_value}, cnt{1} {}
    bool operator==(const int_value &rhs) const {
        return rhs.ptr_value == ptr_value;
    }
};

void joseph::count(int **p[])
{
    std::vector<int_value> v;
    std::vector<int_value>::iterator it;
    for(int i = 0; p[i] != NULL; ++i)
    {
        // If there is no value in the  vector
        if((it = find_value(v,int_value(*p[i]))) == v.end())
            v.push_back(int_value(*p[i]));
        // If there is already a value in the  vector
        else
        	((*it).cnt)++;
    }
    // Print values
    std::cout << "----------------------------" << std::endl;
    for (auto i : v)
       std::cout << i.ptr_value << ": " <<*(i.ptr_value)  <<": "  << i.cnt << std::endl;
}
