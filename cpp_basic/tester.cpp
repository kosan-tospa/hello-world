#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <map>

using namespace std;

class Setting
{
private:
    string key_;
    string value_;

public:
    Setting(string key, string value);
    string getKey() { return key_; }
    string getValue() { return value_; }
    void setKey(string key) { key_ = key; }
    void setValue(string value) { value_ = value; }

    friend ofstream &operator<<(ofstream &ofs, Setting &setting);
    friend ifstream &operator>>(ifstream &ifs, Setting &setting);
    friend ostream &operator<<(ostream &os, Setting &setting);
};


