#include <iostream>
#include <unistd.h>
#include "cpu.h"
#include "memory.h"
#include "process.h"

int main() {
    while (true) {
        system("clear");
        std::cout << "=== SYSTEM MONITOR TOOL ===\n";
        std::cout << "CPU Usage: " << getCPUUsage() << " %\n";
        std::cout << "Memory Usage: " << getMemoryUsage() << " %\n";
        std::cout << "\nPID\tProcess Name\tMemory\n";
        auto processes = getProcesses();
        for (int i = 0; i < 10 && i < processes.size(); ++i) {
            std::cout << processes[i].pid << "\t" 
                      << processes[i].name << "\t"
                      << processes[i].mem << "\n";
        }
        sleep(2);
    }
}
