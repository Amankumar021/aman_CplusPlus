#include<iostream>

using namespace std;

int main(){
    string response;

    while (true)
    {
        cout << "Do you want more tea (type 'stop' to exit)\n ";

        getline(cin,response);  // takes input for response(variable)
        //It's particularly useful for reading strings that may contain spaces. 
        if (response == "stop")
        {
            // exit the loop

            break;
        }
        
        cout << "here is another cup of tea.\n";
    }
    
    cout << "Ok , no more tea to you\n";
}