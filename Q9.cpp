#include<iostream>
#include <cstdlib> // For exit function
using namespace std;

class PopulationInfo{
private:
    int Population;
    int Births;
    int Deaths;

public:
    PopulationInfo(int population, int births, int deaths){
        Population = population;
        Births = births;
        Deaths = deaths;
    }

    void setBirthRate(int births, int population){
        Births = births;
        Population = population;
        //BirthRate = Births/Population;
    }
    void setDeathRate(int deaths, int population){
        Deaths = deaths;
        Population = population;
       // DeathRate = Deaths/Population;
    }
    double getBirthRate(){
        return static_cast<double>(Births) / Population;
    }
    double getDeathRate(){
        return static_cast<double>(Deaths) / Population;
    }
    void Checking(){
        if(Population < 1 || Births < 0 || Deaths < 0){
        cout << "Invalid Numbers";
        exit(1);
        }
    }
};

int main()
{
    int population, births, deaths;

        // Input population, number of births, and number of deaths
        cout << "Enter the population: ";
        cin >> population;
        cout << "Enter the number of births: ";
        cin >> births;
        cout << "Enter the number of deaths: ";
        cin >> deaths;

    PopulationInfo population1 = PopulationInfo(population, births, deaths);
    population1.Checking();
    cout << "Birth Rate: " << population1.getBirthRate() << endl;
    cout << "Death Rate: " << population1.getDeathRate() << endl;

    return 0;
}
