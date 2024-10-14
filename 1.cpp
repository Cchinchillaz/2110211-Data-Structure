#include <bits/stdc++.h>
using namespace std;

string int_to_s(int mm){
    string out = "";
    out += '0'+mm/10;
    out += '0'+mm%10;
    return out;
}

int main(){
    int time,h,m,hc,mc;
    string HH,MM;
    cin >> hc >> mc >> time;

    h = time/60;
    m = time%60;


    mc+= m;
    hc+= h;
    
    if(mc >= 60){
        mc %= 60;
        hc += 1;
    }
    if(hc >= 24){
        hc %= 24;
    }

    HH = int_to_s(hc);
    MM = int_to_s(mc);
    
    cout << HH << " " << MM;

}

