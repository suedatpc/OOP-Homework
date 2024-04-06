#include<iostream>
using namespace std;

class NumberArray{
private:
    float *Arr; // Pointer to dynamically allocated array
    unsigned int SizeOfArr;

public:
//constructor
    NumberArray(unsigned int size){
        SizeOfArr = size;
        Arr = new float [SizeOfArr];
    }

//destructor to free the memory
    ~NumberArray() {
        delete [] Arr;
    }

// Store a number in any element of the array
    void StoreNumber(unsigned int index, float value){
        if(index < SizeOfArr){
            Arr[index] = value;
        }
        else{
            cerr << "Index out of bounds!" << endl;
        }
    }

    float RetrieveNumber(unsigned int index){
        if(index < SizeOfArr){
            return Arr[index];
        }
        else{
            cerr << "Index out of bounds!" << endl;
            return -1; // Return a default value indicating error
        }
    }

    float getHighestValue(){
        float highest = Arr[0];
        for(unsigned int index = 1; index < SizeOfArr; index++){
            if(Arr[index] > highest){
                highest = Arr[index];
            }
        }
        return highest;
    }

    float getLowestValue(){
        float lowest = Arr[0];
        for(unsigned int index = 1; index < SizeOfArr; index++){
            if(Arr[index] < lowest){
                lowest = Arr[index];
            }
        }
        return lowest;
    }

    float getAverage(){
        float sum = 0;
        for(unsigned int index = 1; index < SizeOfArr; index++){
            sum += Arr[index];
        }
        return (sum / SizeOfArr);
    }
};

int main()
{
    NumberArray numArr(5);

    numArr.StoreNumber(0 , 10);
    numArr.StoreNumber(1 , 20);
    numArr.StoreNumber(2 , 30);
    numArr.StoreNumber(3 , 40);
    numArr.StoreNumber(4 , 50);

//printing the numbers
    for(unsigned int index = 0; index < 5; index++){
        cout << "Number at index " << index << ": " << numArr.RetrieveNumber(index) << endl;
    }

    cout << "Highest Value: " << numArr.getHighestValue() << endl;
    cout << "Lowest Value: " << numArr.getLowestValue() << endl;
    cout << "Average Value: " << numArr.getAverage() << endl;

    return 0;
}