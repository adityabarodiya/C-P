#include <iostream>
#include <vector>

using namespace std;

vector<int> generateArray(int number)
{
    vector<int> array(32, 0);
    int length = 0;

    int i = 0;
    while (number > 0)
    {
        {
            if (number % 2 == 0)
            {
                
            }
            else
            {
                if ((number % 4) != 1)
                {
                    number++;
                    array[i]--;
                }
                else
                {
                    --number;
                    array[i] = 1;
                }
            }
            number /= 2;
            length += 1;
            i++;
        }
    }

    while (array[length - 1] == 0 && length > 0) --length;

    return vector<int>(array.begin(), array.begin() + length);
}

void printArray(const vector<int> &array)
{
    cout << array.size() << endl;
    for (int value : array)
    {
        cout << value << " ";
    }
    cout << endl;
}

void solveTestCase(int number)
{
    vector<int> resultArray = generateArray(number);
    printArray(resultArray);
}

void processInput()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int number;
        cin >> number;
        solveTestCase(number);
    }
}

int main()
{
    processInput();
    return 0;
}
