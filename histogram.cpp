#include <vector>
using namespace std;
void find_minmax(vector<double> numbers, double& min, double& max) {
    min = numbers[0];
    max = numbers[0];
    for (double x : numbers)
    {
        if (x < min)
            min = x;

        if (x > max)
            max = x;
    }
    return;
}