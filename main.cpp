#include "file_read.hpp"

int main()
 {
     Model m1;

     m1.read_file();
/*
	fstream fp;
    vector<float> numbers;
    float innum;

    fp.open("sample_00.in");

    if(fp.is_open())
    {
        cout<< "\nThe File is open";
        while(fp >> innum)
        {
            cout <<"\nNumbr read";
            numbers.push_back(innum);
        }
    }
    fp.close();

    cout << "\nNumbers:\n";

    for (int i=0; i < numbers.size(); i++)
    {
        cout << numbers[i] << '\n';
    }

*/
	return 0;
}
