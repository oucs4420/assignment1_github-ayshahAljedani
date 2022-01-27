#include <iostream>
#include <fstream>
using namespace std;


/*
   Ayshah Aljedani

*/
// output format to use IDENTICALLY:
//BSH:Saru> ./filesize input.3lines input.1line 
//program: ./filesize
// input.3lines: 3
// input.1line: 1
//
int main( int argc, char* argv[] )
{
    fstream line1;
    cout<<"program: "<<argv[0]<<endl;
    for (int arg = 1; arg < argc;arg++)
    {
            int number_of_lines=-1;
            line1.open (argv[arg]);
            string line;
            if (line1)
            {
                while(line1)
                {
                    getline(line1,line);
                    number_of_lines++;
                }
            }
            line1.close();
            cout<<" "<<argv[arg]<<": "<<number_of_lines<<endl;
    }
    exit(0); // this means that the program executed correctly!
} 

