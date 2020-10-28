#ifndef TESTCRYPTDEPRECATED_ARGSPARSER_H
#define TESTCRYPTDEPRECATED_ARGSPARSER_H
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <iterator>

#include <string.h> //strcmp() on ubuntu System
class CLParser
{
public:

    CLParser(int argc_, char * argv_[],bool switches_on_=false);
    ~CLParser(){}

    std::string get_arg(int i);
    std::string get_arg(std::string s);
    bool find_arg(std::string arg_name);

private:

    int argc;
    std::vector<std::string> argv;

    bool switches_on;
    std::map<std::string,std::string> switch_map;
};

CLParser::CLParser(int argc_, char * argv_[],bool switches_on_)
{
    argc=argc_;
    argv.resize(argc);
    copy(argv_,argv_+argc,argv.begin());
    switches_on=switches_on_;

    //std::map the switches to the actual
    //arguments if necessary
    if (switches_on)
    {
        std::vector<std::string>::iterator it1,it2;
        it1=argv.begin();
        it2=it1+1;

        while (true)
        {
            if (it1==argv.end()) break;
            if (it2==argv.end()) break;

            if ((*it1)[0]=='-')
                switch_map[*it1]=*(it2);

            it1++;
            it2++;
        }
    }
}

std::string CLParser::get_arg(int i)
{
    if (i>=0 && i<argc)
        return argv[i];

    return "";
}
bool CLParser::find_arg(std::string arg_name){
    bool found = false;
    int i=0;
    while(!found && i<argc){
        if (strcmp(argv[i].c_str(),arg_name.c_str())==0)
            found = true;
        i++;
    }
    return found;
}

std::string CLParser::get_arg(std::string s)
{
    if (!switches_on) return "";
    if ( switch_map.find(s) != switch_map.end())
        return switch_map[s];

    return "";
}
#endif //TESTCRYPTDEPRECATED_ARGSPARSER_H
