// DeliveryWorker.cpp
// Robert Lawton
// 28 April 2021
// Source for DeliveryWorker - Chain Responsibility Design Pattern Example

#include "DeliveryWorker.h"

// Constructor
DeliveryWorker::DeliveryWorker(std::string area, int zip)
: region(area), localZip{zip} {};

// routePackage
// Takes a Package struct.
// If Package's zipCode matches DeliveryWorker's then
// print package's recipient, contents, and destination.
// Otherwise, ask base class to route package to next worker in chain.
void DeliveryWorker::routePackage(Package & package){
    if(package.zipCode == localZip){
        std::cout << "Routing package to " << package.recipient << " who ordered "
        << package.item << " for delivery to " << package.address << " " << localZip << "\n\n";
    }else{
        Worker::routePackage(package);
    }
}