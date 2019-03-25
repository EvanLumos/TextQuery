//
// Created by raopei on 19-3-25.
//

#ifndef TEXTQUERY_QUERYRESULT_H
#define TEXTQUERY_QUERYRESULT_H

//#include "TextQuery.h"
#include <vector>
#include <set>
#include <iostream>
#include <memory>

using line_no = std::vector<std::string>::size_type ;

class QueryResult {
public:
    QueryResult(std::string s,
            std::shared_ptr<std::set<line_no>> p,
            std::shared_ptr<std::vector<std::string>> f):
            sought(s),lines(p),file(f){}
    void showResult(){
        std::cout<<this->sought<<" occurs "<<this->lines->size()
                 <<(this->lines->size() > 1 ? " times. ":" time. ")
                 <<std::endl;
        for(auto m :*(this->lines))
            std::cout<<"\t(line "<< m+1 <<") :"
                     <<*(this->file->begin() + m)<<std::endl;

    }


private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;

};



#endif //TEXTQUERY_QUERYRESULT_H
