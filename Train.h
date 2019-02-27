#ifndef TRAIN_H_INCLUDED
#define TRAIN_H_INCLUDED

#include <string>

using namespace std;

class Train
{
public:

    Train()
    {
        int result = setTrainName("Nobody");
    }

    Train(string tmpTrainName) : trainName1(tmpTrainName)
    {

    }

    string getTrainName()
    {
        return trainName1;
    }

    int setTrainName(string newName)
    {
        trainName1 = newName;
        cout << "Function Call setTrainName(string newName) - trainName1 now: " << trainName1 << endl;
    }

protected:

private:

    string trainName1;
};

#endif // TRAIN_H_INCLUDED
