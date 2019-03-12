#include <iostream>
#include <list>
#include <fstream>
#include <sstream>
#include <string>
#include "corsa.h"
#include "taxi.h"

using namespace std;

void input_file(string input);


int main(int argc,char** argv) {

    if(argc < 3){
        cout << "usage: inputfile outputfile"<< endl;
    }

    string input = argv[1];
    string output = argv[2];

    input_file(input);

    return 0;
}

void input_file(string input,int righe,int colonne,int veicoli,int n_corse,int bonus,int steps,list<corsa> corse){

    ifstream infile(input);
    string line;

    getline(infile, line);
    istringstream iss(line);

    iss >> righe >> colonne >> veicoli >> n_corse >> bonus >> steps;


    while (getline(infile, line))
    {
        istringstream iss(line);

        corsa single;

        iss >> single.partenza[0];
        iss >> single.partenza[1];
        iss >> single.fine[0];
        iss >> single.fine[1];
        iss >> single.start;
        iss >> single.max_finish;

        //cout << iss;


        // process pair (a,b)
    }

}