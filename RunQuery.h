//
// Created by raopei on 19-3-25.
//

#ifndef TEXTQUERY_RUNQUERY_H
#define TEXTQUERY_RUNQUERY_H

#include <iostream>
#include <fstream>
#include "TextQuery.h"
#include "QueryResult.h"


using namespace std;


void runQuery(ifstream &infile){

    TextQuery tq(infile);
    while(true){
        cout<<"Enter word to look for, or q to quit:"<<endl;
        string s;
        while(!(cin >> s) || (s == "q"))
            break;
        tq.query(s).showResult();

    }
}



#endif //TEXTQUERY_RUNQUERY_H
