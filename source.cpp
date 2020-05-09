#include "header.hpp"

int menu(){
    short choice;
    cout<<"1. Ввод с экрана и запись в файл."<<endl<<
          "2. Ввод случайным образом и запись в файл."<<endl<<
          "3. Добавить запись в начало файла."<<endl<<
          "4. Добавить запись в конец файла."<<endl<<
          "5. Печать одной записи из файла по номеру."<<endl<<
          "6. Печать всех записей из файла."<<endl<<
          "7. Выход из программы."<<endl;
    cin >> choice;
    return choice;
};

void finput(struct build input){
    ofstream file("file.txt", ios_base::app);
    cout << "Введите название процессора, его частоту, объём ОЗУ и тип ЦП: ";
    cin >> input.cpu >> input.freq >> input.ram >> input.type;
    file << setw(20) << input.cpu << "     " << setw(4) << input.freq << "     "  << setw(5) << input.ram << "     "  << input.type <<endl; 
    file.close();
};
void fautoinput(){

};
void beginfinput(){

};
void endfinput(){

};
void numfoutput(){

};
void allfoutput(){

};