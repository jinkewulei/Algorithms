#include <iostream>
#include "md5.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "md5 of 'grape': " <<endl<< md5("grape")<<endl;

	getchar();
    return 0;
}
