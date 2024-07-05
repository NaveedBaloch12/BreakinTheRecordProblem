#include <iostream>

using namespace std;

// User Defined Functions....
void breakRecord(int n, int Arr[])
{
    int max_val = Arr[0];
    int min_val = Arr[0];
    int max_count = 0;
    int min_count = 0;

    for(int i = 1; i < n; i++)
    {
        if(Arr[i] > max_val)
        {
            max_val = Arr[i];
            max_count++;
        }
        if(Arr[i] < min_val)
        {
            min_val = Arr[i];
            min_count++;
        }
    }
    cout << max_count << " " << min_count;
}

int main()
{
    int n;
    cin >> n;

    if (n < 1 || n > 1000)
        return 0;

    int Arr[n];

    for(int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
    
        if (num >= 1 || num <= 100000000)
            Arr[i] = num;
        else
            return 0;
    }
    breakRecord(n, Arr);
    
    return 0;
}