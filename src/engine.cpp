#include "engine.h"

#include "precision.h"
#include "vector.h"

#include <iostream>
using namespace std;
void Initialise(){
    std::cout<<"ENGINE INTIALISED!\n";

    vec::Vector3 vec1(1,2,3); 
    //vec1.Vector3(1,2,3);

    cout<<vec1.magnitude()<<endl;
}
