#include <iostream>
#include <algorithm>
#include <boost/format.hpp>
#include <boost/tokenizer.hpp>
#include <boost/algorithm/string.hpp>
#include <string>
#include <set>

std::string strToUpper(std::string str);

std::string strToUpper(std::string str){
    transform(str.begin(),str.end(),str.begin(),towupper);
    return str;
}


int main(){
    char s[256];
    while(std::cin.getline(s,256)){
        std::vector<std::string> StrSec;
        boost::split(StrSec,s,boost::is_any_of((" ")));
        std::set<std::string>::iterator Str1It;
        std::set<std::string> Str1;
        std::set<std::string> StrS;
        bool flag;
        auto p1=std::make_pair(Str1It,flag);
        for(const auto &i:StrSec){
            p1=Str1.insert(strToUpper(i));
            if(p1.second){
                StrS.insert(i);
            }
        }
        std::set<std::string>::iterator StrSIt2;
        std::set<std::string>::iterator StrSIt;
        StrSIt2=--StrS.end();
        for(StrSIt=StrS.begin(); StrSIt!=StrS.end(); StrSIt++){
            if(StrSIt!=StrSIt2){
                std::cout<<*StrSIt<<' ';
            }else {
                std::cout<<*StrSIt;
            }
        }
        std::cout<<std::endl;
    }
}