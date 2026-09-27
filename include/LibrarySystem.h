#pragma once

class LibrarySystem
{
private:
    bool running;

public:
    LibrarySystem();

    void startSystem();
    void shutdownSystem();

    bool isRunning() const;

    void displaySystemInformation() const;
};