// main.cpp
// Robert Lawton
// 28 April 2021
// Test program for DeliveryWorker

#include "DeliveryWorker.h"

int main(){
    
    // Make a few DeliveryWorkers for Milwaukee County
    auto delivererMilwaukee      = DeliveryWorker("Milwaukee", 53202);
    auto delivererDowntown       = DeliveryWorker("Downtown", 53206);
    auto delivererWestAllis      = DeliveryWorker("West Allis", 53214);
    auto delivererOakCreek       = DeliveryWorker("Oak Creek", 53154);
    auto delivererHalesCorners   = DeliveryWorker("Hales Corners", 53130);
    auto delivererStFrancis      = DeliveryWorker("St. Francis", 53235);
    auto delivererSouthMilwaukee = DeliveryWorker("South Milwaukee", 53172);
    auto delivererWauwatosa      = DeliveryWorker("Wauwatosa", 53226);
    auto delivererWhitefishBay   = DeliveryWorker("Whitefish Bay", 53217);
    auto delivererCudahy         = DeliveryWorker("Cudahy", 53110);
    auto delivererFranklin       = DeliveryWorker("Franklin", 53132);
    auto delivererGreendale      = DeliveryWorker("Greendale", 53129);
    auto delivererGreenfield     = DeliveryWorker("Greenfield", 53228);

    // Chain the DeliveryWorkers together by adding them to a root node
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererDowntown));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererWestAllis));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererOakCreek));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererHalesCorners));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererStFrancis));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererSouthMilwaukee));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererWauwatosa));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererWhitefishBay));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererCudahy));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererFranklin));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererGreendale));
    delivererMilwaukee.addWorker(std::make_shared<DeliveryWorker>(delivererGreenfield));

    // Create some random but plausible Packages
    Package order0  = {"David Branson", "Bike Tires", "1210 Dude Ave, Milwaukee, WI", 53202};
    Package order1  = {"Panama Jack", "Whip", "3232 Livid Loop, Milwaukee, WI", 53206};
    Package order2  = {"Jacob Hoarder", "Boxes", "110 Frigid Lane, West Allis, WI", 53214};
    Package order3  = {"Ben Wennington", "Shoes", "1234 Leslie St, Oak Creek, WI", 53154};
    Package order4  = {"Jim Nelson", "Staplers", "22 Clingers Court, Hales Corners, WI", 53130};
    Package order5  = {"Kendra Finn", "Headbands", "154 Singers St, St. Francis, WI", 53235};
    Package order6  = {"Lisa Brown", "Bracelet", "23 Bangor St, South Milwaukee, WI", 53172};
    Package order7  = {"Andrew Kravitz", "Sleeping Bag", "513 Vector Rd, Wauwatosa, WI", 53226};
    Package order8  = {"Russell Wall", "Fishing Pole", "63 Spearhead Lane, Whitefish Bay, WI", 53217};
    Package order9  = {"Deidre Lemon", "Bunch of Bananas", "88 Sleepy St, Cudahy, WI", 53110};
    Package order10 = {"Ben Wilson", "Basketball", "521 Light Way, Franklin, WI", 53132};
    Package order11 = {"Clevland Simmons", "Foam Roller", "77 Moon Rd, Greendale, WI", 53129};
    Package order12 = {"Samantha Lime", "Watermelons", "43 17th Ave, Greenfield, WI", 53228};
    Package order13 = {"Kenny Smith", "Baloons", "895 Array Ave, Wauwatosa, WI", 53226};
    Package order14 = {"Kelton Lawrence", "Helmet", "672 50th St, St. Francis, WI",53235};
    Package order15 = {"Bryan Bauer", "Shower Head", "906 Greenmount Lane, Whitefish Bay, WI", 53226};
    Package order16 = {"Jordy Hollins", "Footbal", "228 Cheesewheel Ave, Oak Creek, WI", 53154};
    Package order17 = {"Cletus Termin", "Deep Fryer", "621 HailNaw Boulevard, Hales Corners, WI", 53130};
    Package order18 = {"Josh Jones", "Boxing Gloves", "2341 Finteck St, Milwaukee, WI", 53202};


    std::cout << "************************************** BEGINNING PACKAGE ROUTING **************************************\n\n\n";

    // Route Packages
    delivererMilwaukee.routePackage(order0);
    delivererMilwaukee.routePackage(order10);
    delivererMilwaukee.routePackage(order7);
    delivererMilwaukee.routePackage(order17);
    delivererMilwaukee.routePackage(order2);
    delivererMilwaukee.routePackage(order11);
    delivererMilwaukee.routePackage(order5);
    delivererMilwaukee.routePackage(order1);
    delivererMilwaukee.routePackage(order15);
    delivererMilwaukee.routePackage(order18);
    delivererMilwaukee.routePackage(order9);
    delivererMilwaukee.routePackage(order4);
    delivererMilwaukee.routePackage(order14);
    delivererMilwaukee.routePackage(order3);
    delivererMilwaukee.routePackage(order6);
    delivererMilwaukee.routePackage(order16);
    delivererMilwaukee.routePackage(order8);
    delivererMilwaukee.routePackage(order12);
    delivererMilwaukee.routePackage(order13);

    return 0;
}