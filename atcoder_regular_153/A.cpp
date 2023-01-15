#include <bits/stdc++.h>

using namespace std;

int main(){
    string bi = "110000000";
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++){
        if(bi[7] != '9') bi[7] += 1;
        else if(bi[8] != '9' && bi[6] != '9'){
            bi[7] = '0';
            bi[8] += 1; bi[6] += 1;
        }else if(bi[4] != '9' && bi[5] != '9'){
            bi[8] = '0'; bi[6] = '0'; bi[7] = '0';
            bi[4] += 1; bi[5] += 1;
        }else if(bi[3] != '9'){
            bi[4] = '0'; bi[5] = '0'; bi[8] = '0'; bi[6] = '0'; bi[7] = '0';
            bi[3] += 1;
        }else if(bi[2] != '9'){
            bi[3] = '0'; bi[4] = '0'; bi[5] = '0'; bi[8] = '0'; bi[6] = '0'; bi[7] = '0';
            bi[2] += 1;
        }else if(bi[0] != '9' && bi[1] != '9'){
            bi[2] = '0'; bi[3] = '0'; bi[4] = '0'; bi[5] = '0'; bi[8] = '0'; bi[6] = '0'; bi[7] = '0';
            bi[0] += 1; bi[1] += 1;
        }
    }
    std::cout << bi << endl;
    return 0;
}


