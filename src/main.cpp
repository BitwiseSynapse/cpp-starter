#include <iostream>
#include <numeric>
#include <vector>
int main(){
std::vector<int> v{1,2,3,4,5};
std::cout << "Sum = " << std::accumulate(v.begin(), v.end(), 0) << "\n";
}
