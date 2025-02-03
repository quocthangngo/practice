#include <iostream>
#include <string>

using namespace std;

int main()
{
    // string t = "Hello";
    // const char* t2 = t.c_str();
    // cout << t2;

    std::string s = "This is a Hello World string.";
    std::string stringtofind = "Hello";
    // size_type like size_t just like a type
    std::string::size_type found = s.find(stringtofind);
    if (found != std::string::npos)
    {
        std::cout << "Substring found at position: " << found;
    }
    else
    {
        std::cout << "The substring is not found.";
    }
    return 0;
}