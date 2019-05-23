#include <iostream>
#include <fstream>
#include <vector>
#include <cstring>
#include <sstream>

#include "funciones.hpp"
#include "ArbolBinario.hpp"

using namespace std;

int main(int argc, char const *argv[]) {
    ifstream data("include/data.txt", ios::in);
    if(data) {
        string line;
        getline(data, line);

        vector<int> vId;
        vector<string> vName;
        vector<bool> vIsNode;
        vector<int> vIdFrom;
        vector<int> vIdSonY;
        vector<int> vIdSonF;

        fillData(data, vId, vName, vIsNode, vIdFrom, vIdSonY, vIdSonF);

        data.close();
    } else {
        cerr << "Error loading data !" << endl;
    }

    return 0;
}
