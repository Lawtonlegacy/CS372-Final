// Worker.cpp
// Robert Lawton
// 28 April 2021
// Source for Worker - Chain Responsibility Design Pattern Example

#include "Worker.h"

// Constructor
Worker::Worker() : nextWorker{ nullptr } {};

// setNextWorker
// Takes a shared pointer to the next Worker in the chain.
// Updates the nextWorker variable.
void Worker::setNextWorker(std::shared_ptr<Worker> worker) {
    nextWorker = worker;
}

// addWorker
// Takes a shared pointer to a Worker.
// Follows the chain of Responsibility to the end then adds the Worker.
void Worker::addWorker(std::shared_ptr<Worker> worker){
    if(nextWorker){
        nextWorker->addWorker(worker);
    }else{
        setNextWorker(worker);
    }
}

// routePackage
// Takes a Package Struct.
// Passes the Package down the chain until a Worker handles it or it reaches the end.
void Worker::routePackage(Package & package){
    if(nextWorker){
        nextWorker->routePackage(package);
    }else{
        std::cout << "Failed to route package\n";
    }
}