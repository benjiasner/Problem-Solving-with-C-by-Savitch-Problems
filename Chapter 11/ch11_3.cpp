#include <iostream>
using namespace std; 
class DegreeAngle{
    public: 
        DegreeAngle( );
        DegreeAngle(int angle);
        //other members and friends
        friend istream& operator >>(istream& ins, DegreeAngle& ang);
        friend ostream& operator <<(ostream& outs, const DegreeAngle& ang); 
        friend DegreeAngle operator +(const DegreeAngle& num1, const DegreeAngle& num2);
        friend DegreeAngle operator -(const DegreeAngle& num1, const DegreeAngle& num2);
        friend DegreeAngle operator -(const DegreeAngle& num1);

    private:
        int angle;
};

int main(){

    DegreeAngle angle1(90);
    DegreeAngle angle2(180);
    DegreeAngle angle3;

    cout << "Adding angles: ";
    cout << (angle1 + angle2);
    cout << "\nSubtracting angles: ";
    cout << (angle1 - angle2);
    cout << "\nNegative angle: ";
    cout << (-angle1);

    cout << "\nCreating pair 3: ";
    cin >> angle3;
    cout << "\n Here is pair 3: ";
    cout << angle3;
    return 0;
}

DegreeAngle::DegreeAngle() {
    angle = 0;
}

DegreeAngle::DegreeAngle(int num){

    if (num > 359){
        cout << "Error: illegal angle input.\n";
        exit(1);
    }
    angle = num;
}

istream& operator >>(istream& ins, DegreeAngle& ang){
    int num;

    ins >> num;

    if (num > 359){
        cout << "Error: illegal angle input.\n";
        exit(1);
    }

    ang.angle = num;

    return ins;
}

ostream& operator <<(ostream& outs, const DegreeAngle& ang){
    outs << ang.angle;
    return outs;
}

DegreeAngle operator +(const DegreeAngle& deg1, const DegreeAngle& deg2){
    int tempStore;
    DegreeAngle temp;
    tempStore = deg1.angle + deg2.angle;
    if (tempStore > 359){
        tempStore = 360 - tempStore;
    }
    temp.angle = tempStore;
    return temp;
}

DegreeAngle operator -(const DegreeAngle& deg1, const DegreeAngle& deg2){
    int tempStore;
    DegreeAngle temp;
    tempStore = deg1.angle - deg2.angle;
    if (tempStore < 0){
        tempStore = 360 + tempStore;
    }
   temp.angle = tempStore;
    return temp;
}

DegreeAngle operator -(const DegreeAngle& deg){
    DegreeAngle temp;
    temp.angle = -deg.angle;
    return temp;
}