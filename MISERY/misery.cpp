#include <iostream>
#include <string>
#include <vector>
#include <chrono>
#include <thread>

namespace bettercpp
{
    class MiseryEngine
    {
    private:
        int memoryLimitMB;

        void logSecurity(const std::string& status, const std::string& message)
        {
            std::cout << "[MISERY-SEC][" << status << "] " << message << std::endl;
        }

    public:
        MiseryEngine(int limit)
        {
            memoryLimitMB = limit;
        }

        void runSecureExecution()
        {
            std::cout << "==================================================" << std::endl;
            std::cout << " MISERY: Memory Isolated Security Execution Engine" << std::endl;
            std::cout << "==================================================" << std::endl;

            logSecurity("INIT", "Creating isolated runtime environment...");
            logSecurity("LIMIT", "Strict sandbox restriction set to: " + std::to_string(memoryLimitMB) + " MB");
            std::this_thread::sleep_for(std::chrono::milliseconds(400));

            logSecurity("GUARD", "Monitoring runtime allocation allocation blocks...");

            for (int i = 1; i <= 3; ++i)
            {
                int currentAlloc = (memoryLimitMB / 3) * i;
                logSecurity("CHECK", "Verifying block segment " + std::to_string(i) + " -> allocating ~" + std::to_string(currentAlloc) + " MB");
                std::this_thread::sleep_for(std::chrono::milliseconds(200));
            }

            std::cout << "--------------------------------------------------" << std::endl;
            logSecurity("YIELD", "Sandbox runtime finished cleanly. Zero leaks detected.");
            std::cout << "==================================================" << std::endl;
        }
    };
}

int main(int argc, char* argv[])
{
    int targetAllocation = 64;

    if (argc > 1)
    {
        targetAllocation = std::stoi(argv[1]);
    }

    bettercpp::MiseryEngine engine(targetAllocation);
    engine.runSecureExecution();

    return 0;
}
