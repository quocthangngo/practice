#include <iostream>
#include <cmath>
#include <utility>
#include <vector>

using namespace std;

using Pair = const std::pair<int, int>&;

float distance(Pair p1, Pair p2)
{
    return std::sqrt(std::pow(p2.first - p1.first, 2) + std::pow(p2.second - p1.second, 2));
}

int main()
{
    // declare
    std::vector<std::pair<int, int>> listOfPairs;
    // input
    int n;
    cin >> n;
    for (int i = 0; i<n; i++)
    {
        std::pair<int, int> myPair;
        std::cout << "Enter first: ";
        std::cin >> myPair.first;
        std::cout << "Enter second: ";
        std::cin >> myPair.second;
        listOfPairs.push_back(myPair);
    }
    // find the minimal route
    float min = distance(listOfPairs[0], listOfPairs[1]);
    for (int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            float d = distance(listOfPairs[i], listOfPairs[j]);
            cout << d << " ";
            if(min > d)
            {
                min = d;
            }
        }
    }
    cout << min;
    return 0;
}