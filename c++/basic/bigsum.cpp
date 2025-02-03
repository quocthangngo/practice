#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool swapNum(string& a, string &b)
{
    if (b.length() > a.length())
    {
        std::swap(a, b);
        return true;
    }
    else if (a.length() == b.length())
    {
        for (unsigned int i = 0; i < a.length(); i++)
        {
            if (b[i] > a[i])
            {
                std::swap(a, b);
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string a, b, oper;
    // input value
    getline(cin, a);
    getline(cin, oper);
    getline(cin, b);
    string c = "";
    int carry = 0;

    if (oper.compare("+") == 0)
    {
        int aIndex = a.length() - 1;
        int bIndex = b.length() - 1;
        while (true)
        {
            int numa = 0;
            int numb = 0;
            bool done = true;

            // check len
            if(aIndex >= 0)
            {
                numa = a[aIndex] - '0';
                aIndex--;
                done = false;

            }
            if(bIndex >= 0)
            {
                numb = b[bIndex] - '0';
                bIndex--;
                done = false;
            }

            //done
            if(done)
            {
                break;
            }
            // calculator
            int temp = numa + numb + carry;
            if (temp >= 10)
            {
                carry = 1;
                temp -= 10;
            }
            else
            {
                carry = 0;
            }
            // result
            c = std::to_string(temp) + c;
        }
    }
    else if (oper.compare("-") == 0)
    {
        // correct the biger and smaller number
        bool isSwap = swapNum(a, b);
        // get bigger number - smaller number
        int aIndex = a.length() - 1;
        int bIndex = b.length() - 1;
        int carry = 0;

        while (true)
        {
            int numa = 0;
            int numb = 0;
            bool done = true;

            if(bIndex >= 0)
            {
                numb = b[bIndex] - '0';
                numa = a[aIndex] - '0';
                aIndex--;
                bIndex--;
                done = false;
            }
            else if (carry)
            {
                done = false;
                numa = a[aIndex] - '0';
                aIndex--;
            }
            //done
            if(done)
            {
                // still remain number
                if (aIndex >=0)
                {
                    c = a.substr(0, aIndex + 1) + c;
                }

                // clean 0 numbers at first
                for (int i = 0; i < c.length(); i++)
                {
                    if (c[i] != '0')
                    {
                        c = c.substr(i, c.length());
                        break;
                    }
                }

                if (isSwap)
                    c = "-" + c;

                break;
            }
            // calculator
            int temp;
            if (numb + carry > numa)
            {
                temp = numa + 10 - numb - carry;
                carry = 1;
            }
            else
            {
                temp = numa - numb - carry;
                carry = 0;
            }
            // result
            c = std::to_string(temp) + c;
        }
    }
    cout << c;
    return 0;
}