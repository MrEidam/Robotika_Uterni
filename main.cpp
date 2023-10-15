#include <iostream>

struct Vector5{
    int x;
    int y;
    int z;
    int w;
    int v;
};

Vector5 sum(const Vector5& a, const Vector5& b){
    return {a.x+b.x, a.y+b.y, a.z+b.z, a.w+b.w, a.v+b.v};
}

Vector5 diff(const Vector5& a, const Vector5& b){
    return {a.x-b.x, a.y-b.y, a.z-b.z, a.w-b.w, a.v-b.v};
}

void print(const Vector5& a){
    std::cout << a.x << ", " << a.y << ", " << a.z << ", " << a.w << ", " << a.v << std::endl;
}

int abs(int& x){
    if(x<0){return x*(-1);}else{return x;}
}

int ham(const Vector5& a, const Vector5& b){
    int x = abs(a.x-b.x);
    int y = abs(a.y-b.y);
    int z = abs(a.z-b.z);
    int w = abs(a.w-b.w);
    int v = abs(a.v-b.v);
    
    return x+y+z+w+v;
}

int main(){
    Vector5 a{4,5,-2,7,0};
    Vector5 b{2,7,6,9,-1};

    Vector5 c = sum(a, b);
    print(c);

    Vector5 d = diff(a, b);
    print(d);

    int hambrbr = ham(a, b);
    std::cout << "Hambrich: " << hambrbr << std::endl;
}