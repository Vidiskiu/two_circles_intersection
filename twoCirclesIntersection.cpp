# include <iostream>
# include <string.h>
# include <math.h>

using namespace std;

int main(){
    float circ1[2], circ[2];

    cout << "Enter properties of circle 1 (x, y, radius)" << endl;
    cin >> circ1[0];
    cin >> circ1[1];
    cin >> circ1[2];

    cout << "Enter properties of circle 2 (x, y, radius)" << endl;
    cin >> circ2[0];
    cin >> circ2[1];
    cin >> circ2[2];

    float distanceC1C2 = pow(pow(circ2[1] - circ1[y], 2) + pow(circ2[0] - circ1[0], 2), 0.5);

    if(circ1[2] + circ2[2] < distanceC1C2){
        cout << "Does not intersect";
    }
    else if(circ1[2] + circ2[2] == distanceC1C2){
        cout << "Tangent";
    }
    else{
        cout << "Secant";
    }
}