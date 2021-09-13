#include <iostream>
#include <vector>
using namespace std;

int main(){
    
    cout << "Hello There Juan" << endl;
    
    vector<int> vector1;
    vector<int> vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout << "\nSize of vector1 is: " << vector1.size() << " indexes" << endl;
    cout << "Here is an updated version of vector 1: " << vector1.at(0) << " ," << vector1.at(1) << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    
    cout << "\nSize of vector2 is: " << vector2.size() << " indexs" << endl;
    cout << "Here is an updated version of vector 2: " << vector2.at(0) << " ," << vector2.at(1) << endl;

    vector <vector<int>> vector_2d {
    };
    
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout << "\nHere is group 1 of vector_2d: ";
    cout << "{" <<vector_2d.at(0).at(0) << " ," << vector_2d.at(0).at(1) << "}" << endl;
    
    cout << "\nHere is group 2 of vector_2d: ";
    cout << "{" <<vector_2d.at(1).at(0) << " ," << vector_2d.at(1).at(1) << "}" << endl;
    
    vector_2d.at(0).at(0) = 1000;
    cout << "\nHere is group 1 of vector_2d but an index 0 with an update: ";
    cout << "{" <<vector_2d.at(0).at(0) << " ," << vector_2d.at(0).at(1) << "}" << endl;
    
    return 0;
}