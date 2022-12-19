#include <iostream>
#include <math.h>

using namespace std;

float f(float a){
    return (a*a * cos(a) + 1);
}

int main(){
    int err, x;
    float a,b;
    do {
        cout<<"inserire estremi"<<endl;
        cin >> a;
        cin >> b;
    }while(f(a)*f(b)>=0);
    do {
        a = (a + b) / 2;
        if (a<b)
        x=(a + abs(a-b)/2);
        else
            x=(b+ abs(a-b)/2);

        if (f(x) == 0) {
            cout<<int(x*10000)/10000.0<<endl;
    cout<<int(f(x)*10000)/10000.0<<endl;

            return 0;
        }
        else {
            if (f(a) * f(b) < 0)
                b = x;
            else
                a = x;
        }
        err = abs((b - a) / 2);
    }while (err>=1e-6);

    cout<<int(x*10000)/10000.0<<endl;
    cout<<int(f(x)*10000)/10000.0<<endl;

    return 0;
}
