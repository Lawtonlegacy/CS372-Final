// DeliveryWorker.h
// Robert Lawton
// 28 April 2021
// Header for DeliveryWorker - Chain Responsibility Design Pattern Example

#ifndef FILE_DELIVERYWORKER_H_INCLUDED
#define FILE_DELIVERYWORKER_H_INCLUDED

#include "Worker.h"

// DeliveryWorker
// Knows the region and zip code.
// Will take any Package that matches the zip code.
// Prints the recipient destination.
class DeliveryWorker : public Worker {
private:
    std::string region;
    int localZip;

public:
    DeliveryWorker(std::string, int zip);
    void routePackage(Package &);
};
#endif // #ifndef FILE_DELIVERYWORKER_H_INCLUDED