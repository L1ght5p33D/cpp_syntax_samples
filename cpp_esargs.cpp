#include <iostream>

int main(int argc, char *argv[], char *env[]){
    std::cout << "Have " << argc << " arguments:" << std::endl;
    
    
    for (int i = 0; i < argc; ++i) {
        std::cout << argv[i] << std::endl;
    }

printf("And have ENV vars ~ ");


    for (int i = 0; env[i]; ++i) {
printf("envvar ~ ");
std::cout<< env[i]<< std::endl;
    }
}

