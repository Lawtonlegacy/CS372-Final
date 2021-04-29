// Worker.h
// Robert Lawton
// 28 April 2021
// Header for Worker - Chain Responsibility Design Pattern Example

#ifndef FILE_WORKER_H_INCLUDED
#define FILE_WORKER_H_INCLUDED

#include <iostream>
#include <string>
#include <memory>

// Package
// Struct to pass to Worker
struct Package {
    std::string recipient;
    std::string item;
    std::string address;
    int zipCode; 
};

// Worker
// Base class. Passes the package down the chain.
class Worker {
private:
    std::shared_ptr<Worker> nextWorker;

public:
    Worker();
    void setNextWorker(std::shared_ptr<Worker>);
    void addWorker(std::shared_ptr<Worker>);
    virtual void routePackage(Package &);
};
#endif  // #ifndef FILE_WORKER_H_INCLUDED