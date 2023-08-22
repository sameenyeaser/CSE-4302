#include<iostream>

using namespace std;

class Counter
{
private:
    int count;
    int step_increment;

public:
    void setIncrementStep(int val){
        step_increment = val;
    }

    int getCount(){
        return count;
    }

    void increment(){
        count += step_increment;
    }

    void resetCount(){
        count = 0;
    }

    bool isEven(){
        if(count%2 == 0)
            return true;
        else
            return false;

    }
};

int main(void)
{
    Counter counter1;

    counter1.resetCount();
    counter1.setIncrementStep(5);

    counter1.increment();
    counter1.increment();

    cout << "Current Count: " << counter1.getCount() << endl;

    counter1.resetCount();

    cout << "After resetting Count: " << counter1.getCount() << endl;

}
