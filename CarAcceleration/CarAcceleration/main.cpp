#include <iostream>

int main()
{
    float accelDist, accelRate, accelTime, changeInAccel; //Acceleration Values
    float initSpeed, constSpeedDist, constSpeed, constTime; //Main speed values
    float totalDist; //Final result
    
    //Input data
    std::cout << "Enter cars initial speed (M/s)" << std::endl;
    std::cin >> initSpeed;
    std::cout << std::endl;
    std::cout << "Enter rate of acceleration (M/s^2)" << std::endl;
    std::cin >> accelRate;
    std::cout << std::endl;
    std::cout << "Enter acceleration time (Seconds)" << std::endl;
    std::cin >> accelTime;
    std::cout << std::endl;
    std::cout << "Enter how long the car should travel for after it has stopped accelerating (Seconds)" << std::endl;
    std::cin >> constTime;
    std::cout << std::endl;

    //Processing
    constSpeed = (initSpeed + (accelRate * accelTime)); //Find Constant speed
    changeInAccel = (constSpeed - initSpeed); //Find change in acceleration
    constSpeedDist = (constSpeed * constTime); //Find distance travelled at a constant speed
    accelDist = (accelTime * accelRate); //Find the distance that the car travels whilst accelerating

    totalDist = (accelDist + constSpeedDist); //find the total distance

    //Output information
    std::cout << "The total distance that your car travelled was: " << totalDist << "Metres" << std::endl;
    std::cout << "The change in acceleration was: " << changeInAccel << "M/s" << std::endl;
    std::cout << "The distance your car travelled while accelerating was: " << accelDist << "Metres"<< std::endl;
    std::cout << "The distacne your car travelled while driving at a consistent speed was: " << constSpeedDist << "Metres" << std::endl;


    return 0;
}

// accelDist = How far the car travelled while accelerating
// constSpeedDist = How far the car travelled while staying at a constant speed
// totalDist = how far the car travelled in total
// initSpeed = How fast the car was moving to begin with
// accel = how fast the car is accellerating (in M/s/s)
// accelTime = how long the car is accelerating for
// constSpeed = the constant speed the the car travels at after it finishes accelerating
// constTime = how long the car is travelling at a constant speed for