#include <cmath>
#include <climits>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
       try {
        int N;
        cin >> N;
        stack<int> myStack, maxElements;
        int queryType, queryValue;

        for (int i = 0; i < N; i++)
        {
            cin >> queryType;

            switch (queryType)
            {
            case 1:
                cin >> queryValue;
                myStack.push(queryValue);
                if (maxElements.empty() || maxElements.top() <= queryValue)
                {
                    maxElements.push(queryValue);
                }
                break;
            case 2:
                if (myStack.top() == maxElements.top())
                {
                    maxElements.pop();
                }
                myStack.pop();
                break;
            case 3:
                cout << maxElements.top() << endl;
                break;
            default:
                throw runtime_error("Invalid queryType");
            }

        }
        return 0;
    }
    catch (exception &ex)
    {
        std::cout << ex.what();
    }
}
