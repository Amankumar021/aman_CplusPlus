#include<iostream>

using namespace std;
int main()
{
    // katappa weapon hold even(ready for battle) odd(not ready for battle  )


    // your code goes here
    int no_of_soldiers;
    cin >> no_of_soldiers;
    int weapon_hold[no_of_soldiers];
    
    
    for(int i =0; i<no_of_soldiers; i++)
    {
        cin >> weapon_hold[i];
    }

    int weapon_hold_even=0;
    int weapon_hold_odd=0;
    for(int i=0; i<no_of_soldiers; i++)
    {
        if(weapon_hold[i]%2!=0)
        {
            weapon_hold_odd+=1;
        }else
        {
            weapon_hold_even+=1;
    }
    }
    
    if(weapon_hold_even>weapon_hold_odd)
    {
        cout << "READY FOR BATTLE" << endl;
    }else
    {
        cout << "NOT READY" << endl;
    }
    
    return 0;
}