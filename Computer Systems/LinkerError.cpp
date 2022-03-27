/* *
*
*Linker Errors: These error occurs when after compilation we link the different 
object files with main’s object using Ctrl+F9 key(RUN). These are errors generated 
when the executable of the program cannot be generated. This may be due to wrong 
function prototyping, incorrect header files. One of the most common linker error 
is writing Main() instead of main(). 
*
*
**  */

#include <bits/stdc++.h>
using namespace std;
int func();
void Main() // Here Main() should be main()
{
    int a = 10;
    cout<<" "<< a; 
    
   // func();
}
