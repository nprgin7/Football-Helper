#include "vcl.h"
#include <string.h>
#include <iostream>
#pragma package(smart_init)
using namespace std;

class compr{
public:
	String n1,n2;
    double b1,b2;
    double avg1, avg2;
	compr(String _n1, double _b1, String _n2, double _b2){
        n1 = _n1;
        n2 = _n2;
        b1 = _b1;
        b2 = _b2;
    }

    double calculateAvg(){
        avg1 = b1 / 3;
        avg2 = b2 / 3;
        if (avg1 > avg2){
            return avg1;
        } else {
            return avg2;
        }
    }

    String betterPlayer(){
        if (avg1 > avg2){
            return n1;
        } else {
            return n2;
        }
    }

};
