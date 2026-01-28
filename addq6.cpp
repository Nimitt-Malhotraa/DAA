#include <iostream>
#include <cmath>
using namespace std;

float dist(int x1, int y1, int x2, int y2) {
    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main() {
    int x[] = {9,2,15,5,1,12};
    int y[] = {3,6,3,1,2,4};
    int n = 6;

    float minDist = dist(x[0], y[0], x[1], y[1]);

    for (int i = 0; i < n; i++)
        for (int j = i+1; j < n; j++)
            minDist = min(minDist, dist(x[i], y[i], x[j], y[j]));

    cout << minDist;
    return 0;
}