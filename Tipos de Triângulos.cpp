#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>


int main() {
    double a, b, c;
    double vec[3];
    int i = 0;
    scanf("%lf %lf %lf", &vec[0], &vec[1], &vec[2]);
    std::vector<double> myvector (vec,vec + 3);
    std::sort (myvector.begin(), myvector.end());

    for(std::vector<double>::iterator it=myvector.begin();it!=myvector.end();++it){
        vec[i] = *it;
        i++;
    }
    a = vec[2];
    b = vec[1];
    c = vec[0];

    if(a >= (b+c)) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        
        if ((a*a) == ((b*b) + (c*c)))
            printf("TRIANGULO RETANGULO\n");
        else if ((a*a) > ((b*b) + (c*c)))
            printf("TRIANGULO OBTUSANGULO\n");
        else if ((a*a) < ((b*b + c*c)))
            printf("TRIANGULO ACUTANGULO\n");

        if ((a==b) && (b==c))
            printf("TRIANGULO EQUILATERO\n");
        else if((a==b) || (b==c))
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}
