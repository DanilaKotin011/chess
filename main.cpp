#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <typeinfo>
#include <sstream>
#include <fstream>
#include "functions.h"
#include "Class.h"


int main(){
    if(ReadFromFile()==1){
        return 0;
    }
    DrawWindow();
    CheckAll();
    system("pause");
    
    return 0;
}
