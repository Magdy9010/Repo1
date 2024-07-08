#include <iostream>
#include <vector>
#include <array>
#include <algorithm>

using namespace std;

int main()
{
    array <int,4> a = {1,2,3,4};
    array <int,4> out={1,1,1,1};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (j != i)
            {
                out[i] *= a[j]; 
            }
            
        }       
        
    }
    for (int i = 0; i < 4; i++)
    {
        cout << out[i] << endl;
    }
    
    
    return 1;
}