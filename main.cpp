#include <iostream>
#include "Train.h"
#include <string>

using namespace std;

int function1(string tmpStr)
{
        cout << "Do some important stuff. :-)" << endl;
        return 42;
}

int main()
{
    cout << "Hello world!" << endl;

    int x = function1("HALLO!!!!");

    Train *train1 = new Train("ICE-1");
    Train *train2 = new Train();

    int result = train2->setTrainName("ICE-2");

    cout << "train1->getTrainName(): " << train1->getTrainName() << endl;
    cout << "train2->getTrainName(): " << train2->getTrainName() << endl;

    delete train1;
    train1 = 0;

    delete train2;
    train2 = 0;

    return 0;
}
