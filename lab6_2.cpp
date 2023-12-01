#include <iostream>
#include <cmath>
using namespace std;
double deg2rad(double deg){
    return deg*M_PI/180.0;
}
double rad2deg(double rad){
    return rad*180.0/M_PI;
}
double findXComponent(double vecX1,double vecX2,double degX1,double degX2){
    return vecX1*cos(degX1)+vecX2*cos(degX2) ;
}
double findYComponent(double vecY1,double vecY2,double degY1,double degY2){
    return vecY1*sin(degY1)+vecY2*sin(degY2);
}
double pythagoras(double xComp,double yComp){
    return sqrt(pow(xComp,2)+pow(yComp,2));
}
void showResult(double lenght,double angle){
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%" << endl;
    cout << "Length of the resultant vector = " << lenght << endl;
    cout << "Direction of the resultant vector (deg) = "<< angle<<endl;
    cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 
    showResult(result_vec_length,result_vec_direction);
}
