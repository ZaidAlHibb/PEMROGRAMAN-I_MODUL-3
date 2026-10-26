#include <stdio.h>

int main(){
    int x, y, z, simpan;
    scanf("%d %d %d",&x,&y,&z);

    if(x > y){
            simpan = x;
            x = y;
            y = simpan;
        }
        if(y > z){
            simpan = y;
            y = z;
            z = simpan;
        }
        if(x > y){
            simpan = x;
            x = y;
            y = simpan;
        }

        printf("%d %d %d", x, y, z);
        return 0;
    }
