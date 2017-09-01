#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    cout << "start of program" << endl;
    if(argc > 2 || argc == 1){
        cout << "Usage: " << argv[0] << " <PATH TO FILE>";
        return 1;
    }


    char buffer[50];
    string links[20];
    FILE *repositories;
    repositories = fopen (argv[1],"r");
    if (repositories!= nullptr)
    {
        int i = 0;
        while(!feof(repositories) ){
            fgets(buffer,sizeof(buffer), repositories);

            cout << buffer;
            links[i] = buffer;
            i++;
        }
        fclose (repositories);
    }
    cout << "end of program"<<endl;
    return 0;

}

