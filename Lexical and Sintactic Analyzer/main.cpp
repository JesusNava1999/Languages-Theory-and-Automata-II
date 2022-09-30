#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

#include "LexicalAnalyzer.h"
/* #include "SintacticAnalyzer.h"
#include "SemanticAnalyzer.h" */

using namespace std;

/* void readFile(); */

int main(){
    LexicalAnalyzer a1;
    string* dividedLine;
    dividedLine = new string[20];
    int aux = 0;
    ifstream file;
    string text;
    int aux1 = 1;
    file.open("test-2.txt",ios::in);
    if(file.fail()){
        cout << "Something wrong :(" << endl;
        exit(1);
    } 
    while(!file.eof()){
        getline(file,text);
        if(text!=""){            
            int aux = 0;
            string line = text;
            istringstream isstream(line);
            while(!isstream.eof()){
                string tempStr;
                isstream >> tempStr;
                dividedLine[aux] = tempStr;
                aux++;
            } 
            cout << text << "\t\t\tline " << aux1++ <<  endl;
            a1.analyze(dividedLine, aux);
        }        
    }
    file.close();
    cout << endl;
    a1.printA();
   
    return EXIT_SUCCESS;
} 

 /* LexicalAnalyzer a1;

    string line = "total = div(op1, 2);";
    string* dividedLine;
    dividedLine = new string[20];
    int aux = 0;
    
    istringstream isstream(line);
    while(!isstream.eof()){
        string tempStr;
        isstream >> tempStr;
        dividedLine[aux] = tempStr;
        aux++;
    } 

    a1.analyze(dividedLine, aux);

    a1.printA(); */  
/* 
void readFile(){
    ifstream file;
    string text;
    int aux = 1;

    file.open("test-2.txt",ios::in);

    if(file.fail()){
        cout << "Something wrong :(" << endl;
        exit(1);
    } 

    while(!file.eof()){
        getline(file,text);
        if(text!=""){
            cout << text << "\t\t\tline " << aux++ <<  endl;
        }        
    }
    file.close();
}
 */