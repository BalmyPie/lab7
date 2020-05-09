#pragma once
#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int menu();
void finput();
void fautoinput();
void beginfinput();
void endfinput();
void numfoutput();
void allfoutput();

struct build{
    string cpu;
    float freq;
    int ram;
    char type;
};
build input;