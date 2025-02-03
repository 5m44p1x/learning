#include <random>
#include "1113_vector.h"

int main()
{
    using namespace std;
    using VECTOR::Vector;

    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<> angle(0, 360);
    ofstream fout;
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    fout.open("thewalk.txt");
    cout << "Enter target distance (q to quit): ";
    while (cin >> target)
    {
        cout << "Enter step length: ";
        if (!(cin >> dstep))
        {
            break;
        }
        while (true)
        {
            direction = angle(gen);
            // cout << "angle = " << direction << endl;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            if (fout.is_open())
            {
                fout << result << endl;
            }
            steps++;
            if (abs(result.magval() - target) < Vector::Precision)
            {
                break;
            }
        }
        fout.close();
        cout << "After " << steps << " steps, the subject "
                "has the following location:\n";
        cout << result << endl;
        result.polar_mode();
        cout << " or\n" << result << endl;
        cout << "Average outward distance per step = "
            << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Enter target distance (q to quit): ";
    }

}
