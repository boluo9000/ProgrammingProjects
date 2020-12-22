#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{
//    ifstream input("D:\\GitHub\\ProgrammingProjects\\Project#01\\input\\acetaldehyde.dat");
    ifstream input("../input/acetaldehyde.dat");
    int natom;
    input >> natom;

    input.close();

    cout << "Number of atoms: " << natom << endl;

    return 0;
}
