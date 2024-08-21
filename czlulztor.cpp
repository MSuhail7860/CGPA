// instruction: Take 2 number for addition
//2 numer multliptcatiom.
//2 divison
// 2 subtraction.==> MathLib


// class name = Calcultor.
#include<iostream>
using namespace std;

class calculator{
    public:
    int add(int num1, int num2){
        return num1 + num2;
    }
    float multiply(float num3, float num4){
        return num3 * num4;
    }
    float divide(float num5, float num6){
        return num5 / num6;
    }
    int subtract(int num7, int num8){
        return num7 - num8;
    }
};

int main(){
    
    int a, b, ans=0;
    cout << "Enter two numbers for addition:";
    cin >> a >> b;
    int ans = add(a, b);
    cout << "Addition is:" << add << endl;
    
    int c, d, ans1=0;
    cout << "Enter two numbers for multiplication:";
    cin >> c >> d;
    float ans1 = multiply(c, d);
    cout << "Multiplication is:" << multiply << endl;

    int p, q, ans2=0;
    cout << "Enter two numbers for multiplication:";
    cin >> p >> q;
    float ans2 = divide(p, q);
    cout << "Division is:" << divide << endl;

    int r, s, ans3=0;
    cout << "Enter two numbers for multiplication:";
    cin >> r >> s;
    int ans3 = subtract(r, s);
    cout << "Multiplication is:" << subtract << endl;

    return 0;
}