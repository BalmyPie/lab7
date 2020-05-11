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

void fautoinput(struct build input, string *randnames){
    ofstream file("file.txt", ios_base::app);
    input.cpu = randnames[rand()%3]; input.freq = rand()%1800+2000;
    input.ram = rand()%6000+2000; input.type = randnames[rand()%2+3];
    file << setw(20) << input.cpu << "     " << setw(4) << input.freq << "     "  << setw(5) << input.ram << "     "  << input.type <<endl; 
    file.close();
};
void beginfinput(){

};
void endfinput(){

};
void numfoutput(){

};
void allfoutput(){

};