///2, 3, 4, 9, 12, 13
#include <iostream>
#include <thread>
#include <cstdlib>

void print_message_function(const std::string& message);

int main() {
    std::thread thread1(print_message_function, "Thread 1");
    std::thread thread2(print_message_function, "Thread 2");

    thread1.join();
    thread2.join();

    std::cout << "Thread 1 has completed.\n";
    std::cout << "Thread 2 has completed.\n";

    return 0;
}

void print_message_function(const std::string& message) {
    std::cout << message << std::endl;
}
