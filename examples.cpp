#include <iostream>
#include <string>

void stars(int star){
    while(star != 0){
        std::cout << "⬜";
        star--;
    }
}

void rectangle(int height,int width){
    std::cout << std::endl;
    std::string str= "";
    for(int i = 0; i < width; i++){
        str += "⬜";
    }
    for(int i = 0; i < height; i++){
        std::cout << str << std::endl;
    }
}

void lpyramid(int size){
    std::cout << std::endl;
    std::string lpyr = "";
    for(int i = 0; i < size; i++){
        lpyr += "⬜";
        std::cout << lpyr << std::endl;
    }
}
void spyramid(int size){
    std::cout << std::endl;
    std::string lpyr = "";
    for(int i = 0; i < size-1; i++){
        lpyr += "⬜";
        std::cout << lpyr << std::endl;
    }
    for(int i = 0; i < size; i++){
        int numb = size-i;
        lpyr = "";
        while(numb > 0){
            lpyr += "⬜";
            numb--;
        }
        std::cout << lpyr << std::endl;
    }
}
void cpyramid(int size){
    std::cout << std::endl;
    std::string cpyr= "";

    for(int i = 0; i < size; i++){
        int b = size - i;
        for(int i = 0; i < b-1; i++){
            std::cout << "  ";
        }
        for(int i= 0; i <= (size-b)*2; i++){
            std::cout << "⬜";
        }
        std::cout << std::endl;
    }
}

int num0 = 0;
int num1 = 0;
int main(){
    std::cout << "How many stars: ";
    std::cin >> num1;
    stars(num1);
    std::cout << "\nWidth of your rectangle: ";
    std::cin >> num1;
    std::cout << "\nHeight of your rectangle: ";
    std::cin >> num0;
    rectangle(num0,num1);
    std::cout << "\nLevels of your triangle: ";
    std::cin >> num0;
    lpyramid(num0);
    std::cout << "\nLevels of your triangle: ";
    std::cin >> num0;
    spyramid(num0);
    std::cout << "\nLevels of your triangle: ";
    std::cin >> num0;
    cpyramid(num0);
    return 0;
}
