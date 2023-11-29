#include <iostream>
using namespace std; 
class Pairs{
    public: 
        Pairs( );
        Pairs(int first);
        Pairs(int first, int second);
        //other members and friends
        friend istream& operator >>(istream& ins, Pairs& second);
        friend ostream& operator <<(ostream& outs, const Pairs& second); 
        friend Pairs operator +(const Pairs& pair1, const Pairs& pair2);
        friend Pairs operator -(const Pairs& pair1, const Pairs& pair2);
        friend Pairs operator -(const Pairs& pair);
        friend Pairs operator *(const Pairs& pair, int c);

    private:
        int f;
        int s; 
};

int main(){

    Pairs pair1(1, 2);
    Pairs pair2(2, 1);
    Pairs pair3;

    cout << "Multiplying pairs: ";
    cout << (pair1 * 3);
    cout << "\nAdding pairs: ";
    cout << (pair1 + pair2);
    cout << "\nSubtracting pairs: ";
    cout << (pair1 - pair2);
    cout << "\nNegative pairs: ";
    cout << (-pair1);

    cout << "\nCreating pair 3: ";
    cin >> pair3;
    cout << "\n Here is pair 3: ";
    cout << pair3;
    return 0;
}

Pairs::Pairs() {
    f = 0;
    s = 0;
}

Pairs::Pairs(int first){
    f = first;
    s = 0;
}

Pairs::Pairs(int first, int second){
    f = first;
    s = second;
}

istream& operator >>(istream& ins, Pairs& second){
    char oneChar, comma, lastChar;
    int num1, num2;

    ins >> oneChar >> num1 >> comma >> num2 >> lastChar;

    if (oneChar != '(' || comma != ',' || lastChar != ')'){
        cout << "Error illegal form for pairs input.\n";
        exit(1);
    }

    second.f = num1;
    second.s = num2;

    return ins;
}

ostream& operator <<(ostream& outs, const Pairs& second){

    outs << "(" << second.f <<  ", " << second.s << ")";
    return outs;
}

Pairs operator +(const Pairs& pair1, const Pairs& pair2){
    Pairs temp;
    temp.f = pair1.f + pair2.f;
    temp.s =pair1.s + pair2.s;
    return temp;
}

Pairs operator -(const Pairs& pair1, const Pairs& pair2){
    Pairs temp;
    temp.f = pair1.f - pair2.f;
    temp.s =pair1.s - pair2.s;
    return temp;
}

Pairs operator -(const Pairs& pair){
    Pairs temp;
    temp.f = - pair.f;
    temp.s = - pair.s;
    return temp;
}

Pairs operator *(const Pairs& pair, int c){
    Pairs temp;
    temp.f = c * pair.f;
    temp.s = c * pair.s;
    return temp;
}