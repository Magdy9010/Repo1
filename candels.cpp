#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    
    int ret = 1;
    int cntr = candles.size() - 1;
    
    sort(candles.begin(),candles.end());
    
    for (int i : candles ) 
    {
       // cout << i;
    }
    while (cntr > 0) 
    {
        cout << "cntr = " << cntr << endl;
        if (candles[cntr] == candles[cntr-1]) 
        {
            cout << "candles[cntr] = " << candles[cntr] << " candles[cntr-1] =  " << candles[cntr-1] << endl;

            ret++;
        }
        else 
        {

        }
        
        cntr--;
    }

    cout << "ret = " << ret << endl;

    return ret;
}

int main()
{
    vector<int> candles = {3,2,1,3};
    int result = birthdayCakeCandles(candles);

    return 0;
}


#if 0
int birthdayCakeCandles(vector<int> candles) {
    
    int ret = 1;
    int cntr = candles.size();
    
    sort(candles.begin(),candles.end());
    
    while (cntr > 0) 
    {
        if (candles[cntr] == candles[cntr-1]) 
        {
            cout << candles[cntr] << "  " << candles[cntr-1] << endl;
            ret++;
        }
        
        cntr--;
    }

    return ret;
}

#endif