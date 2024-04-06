#include<iostream>
using namespace std;

class Temperature{
private:
    double temperature;
public:
    // Constructor
    Temperature(double temperature){
        this->temperature = temperature;
    }

    // Setter
    void setTemperature(double temperature){
        this->temperature = temperature;
    }

    // Getter
    double getTemperature(){
        return temperature;
    }

    // Methods to check temperature limits
    bool isEthylFreezing(){
        return temperature <= -173;
    }
    bool isEthylBoiling(){
        return temperature >= 172;
    }
    bool isOxygenFreezing(){
        return temperature <= -362;
    }
    bool isOxygenBoiling(){
        return temperature >= -306;
    }
    bool isWaterFreezing(){
        return temperature <= 32;
    }
    bool isWaterBoiling(){
        return temperature >= 212;
    }
};

int main()
{
    double temperature1;
    cout << "Enter a temperature: ";
    cin >> temperature1;

    Temperature temperature = Temperature(temperature1);

    cout << "Is Ethyl Freezing: " << temperature.isEthylFreezing() << endl;
    cout << "Is Ethyl Boiling: " << temperature.isEthylBoiling() << endl;

    return 0;
}
