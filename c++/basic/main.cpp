#include <iostream>

using namespace std;

// Amstrong number
// #include <cmath>
// int main() {

//     for (int i = 1; i < 1000; i++)
//     {
//         string str_num = std::to_string(i);
//         int sum = 0;
//         for(char& c : str_num) {
//             sum += pow(c - '0', str_num.size());
//         }
//         if(sum == i)
//             cout << sum << endl;
//     }

//     return 0;
// }

// supper max in array
// #include <vector>

// int main()
// {
//     std::vector<int> arr;
//     std::string out = "";
//     int n;
//     // input
//     cin >> n;
//     for (int i = 0;i<n;i++)
//     {
//         int value;
//         cin >> value; 
//         arr.push_back(value);

//         // first
//         if(arr.size() == 2)
//         {
//             if (arr[0] > arr[1])
//             {
//                 out += std::to_string(arr[0]) + " ";
//             }
//         }
//         else if(arr.size() > 2) // middle
//         {
//             if (arr[i-1] > arr[i] && arr[i-1] > arr[i-2]) // maximun number
//             {
//                 out += std::to_string(arr[i-1]) + " ";
//             }
//         }
//     }
//     // last
//     if(arr[arr.size() - 1] > arr[arr.size() - 2])
//     {
//         out += std::to_string(arr[arr.size() - 1]);
//     }
//     cout << out;
//     return 0;
// }

// even increase in array
#include <utility> // Include the <utility> header for pairs
#include <vector>

int main()
{
    // input data
    int n;
    cin >> n;
    int arr[n];
    vector<pair<unsigned int, int>> vectorEven;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        // create a vector even
        if(arr[i]%2==0)
        {
            vectorEven.push_back(make_pair(i, arr[i]));
        }
    }
    cout << "Array before ";
    for (const auto& ele : arr)
    {
        cout << ele << " ";
    }
    // handle
    bool isDone = false;
    while(!isDone)
    {
        isDone = true;
        for(int i = 0; i<vectorEven.size()-1; i++)
        {
            // compare
            if(vectorEven[i].second > vectorEven[i+1].second)
            {
                swap(vectorEven[i].second, vectorEven[i+1].second);
                isDone = false;
            }
        }
    }
    // update data back to arr
    for (const auto& pair : vectorEven)
    {
        arr[pair.first] = pair.second;
    }
    cout << "\nArray after ";
    for (const auto& ele : arr)
    {
        cout << ele << " ";
    }
    return 0;
}