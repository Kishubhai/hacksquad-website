#include <iostream.h>  
using namespace std;  
int main()  
{  
    int *ptr;  
    float f=10.3;  
    ptr = &f; // error  
    std::cout << "The value of *ptr is : " <<*ptr<< std::endl;  
    return 0;  
}  
