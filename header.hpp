#pragma once
#include <iostream>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

int menu();
void finput(struct build input);
void fautoinput(struct build input, string *randnames);
void beginfinput();
void endfinput();
void numfoutput();
void allfoutput();

struct build{
    string cpu;
    float freq;
    int ram;
    string type;
};