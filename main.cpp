#include <iostream>
#include <fstream>
#include <vector>

using namespace std;
int main(int argc, char* argv[]) {
    /*if(argc < 2){
        cout << "Usage: " << argv[0] << "<PathToFile>";
        return 1;
    }*/
    string commands = "cd /home/$USER/Documents; mkdir -p repoes; cd repoes" ;

    ifstream file;
    //file.open(argv[1], "r");
    file.open("/home/dellboy/Documents/dashboard/links.txt");
    string links[50];
    int i = 0;
    //links.reserve(10);
    if (file.is_open()) {


        for (string line; getline(file,line);){
            links[i] = line;
            //cout << links[i]<< endl;
            i++;
        }

        //cout << i << endl;
    }

    for (int j = 0; j < i; ++j) {
        commands += "; git clone " + links[j];
    }
    //cout << commands;
    system(commands.c_str());

    return 0;
}