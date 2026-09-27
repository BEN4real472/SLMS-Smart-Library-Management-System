#include "LibrarySystem.h"
#include <iostream>

LibrarySystem::LibrarySystem()
    : running(false)
{
}

void LibrarySystem::startSystem()
{
    running = true;

    std::cout << "\n========================================\n";
    std::cout << " SMART LIBRARY MANAGEMENT SYSTEM (SLMS)\n";
    std::cout << "========================================\n";
    std::cout << "System started successfully.\n";
}

void LibrarySystem::shutdownSystem()
{
    running = false;

    std::cout << "\nShutting down the Smart Library "
        << "Management System...\n";

    std::cout << "System shutdown successful.\n";
}

bool LibrarySystem::isRunning() const
{
    return running;
}

void LibrarySystem::displaySystemInformation() const
{
    std::cout << "\n===== SYSTEM INFORMATION =====\n";
    std::cout << "System: Smart Library Management System\n";
    std::cout << "Application Type: C++ Console Application\n";

    if (running)
    {
        std::cout << "Status: Running\n";
    }
    else
    {
        std::cout << "Status: Stopped\n";
    }
}