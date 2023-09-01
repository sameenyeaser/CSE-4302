#include <iostream>

using namespace std;

class Flight {
    private:
        int flightNumber;
        string destination;
        float distance;
        float maxFuelCapacity;

    public:
        Flight(int flightNum = 0, string dest = "", float dist = 0.0, float maxFuel = 0.0){
            /*cout << "Enter flight number: ";
            cin << fightNum;
            cout << "Enter destination: ";
            cin << dest;
            cout << "Enter distance ";
            cin << dist;
            cout << "Enter maximum fuel capacity: ";
            cin << maxFuel;*/

            flightNumber = flightNum;
            destination = dest;
            distance = dist;
            maxFuelCapacity = maxFuel;
        }

        float CalFuel(){
            float fuelNeed;
            if(distance <= 1000){
                fuelNeed = 500;
                return fuelNeed;
            }

            else if(distance >= 1000 && distance <= 2000){
                fuelNeed = 1100;
                return fuelNeed;
            }

            else if(distance > 2000){
                fuelNeed = 2200;
                return fuelNeed;
            }
        }

        void ShowInfo(){
            cout << flightNumber << endl;
            cout << destination << endl;
            cout << distance << endl;
            cout << maxFuelCapacity << endl;

            float fuel = CalFuel();

            if(maxFuelCapacity >= fuel)
                cout << "Fuel Capacity is fit for the flight distance." << endl;

            else
                cout << "Fuel Capacity is not fit for the flight distance." << endl;

        }

        ~Flight(){
            cout << flightNumber << " object has been destructed." << endl;
        }
};


int main(void){
    Flight flight1(1001,"New York",1200,1101);

    cout << "Flight information is shown below: " << endl;
    flight1.ShowInfo();
}
