#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

char t114[7][7];

int NISOT7[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,1,
        0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,1,0,1,
        0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,1,0,1,
        0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,1,1,1,0,
        0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,1,
        0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,
        0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,
        0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1,
        0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,1,0,1,
        0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,
        0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,1,0,1,1,1,
        0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,1,0,1,
        0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,
        0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,1,
        0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,1,0,0,
        0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0,1,0,1,
        0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,0,1,
        0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,1,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,1,0,1,
        0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,
        0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,
        0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,
        0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,
        0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0,0,0,1,
        0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,
        0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,
        0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,0,1,0,1,
        0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,1,0,
        0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,1,0,0,1,0,0,
        0,0,0,0,0,0,1,0,0,0,0,1,1,0,0,1,0,1,1,1,0,
        0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,1,0,0,0,
        0,0,0,0,0,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,
        0,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,
        0,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,0,1,1,0,1,
        0,0,0,0,0,0,1,0,1,0,0,1,1,0,0,0,1,0,1,0,1,
        0,0,0,0,0,0,1,0,1,0,0,1,1,0,0,1,0,0,1,1,0,
        0,0,0,0,0,0,1,1,0,0,0,1,0,0,1,0,1,1,0,0,0,
        0,0,0,0,0,0,1,1,0,0,0,1,0,0,1,1,1,0,1,0,1,
        0,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,0,
        0,0,0,0,0,0,1,1,0,0,0,1,1,0,0,1,1,0,0,1,0,
        0,0,0,0,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0,
        0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,
        0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,1,0,0,
        0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,
        0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,
        0,0,0,0,0,1,1,0,0,0,0,1,0,0,1,1,0,0,1,0,0,
        0,0,0,0,0,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,0,
        0,0,0,0,0,1,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,
        0,0,0,0,0,1,1,0,0,0,0,1,1,0,0,1,0,0,1,0,0,
        0,0,0,0,0,1,1,1,0,0,0,1,0,1,0,1,1,0,0,0,0,
        0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,
        0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,
        0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,
        0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1,
        0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,0,0,1,1,0,1,
        0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,0,1,0,
        0,0,0,0,1,0,0,0,1,0,0,1,0,0,0,1,0,0,1,1,1,
        0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
        0,0,0,0,1,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,1,
        0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,
        0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,
        0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,
        0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,1,
        0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,
        0,0,0,0,1,0,1,0,0,0,0,1,0,0,1,1,0,0,1,0,1,
        0,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,
        0,0,0,0,1,0,1,0,0,0,0,1,1,0,0,1,0,0,0,1,0,
        0,0,0,0,1,0,1,0,0,0,0,1,1,0,0,1,0,0,1,0,1,
        0,0,0,0,1,0,1,0,0,0,0,1,1,0,0,1,0,0,1,1,1,
        0,0,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,
        0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,0,0,1,0,1,0,
        0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,0,1,0,1,0,1,
        0,0,0,0,1,0,1,0,1,0,0,1,1,0,0,1,0,0,1,1,1,
        0,0,0,0,1,0,1,1,0,0,0,1,1,0,0,1,1,0,0,1,1,
        0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,0,0,1,
        0,0,0,0,1,1,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,
        0,0,0,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,
        0,0,0,0,1,1,1,0,0,0,0,1,1,0,0,1,0,0,0,1,0,
        0,0,0,0,1,1,1,0,1,0,0,1,1,0,0,0,1,0,1,0,1,
        0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,1,1,0,1,1,1,
        0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,
        0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,1,
        0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,1,0,
        0,0,0,1,0,0,0,0,1,0,0,1,0,0,0,1,0,0,1,1,0,
        0,0,0,1,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,
        0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,1,0,0,1,0,
        0,0,0,1,0,0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,1,
        0,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,0,0,1,0,1,
        0,0,0,1,0,0,1,0,0,0,0,0,1,1,0,0,0,0,1,1,1,
        0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,
        0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,0,
        0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,
        0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,1,1,0,0,
        0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,1,
        0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,0,1,0,
        0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,0,0,1,1,1,
        0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,1,1,0,
        0,0,0,1,0,0,1,1,0,0,0,1,0,1,0,1,1,0,1,0,1,
        0,0,0,1,0,1,1,0,0,0,0,1,0,0,0,1,0,0,1,1,0,
        0,0,0,1,0,1,1,1,0,0,0,1,0,1,0,1,1,0,1,0,1,
        0,0,0,1,1,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
        0,0,0,1,1,0,1,0,1,0,0,1,0,1,0,0,1,0,0,1,1,
        0,0,0,1,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,1,
        0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,1,
        0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,1,1,1,
        0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,1,0,1,
        0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,
        0,0,1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,1,1,
        0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,1,0,1,
        0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,1,0,0,1,0,
        0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,1,0,1,1,1,
        0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,0,0,1,0,
        0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,1,0,0,1,0,0,
        0,0,1,0,0,0,1,0,0,0,0,0,0,0,1,1,1,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,0,1,0,0,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,0,0,1,0,1,0,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,0,1,1,1,0,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,
        0,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,0,1,1,0,1,0,0,1,1,1,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,1,0,0,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1,0,0,0,0,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,0,1,1,1,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,1,1,0,1,0,1,
        0,0,1,0,0,0,1,0,0,0,0,1,1,0,0,1,1,0,0,1,0,
        0,0,1,0,0,0,1,0,0,0,0,1,1,0,0,1,1,0,1,1,1,
        0,0,1,0,1,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,
        0,0,1,0,1,0,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,
        0,0,1,0,1,0,1,0,0,0,0,0,1,1,0,0,0,1,0,0,1,
        0,0,1,0,1,0,1,0,0,0,0,0,1,1,0,1,0,0,0,1,1,
        0,0,1,0,1,0,1,0,0,0,0,1,0,0,1,1,0,1,0,0,0,
        0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,
        0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,1,0,0,1,
        0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,1,0,1,0,1,0,
        0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,1,0,1,1,0,1,
        0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,1,1,0,0,1,1,
        0,0,1,1,0,0,0,0,0,1,0,1,0,0,0,1,1,0,1,0,1,
        0,0,1,1,0,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,
        0,0,1,1,0,0,1,0,0,0,0,0,0,1,1,1,0,0,0,1,0,
        0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,0,1,1,0,0,1,
        0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,1,0,1,0,1,0,
        0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,1,0,1,1,0,1,
        0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,1,1,0,0,1,1,
        0,0,1,1,0,0,1,0,0,0,0,1,0,1,0,1,1,0,1,0,1,
        0,0,1,1,0,0,1,0,0,0,0,1,1,0,0,1,0,1,1,1,0,
        0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,
        0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,1,
        0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,
        0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,1,0,1,
        0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,
        0,1,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,1,
        0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,1,0,
        0,1,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0,1,0,0,
        0,1,0,0,0,0,0,0,0,0,1,1,0,1,0,1,0,0,0,0,0,
        0,1,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,0,1,0,0,
        0,1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,
        0,1,0,0,0,0,0,0,0,1,0,1,0,1,0,1,0,0,0,0,1,
        0,1,0,0,0,0,0,0,0,1,0,1,1,0,0,1,0,0,0,1,0,
        0,1,0,0,0,0,0,0,0,1,0,1,1,0,0,1,0,0,1,0,0,
        0,1,0,0,0,0,0,0,0,1,0,1,1,0,0,1,0,0,1,0,1,
        0,1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,1,
        0,1,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,
        0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,1,0,1,
        0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0,0,0,1,
        0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,0,1,0,
        0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,
        0,1,0,0,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,1,1,
        0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,1,0,0,1,1,0,
        0,1,0,0,0,0,0,1,0,0,0,0,0,0,1,1,0,0,1,0,0,
        0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,
        0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,1,0,1,
        0,1,0,0,0,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,
        0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,1,1,0,0,1,0,
        0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,1,1,0,1,0,0,
        0,1,0,0,0,0,0,1,0,0,0,1,1,0,0,1,1,0,1,0,1,
        0,1,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,
        0,1,0,0,0,0,1,0,0,0,0,0,1,1,0,0,0,0,1,0,1,
        0,1,0,0,0,0,1,0,0,0,0,0,1,1,1,0,0,0,1,0,1,
        0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,0,0,1,0,0,
        0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,0,1,0,0,0,1,
        0,1,0,0,0,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,
        0,1,0,0,0,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,
        0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,1,0,0,1,0,0,
        0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,1,0,0,1,0,1,
        0,1,0,0,0,0,1,0,0,0,0,1,1,1,0,1,0,0,1,1,1,
        0,1,0,0,0,0,1,1,0,0,0,1,1,1,0,1,1,0,1,0,1,
        0,1,0,0,0,1,0,0,0,1,0,1,0,0,1,1,0,0,0,0,0,
        0,1,0,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,0,0,1,
        0,1,0,0,0,1,0,0,0,1,0,1,1,0,0,1,0,0,0,1,0,
        0,1,0,0,0,1,0,0,0,1,0,1,1,0,0,1,0,0,1,0,1,
        0,1,0,0,0,1,1,1,0,0,0,1,1,1,0,1,1,0,1,0,1,
        0,1,0,0,1,0,0,0,0,1,0,1,0,0,1,1,0,0,0,0,1,
        0,1,0,0,1,0,0,0,0,1,0,1,1,0,0,1,0,0,0,1,1,
        0,1,0,0,1,0,0,0,0,1,0,1,1,0,0,1,0,0,1,0,1,
        0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,1,
        0,1,0,0,1,0,0,1,0,0,0,0,1,1,0,0,0,1,0,0,1,
        0,1,0,0,1,0,0,1,0,0,0,1,0,1,0,1,0,1,0,0,1,
        0,1,0,0,1,0,0,1,0,0,0,1,1,0,0,0,1,1,0,0,1,
        0,1,0,0,1,0,0,1,0,0,0,1,1,0,0,1,0,1,0,1,0,
        0,1,0,0,1,0,0,1,0,0,0,1,1,0,0,1,0,1,1,0,1,
        0,1,0,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,
        0,1,0,0,1,0,1,0,0,0,0,1,1,0,1,1,0,0,0,1,0,
        0,1,0,0,1,0,1,0,0,0,0,1,1,0,1,1,0,0,1,0,1,
        0,1,0,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,1,1,
        0,1,1,0,0,0,0,0,0,0,1,1,0,1,0,1,1,0,0,0,0,
        0,1,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,1,0,0,1,
        0,1,1,0,0,0,0,0,0,1,0,1,0,0,1,1,0,1,0,0,0,
        0,1,1,0,0,0,0,0,0,1,0,1,0,1,0,1,0,1,0,0,1,
        0,1,1,0,0,0,0,0,0,1,0,1,1,0,0,0,1,1,0,0,1,
        0,1,1,0,0,0,0,0,0,1,0,1,1,0,0,1,0,1,0,1,0,
        0,1,1,0,0,0,0,0,0,1,0,1,1,0,0,1,0,1,1,0,1,
        0,1,1,0,0,0,0,0,0,1,0,1,1,0,0,1,1,0,0,1,1,
        0,1,1,0,0,0,0,0,0,1,0,1,1,0,0,1,1,0,1,0,1,
        0,1,1,0,0,0,1,0,0,0,0,0,1,1,1,0,0,1,0,0,0,
        0,1,1,0,0,0,1,0,0,0,0,0,1,1,1,1,0,0,1,0,1,
        0,1,1,0,0,0,1,0,0,0,0,1,0,1,1,1,0,1,0,0,0,
        0,1,1,0,0,0,1,0,0,0,0,1,1,0,1,0,1,1,0,0,0,
        0,1,1,0,0,0,1,0,0,0,0,1,1,0,1,1,0,1,1,0,0,
        0,1,1,0,0,0,1,0,0,0,0,1,1,0,1,1,1,0,1,0,1,
        0,1,1,0,0,0,1,0,0,0,0,1,1,1,0,1,0,1,1,0,1,
        0,1,1,0,0,0,1,0,0,0,0,1,1,1,0,1,1,0,1,0,1,
        1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,1,0,0,
        1,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,
        1,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,1,0,1,0,1,
        1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,1,
        1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,1,0,1,
        1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,1,
        1,0,0,0,0,0,0,0,0,1,1,1,0,0,0,1,0,0,0,0,0,
        1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,1,
        1,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,1,
        1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,0,0,1,1,0,0,1,0,0,0,0,0,1,1,1,
        1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,0,0,1,1,0,1,
        1,0,0,0,0,0,0,0,1,1,0,1,0,0,0,1,0,0,0,1,0,
        1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,
        1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,1,
        1,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,1,0,0,0,1,
        1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,1,0,0,
        1,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,1,0,1,
        1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,0,1,1,0,0,
        1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,0,1,0,1,
        1,0,0,0,0,0,0,1,0,0,0,1,0,0,0,1,1,1,1,0,1,
        1,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,0,
        1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,0,0,1,
        1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,0,1,0,1,
        1,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,1,1,1,0,
        1,0,0,0,0,0,0,1,1,0,0,0,0,1,0,1,0,0,0,1,0,
        1,0,0,0,0,0,0,1,1,0,0,1,0,0,0,1,1,0,0,1,0,
        1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
        1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,
        1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,
        1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,
        1,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,1,0,1,
        1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,0,
        1,0,0,0,0,0,1,0,0,0,0,1,0,0,0,1,0,0,1,0,1,
        1,0,0,0,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,0,0,
        1,0,0,0,0,0,1,0,0,0,0,1,1,0,0,0,1,0,1,0,1,
        1,0,0,0,0,0,1,0,0,0,0,1,1,0,0,1,0,1,1,1,0,
        1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,0,1,1,0,0,0,1,1,0,1,0,1,
        1,0,0,0,0,0,1,0,0,0,1,1,0,1,0,1,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,0,
        1,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,1,
        1,0,0,0,0,0,1,0,0,1,0,1,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,0,0,0,0,
        1,0,0,0,0,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,
        1,0,0,0,0,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,
        1,0,0,0,0,0,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,
        1,0,0,0,0,0,1,0,0,1,1,1,0,1,0,1,0,0,0,0,1,
        1,0,0,0,0,0,1,0,0,1,1,1,1,0,0,1,0,0,0,1,0,
        1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,0,
        1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,
        1,0,0,0,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,1,
        1,0,0,0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,1,
        1,0,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,1,1,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,0,0,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,0,1,0,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,1,0,0,0,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,0,1,0,1,0,1,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,1,0,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,1,0,1,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,1,0,1,1,1,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,0,1,1,0,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,1,0,1,
        1,0,0,0,0,0,1,0,1,0,0,1,0,1,0,0,0,1,1,0,1,
        1,0,0,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,
        1,0,0,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,1,1,
        1,0,0,0,0,0,1,0,1,0,0,1,1,0,0,0,1,0,1,1,1,
        1,0,0,0,0,0,1,0,1,0,0,1,1,0,0,1,0,0,1,1,0,
        1,0,0,0,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,0,0,
        1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,0,1,0,0,0,1,
        1,0,0,0,0,0,1,1,0,0,0,0,0,1,0,1,0,0,1,0,1,
        1,0,0,0,0,0,1,1,0,0,0,0,0,1,1,1,0,0,1,0,1,
        1,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,0,1,1,0,0,
        1,0,0,0,0,0,1,1,0,0,0,0,1,0,0,0,1,0,1,0,1,
        1,0,0,0,0,0,1,1,0,0,0,0,1,1,0,1,0,0,1,1,1,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0,1,0,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,1,0,0,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,0,1,0,1,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,0,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,1,0,0,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,1,0,1,0,1,
        1,0,0,0,0,0,1,1,0,0,0,1,0,0,0,1,1,1,1,0,1,
        1,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,0,
        1,0,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,
        1,0,0,0,0,0,1,1,0,0,0,1,1,0,0,1,1,0,0,1,0,
        1,0,0,0,0,0,1,1,0,0,0,1,1,0,0,1,1,0,1,0,1,
        1,0,0,0,0,0,1,1,0,1,0,0,1,1,0,0,0,1,0,0,1,
        1,0,0,0,0,0,1,1,0,1,0,1,0,0,1,1,0,1,0,0,0,
        1,0,0,0,0,0,1,1,0,1,0,1,0,1,0,1,0,1,0,0,1,
        1,0,0,0,0,0,1,1,0,1,0,1,1,0,0,0,1,1,0,0,1,
        1,0,0,0,0,0,1,1,0,1,0,1,1,0,0,1,0,1,0,1,0,
        1,0,0,0,0,0,1,1,0,1,0,1,1,0,0,1,0,1,1,0,1,
        1,0,0,0,0,0,1,1,0,1,0,1,1,0,0,1,1,0,0,1,1,
        1,0,0,0,0,0,1,1,1,0,0,1,0,1,0,1,0,1,0,1,0,
        1,0,0,0,0,0,1,1,1,0,0,1,0,1,0,1,1,0,1,0,1,
        1,0,0,0,0,0,1,1,1,0,0,1,1,0,0,1,0,1,1,1,0,
        1,0,0,0,0,1,1,0,0,1,0,1,0,0,0,1,0,0,0,1,0,
        1,0,0,0,0,1,1,0,0,1,0,1,0,0,0,1,0,0,1,0,1,
        1,0,0,0,0,1,1,0,1,0,0,1,0,0,0,1,0,0,1,1,0,
        1,0,0,0,0,1,1,1,0,0,0,1,0,0,0,1,1,0,1,0,1,
        1,0,0,0,0,1,1,1,1,0,0,1,0,1,0,1,1,0,1,0,1,
        1,0,0,0,1,0,0,0,1,1,0,1,0,0,0,1,0,0,1,0,1,
        1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,0,0,0,0,
        1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,0,
        1,0,0,0,1,0,1,0,0,1,0,0,1,0,0,0,0,0,0,0,1,
        1,0,0,0,1,0,1,0,0,1,0,1,0,0,0,1,0,0,0,1,1,
        1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,0,0,1,0,
        1,0,0,0,1,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,1,
        1,0,0,0,1,0,1,1,0,0,0,0,0,0,1,1,0,0,0,0,0,
        1,0,0,0,1,0,1,1,0,0,0,0,1,0,0,0,1,0,0,0,1,
        1,0,0,0,1,0,1,1,0,0,0,0,1,0,0,1,0,0,0,1,0,
        1,0,0,0,1,0,1,1,0,0,0,1,0,0,0,1,0,0,0,0,0,
        1,0,0,0,1,0,1,1,0,0,0,1,0,0,0,1,0,0,0,0,1,
        1,0,0,1,0,0,0,0,1,1,0,1,0,0,0,0,1,0,1,0,1,
        1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,1,0,1,0,1,
        1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,1,1,
        1,0,0,1,0,0,0,1,1,1,0,1,0,0,0,1,1,0,1,1,1,
        1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,0,0,1,0,1,
        1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,0,0,0,
        1,0,0,1,0,0,1,0,0,1,0,0,0,0,1,0,0,0,1,0,1,
        1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,0,0,0,0,0,
        1,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,0,1,1,1,
        1,0,0,1,0,0,1,0,1,0,0,0,1,0,0,0,0,0,1,1,0,
        1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,0,1,0,0,1,1,
        1,0,0,1,0,0,1,0,1,1,0,1,1,0,0,0,1,0,1,1,1,
        1,0,0,1,0,0,1,1,0,0,0,0,0,0,1,0,1,0,0,0,0,
        1,0,0,1,0,0,1,1,0,0,0,0,0,0,1,1,0,0,1,0,0,
        1,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,0,1,1,0,0,
        1,0,0,1,0,0,1,1,0,0,0,1,0,0,0,0,1,0,1,0,1,
        1,0,0,1,0,0,1,1,0,0,0,1,0,0,0,1,1,0,1,1,1,
        1,0,0,1,0,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,1,
        1,0,0,1,0,0,1,1,0,1,0,1,1,0,0,1,1,0,1,1,1,
        1,0,0,1,0,0,1,1,1,0,0,1,0,1,0,1,1,0,1,1,1,
        1,0,1,0,0,0,0,0,1,1,0,1,0,0,0,1,1,0,1,0,1,
        1,0,1,0,0,0,1,0,0,0,1,1,1,0,0,1,1,0,1,0,0,
        1,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,
        1,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,
        1,0,1,0,0,0,1,0,0,1,0,1,1,0,0,1,1,0,1,0,1,
        1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,0,
        1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,0,1,0,
        1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,
        1,0,1,0,0,0,1,0,1,0,0,0,1,0,0,1,0,0,1,1,0,
        1,0,1,0,0,0,1,1,0,0,0,0,0,0,1,1,1,0,0,0,0,
        1,0,1,0,0,0,1,1,0,0,0,0,0,1,0,0,1,0,0,0,1,
        1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,0,0,1,0,0,
        1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,0,0,1,0,1,
        1,0,1,0,0,0,1,1,0,0,0,0,1,0,0,1,1,0,0,1,0,
        1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,0,0,
        1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1,1,0,0,0,0,
        1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1,1,0,0,0,1,
        1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1,1,0,1,0,1,
        1,0,1,0,0,0,1,1,0,0,0,1,0,0,0,1,1,1,1,0,1,
        1,1,0,0,0,0,0,1,0,1,0,0,1,0,0,0,1,0,0,0,1,
        1,1,0,0,0,0,0,1,0,1,0,1,1,0,0,1,1,0,1,0,1,
        1,1,0,0,0,0,1,0,0,0,1,0,0,1,1,0,0,0,0,0,0,
        1,1,0,0,0,0,1,0,0,0,1,0,1,1,0,0,0,0,1,0,1,
        1,1,0,0,0,0,1,0,0,0,1,1,0,1,0,1,0,0,0,1,0,
        1,1,0,0,0,0,1,0,0,0,1,1,0,1,0,1,0,0,1,0,1,
        1,1,0,0,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,1,0,
        1,1,0,0,0,0,1,0,0,0,1,1,1,1,0,1,0,0,1,0,0,
        1,1,0,0,0,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,0,
        1,1,0,0,0,0,1,0,0,1,0,0,1,1,0,0,0,0,0,0,1,
        1,1,0,0,0,0,1,0,0,1,0,1,0,0,1,1,0,0,0,0,0,
        1,1,0,0,0,0,1,0,0,1,0,1,0,1,0,1,0,0,0,1,1,
        1,1,0,0,0,0,1,0,0,1,0,1,1,0,0,0,1,0,0,0,1,
        1,1,0,0,0,0,1,0,0,1,0,1,1,0,0,1,0,0,0,1,0,
        1,1,0,0,0,0,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,
        1,1,0,0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,
        1,1,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,0,1,0,
        1,1,0,0,0,0,1,0,1,0,0,0,1,1,0,0,0,0,1,0,1,
        1,1,0,0,0,0,1,0,1,0,0,1,0,0,1,0,1,0,0,0,0,
        1,1,0,0,0,0,1,0,1,0,0,1,0,0,1,1,0,0,1,0,0,
        1,1,0,0,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,1,1,
        1,1,0,0,0,0,1,0,1,0,0,1,1,0,0,0,0,0,0,0,0,
        1,1,0,0,0,0,1,0,1,0,0,1,1,0,0,0,1,0,0,1,0,
        1,1,0,0,0,0,1,0,1,0,0,1,1,0,0,0,1,0,1,0,1,
        1,1,0,0,0,0,1,0,1,0,0,1,1,0,0,1,0,0,1,1,0,
        1,1,0,0,0,0,1,0,1,1,0,1,1,1,0,1,0,0,1,1,1,
        1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,0,1,0,0,0,1,
        1,1,0,0,0,0,1,1,0,0,0,0,1,1,0,1,0,0,0,1,0,
        1,1,0,0,0,0,1,1,0,0,0,1,0,0,1,1,0,0,0,0,0,
        1,1,0,0,0,0,1,1,0,0,0,1,0,0,1,1,1,0,0,0,0,
        1,1,0,0,0,0,1,1,0,0,0,1,0,0,1,1,1,0,1,0,1,
        1,1,0,0,0,0,1,1,0,0,0,1,0,1,0,0,0,1,0,0,0,
        1,1,0,0,0,0,1,1,0,0,0,1,0,1,0,1,0,0,0,0,0,
        1,1,0,0,0,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,1,
        1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,0,1,0,1,0,1,
        1,1,0,0,0,0,1,1,0,0,0,1,1,0,0,1,1,0,0,1,0,
        1,1,0,0,0,0,1,1,0,1,0,1,1,1,0,1,1,0,0,1,1,
        1,1,1,0,0,0,1,0,1,1,0,1,0,1,1,1,0,1,1,0,1,
        1,1,1,0,0,0,1,0,1,1,0,1,1,0,1,0,1,1,1,0,1,
        1,1,1,0,0,0,1,1,0,0,1,1,0,1,1,1,1,1,0,0,0};



void converte_inteiro_base(int num, int *resultado, int base){
	int j = 0;
	
	while(num != 0){
		resultado[j] = num % base;
		num = num / base;
		j++;
	}
	
}

void gerar_orientacao(char** mat_adj, char** mat_adj_orientada, int n_vertices, int num_orientacao, int n_arestas){
	int i, j, cont = 0;
	int orientacao[n_arestas];
	
	for(i = 0; i < n_arestas; i++)
		orientacao[i] = 0;
	
	for(i = 0; i < n_vertices; i++)
		for(j = 0;j < n_vertices; j++)
			mat_adj_orientada[i][j] = 0;
	
	converte_inteiro_base(num_orientacao, orientacao, 2);
	
	for(i = 0; i < n_vertices; i++){
		for(j = i + 1; j < n_vertices; j++){
			if(mat_adj[i][j] != 0){
				if (orientacao[cont] == 0){
					mat_adj_orientada[i][j] = mat_adj[i][j];
					mat_adj_orientada[j][i] = -mat_adj[i][j];
				} else{
					mat_adj_orientada[i][j] = -mat_adj[i][j];
					mat_adj_orientada[j][i] = mat_adj[i][j];
				}
				cont++;
			}
		}
	}
}

void limpa_memoria_matriz (char** mat_adj){
	free(*mat_adj);
	free(mat_adj);
}

char** cria_matriz (int n_vertices) {
	char* valores = (char *) malloc ((n_vertices * n_vertices) * sizeof(char));
	char** linhas = (char **) malloc (n_vertices * sizeof(char*));
	int i;
	
	if((valores == NULL) || (linhas == NULL))
		exit(EXIT_FAILURE);
	
	for(i = 0; i < n_vertices; i++)
		linhas[i] = valores + i*n_vertices;
	
	return linhas;
}

void orienta_torneio (int n_torneio) {
	int i, j, cont = 0;
	
	for(i = 0; i < 7; i++){
		for(j = i + 1; j < 7; j++){
            if(NISOT7[cont + (21 * n_torneio)] == 0){
                t114[i][j]= 1;
                t114[j][i]= -1;
            }
            else{
                t114[i][j] = -1;
                t114[j][i] = 1;
            }
            
            cont++;
        }
    }	
}

int take2(int n, int el, vector<int> v, int n_vertices, int n_cores2, char** mat_adj_orientada, char** torneio) {

	v.push_back(el);
	
	int i, p, size = v.size();
	
	for(p = 0; p < size - 1; p++){
		if(mat_adj_orientada[p][size - 1] != 0) {
			if(torneio[v[p]][v[size - 1]] != mat_adj_orientada[p][size - 1])
				return 0;
		}
	}
	
	if(n == n_vertices - 1){
		
		
		return 1; 
	}
	

	for(i = 0; i < n_cores2; i++) {
		if(take2(n + 1, i, v, n_vertices, n_cores2, mat_adj_orientada, torneio) == 1)
			return 1;
		
	}
	
	return 0;
}

int main(int argc, char *argv[]) {
	int n_vertices, n_grafos, i, j, l, k, p, r, sim, p1, r1, p2, r2;
	
	char**mat_adj;
	char**mat_adj_orientada;
	char** torneio7 = cria_matriz(7);
	vector<int> v;
	string name;
	int n_torneios_l = 300;
	char torneios[300];
	int torneios2[300] = {57,58,61,62,64,65,69,71,72,73,74,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,99,101,102,103,104,105,109,110,111,112,113,114,115,116,117,118,119,121,122,123,124,125,126,127,128,129,130,131,132,133,135,136,138,139,141,142,146,148,150,151,152,153,154,155,156,157,159,160,161,162,163,164,165,166,167,168,169,170,171,180,181,182,183,184,186,187,188,189,190,192,193,194,195,196,197,198,199,201,203,204,205,207,208,210,211,212,213,214,215,216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,247,251,254,255,256,260,261,263,264,265,271,272,274,275,276,280,281,282,294,296,297,298,299,300,301,302,303,305,306,307,308,309,311,312,313,314,319,321,322,323,324,325,326,327,328,329,330,332,333,334,335,336,341,342,344,345,347,348,349,350,351,352,353,354,355,356,357,358,359,360,361,362,363,365,366,367,368,369,370,371,372,373,374,376,377,378,379,380,381,382,385,386,387,388,389,390,391,392,393,394,395,396,397,398,399,401,403,404,405,406,407,409,410,413,414,415,416,417,418,419,420,421,422,423,425,426,427,428,429,432,433,434,435,436,438,439,440,441,442,443,444,445,446,447,449,450,451,452,453};
	
	for(i = 0; i < n_torneios_l; i++)
		torneios[i] = 0;
	
	sscanf(argv[1], "%d", &n_vertices);
	sscanf(argv[2], "%d", &n_grafos);
	
	mat_adj = cria_matriz(n_vertices);
	mat_adj_orientada = cria_matriz(n_vertices);
	
	char entrada[n_grafos][n_vertices][n_vertices];
	
	for(l = 0; l < n_grafos; l++){
	
		getline(cin, name);
		getline(cin, name);
		
		for(i = 0; i < n_vertices; i++) {
			for(j = 0; j < n_vertices; j++) {
				cin >> k;
				
				entrada[l][i][j] = k;
			}
		}
		
		getline(cin, name);
	}
	
	for(l = 0; l < n_grafos; l++){
		
		for(i = 0; i < n_vertices; i++)
			for(j = 0; j < n_vertices; j++)
				mat_adj[i][j] = entrada[l][i][j];
				
		
		for(p = 0; p < pow(2, ((n_vertices * 3) / 2)); p++){
			gerar_orientacao(mat_adj, mat_adj_orientada, n_vertices, p, ((n_vertices * 3) / 2));
			
			for(r = 0; r < n_torneios_l; r++){
				if(torneios[r] == 0){
					orienta_torneio(torneios2[r]);
					
					for(p1 = 0; p1 < 7; p1++)
						for(r1 = 0; r1 < 7; r1++)
							torneio7[p1][r1] = t114[p1][r1];
							
					for(p2 = 0; p2 < n_vertices; p2++){
						for(r2 = 0; r2 < n_vertices; r2++){
							if(mat_adj_orientada[p2][r2] == 1){
								mat_adj_orientada[p2][r2] = 0;
								mat_adj_orientada[r2][p2] = 0;
								
								sim = 0;
				
								for(k = 0; k < 7; k++)
									if(take2(0, k, v, n_vertices, 7, mat_adj_orientada, torneio7) == 1) {
										sim = 1;
										break;
									}
					
								v.clear();
								
								if(sim == 0){
									torneios[r] = 1;
									
									printf("%d\n", torneios2[r]);
									fflush(stdout);
									
									for(p1 = 0; p1 < n_vertices; p1++){
										for(r1 = 0; r1 < n_vertices; r1++){
											printf("%2d ", mat_adj_orientada[p1][r1]);
											fflush(stdout);
										}
										printf("\n");
										fflush(stdout);
									}
									
									mat_adj_orientada[p2][r2] = 1;
									mat_adj_orientada[r2][p2] = -1;
									break;
								}
								
								mat_adj_orientada[p2][r2] = 1;
								mat_adj_orientada[r2][p2] = -1;
							}
						}
						if(sim == 0)
							break;	
					}
					
				}
			}
			
		}
		
	}
	
	k = 0;
	
	for(i = 0; i < n_torneios_l; i++)
		if(torneios[i] == 1)
			k++;
	
	printf("Número de torneios remanescentes: %d\n", n_torneios_l - k);
	
	for(i = 0; i < n_torneios_l; i++)
		if(torneios[i] == 0)
			printf("%d ", torneios2[i]);
	
	printf("\n");
	
	limpa_memoria_matriz(mat_adj);
	limpa_memoria_matriz(mat_adj_orientada);
	limpa_memoria_matriz(torneio7);	
	return 0;
}


