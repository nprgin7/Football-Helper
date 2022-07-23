#ifdef _WIN32
#include <tchar.h>
#include <vcl.h>
#endif

#ifdef _EXPORTING
   #define CLASS_DECLSPEC declspec(dllexport)
#else
   #define CLASS_DECLSPEC declspec(dllimport)
#endif

class Clubs {
public:
	String name1, name2;
    double w1, w2, d1, d2, l1, l2;
    double points1, points2;
	Clubs(String n1, String n2, double _w1, double _w2, double _d1, double _d2, double _l1, double _l2){
        w1 = _w1;
        w2 = _w2;
        d1 = _d1;
        d2 = _w2;
        l1 = _l1;
        l2 = _l2;
        name1 = n1;
        name2 = n2;
    }

    void calculatePoints(){
	points1 = w1*3 + d1 - l1;
    points2 = w2*3 + d2 - l2;
    }

    String betterClub(){
        if(points1 > points2){
            return name1;
        } else {
            return name2;
        }
    }
};
