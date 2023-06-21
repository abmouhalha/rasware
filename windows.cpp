#include <iostream>
#include <windows.h>
#include<vector>
#include<string>


std::vector<std::string> getDrivers(){
    std::vector<std::string> Drives;
    char * lDrives = new char[MAX_PATH]();
    if(GetLogicalDriveStringsA(MAX_PATH,lDrives))
    {
        for(int i=0;i<100; i+=4)
        {
            if(lDrives[i] != (char)0){
                Drives.push_back(std::string {lDrives[i],lDrives[i+1],lDrives[i+2]});
            }
        }
    }
    delete[] lDrives;

    return Drives;

}


int main() {
    std::cout << "Hello World \n";
}