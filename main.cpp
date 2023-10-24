#include <thread>
#include <iostream>
#include <string>
#include <atomic>
#include <mutex>

std::mutex mutex;

std::atomic_int x = 0;

void do_stuff(int num){
    std::cout << "Waiting for mutex: " << num << std::endl;
    std::scoped_lock lock(mutex);
    std::cout << "Mutex is mine: " << num << std::endl;
    std::cout << "Mutex is unlocked: " << num << std::endl;
}

void say_hello(){
    std::cout << "hallo" << std::endl;
    for(int i = 0; i < 50000; i++){
        x++;
    }
    
}

void say_something(std::string s){
    std::cout << s << std::endl;
    for(int i = 0; i < 50000; i++){
        x++;
    }
}


int main(){
    std::cout << "Egg\n" << std::endl;
    std::thread t(do_stuff, 1);
    std::thread t2(do_stuff, 2);
    t.join();
    t2.join();
    std::cout << x << std::endl;
    return 0;
}