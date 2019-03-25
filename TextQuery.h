//
// Created by raopei on 19-3-25.
//

#ifndef TEXTQUERY_TEXTQUERY_H
#define TEXTQUERY_TEXTQUERY_H

#include "QueryResult.h"
#include <iostream>
#include <vector>
#include <fstream>
//#include <bits/shared_ptr.h>
#include <memory>
#include <map>
#include <set>
#include <string>
#include <sstream>

using line_no = std::vector<std::string>::size_type ;

class TextQuery {
public:

    TextQuery(std::ifstream &ifs);//constructor

    QueryResult query(const std::string&) const;

private:

    std::shared_ptr<std::vector<std::string>> file;
    std::map<std::string,std::shared_ptr<std::set<line_no> > > wordMap;


};




#endif //TEXTQUERY_TEXTQUERY_H
