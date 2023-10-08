#include <iostream>
/*
int sum(int a, int b){
    return a + b;
}
int sub(int a, int b){
    return a - b;
}

int a = 0;

void scope(){
    int a = 5; 

    a = 3;
    std::cout << a << std::endl; // 3
    
    {
        int a = 4;
        std::cout << a << std::endl; // 4
        a = 6;
        std::cout << a << std::endl; // 6
    }

    std::cout << a << std::endl; // 3

}

void cykly(){
    for(int i = 0; i < 10; i++){
        std::cout << i << std::endl;
    }

    int i = 0;
    while(i < 10){
        std::cout << i << std::endl;
        i++;
    }

    i = 0;
    do{
        std::cout << i << std::endl;
        i++;
    }while(i < 10);
}*/
void stars(unsigned int star){
    while(star != 0){
        std::cout << "⬜";
        star--;
    }
}

void rectangle(unsigned int height,unsigned int width){
    std::cout << std::endl;
    std::string str= "";
    for(unsigned int i = 0; i < width; i++){
        str += "⬜";
    }
    for(unsigned int i = 0; i < height; i++){
        std::cout << str << std::endl;
    }
}

void lpyramid(unsigned int size){
    std::cout << std::endl;
    std::string lpyr = "";
    for(unsigned int i = 0; i < size; i++){
        lpyr += "⬜";
        std::cout << lpyr << std::endl;
    }
}
void spyramid(unsigned int size){
    std::cout << std::endl;
    std::string lpyr = "";
    for(unsigned int i = 0; i < size; i++){
        lpyr += "⬜";
        std::cout << lpyr << std::endl;
    }
    for(unsigned int i = 0; i < size; i++){
        int numb = size-i;
        lpyr = "";
        while(numb < 0){
            lpyr += "⬜";
            numb--;
        }
        std::cout << lpyr << std::endl;
    }
}
void cpyramid(unsigned int size){
    std::cout << std::endl;
    std::string cpyr= "";

    for(unsigned i = 0; i < size; i++){
        // cpyr = (i+1)*size;
        std::cout << std::endl;
    }
}

unsigned int num0 = 0;
unsigned int num1 = 0;
int main(){
    // std::cout << "How many stars? ";
    // std::cin >> num1;
    // stars(num1);
    // std::cout << std::endl;
    // rectangle(6,9);
    // std::cout << std::endl;
    // lpyramid(10);
    spyramid(5);
    return 0;
}
