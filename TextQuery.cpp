//
// Created by raopei on 19-3-25.
//

#include "TextQuery.h"
#include "QueryResult.h"

using namespace std;

TextQuery::TextQuery(std::ifstream &ifs) :file(new vector<string>){
    string text;
    while(getline(ifs,text)){
        file->push_back(text);
        int n = file->size() -1;
        istringstream line(text);
        string word;
        while(line>>word){

            auto &lines = wordMap[word];
            if(!(lines))
                lines.reset(new set<line_no>);
            lines->insert(n);


            //cout<<"set (the) "<<wordMap["the"]->size()<<endl;
        }
    }


}

QueryResult TextQuery::query(const std::string& sought) const{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wordMap.find(sought);
    if(loc == wordMap.end())
        return QueryResult(sought,nodata,file);
    else
        return QueryResult(sought,loc->second,file);
}