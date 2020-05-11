#include "header.hpp"
#ifdef _WIN32
#include <windows.h>
#endif

int main(){
    #ifdef _WIN32
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    #endif
    setlocale(LC_ALL,"ru");
    srand(time(NULL));

    build input;
    bool fl=1;
    string randnames[] = {"Pentium-III", "AMD-K6", "PowerPC-620","C","R"};
    
    while(fl){
        int choice = menu();
        switch(choice)
            {case 1:{
                finput(input);
                break;
            }case 2:{
                fautoinput(input, randnames);
                break;
            }case 3:{
                break;
            }case 4:{
                break;
            }case 5:{
                break;
            }case 6:{
                break;
            }case 7:{
                fl=0;
                break;
            }
            default:{
                cout << "Ошибка. Введите другое действие." << endl << endl;
                break;
            }
        }
    };
}