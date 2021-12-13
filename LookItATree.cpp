#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> ATree(int base)
{
    vector<string> theTree;
    string insert = "";
    int counter = 0; //  Counts the spaces

    if (base == 0)
    {
        insert = " ";
        theTree.push_back(insert);
        return theTree;
    }
    if (base == 1)
    {
        insert = "a";
        theTree.push_back(insert);
        return theTree;
    }
    if (base == 2)
    {
        insert = "aa";
        theTree.push_back(insert);
        return theTree;
    }
    //  Start from the bottom, build up
    //  Keep track of how many spaces on the left of each row
    for (int i = base; i >= 0; i = i - 2)
    {
        //  Clear the insert string
        insert = "";
        //  Makes sure that there are the correct amount of spaces
        for (int k = 0; k < counter; k++)
        {
            insert.append(" ");
        }
        //  Count the necessary "i's" of each row
        for (int jj = 0; jj < i; jj++)
        {
            insert.append("a");
        }
        theTree.push_back(insert);
        counter++;
    }
    return theTree;
}

int main()
{
    cout << "Screaming" << endl;
    // Change x to be the size of the base of the tree
    int x = 40;
    vector<string> turkey = ATree(x);
    //  Print Statements
    for (int i = turkey.size() - 1; i >= 0; i--)
    {
        cout << turkey[i] << endl;
    }
    return 0;
}