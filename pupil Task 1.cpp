#include <iostream>
using namespace std;
#include <vector>
#include <string>
// Function declare
// Function to valid weight
bool isValidWeight(float weight) {
    const float MIN_WEIGHT = 10.0; // Mini valid weight in kg
    const float MAX_WEIGHT = 150.0; // Maxi valid weight in kg
    return weight >= MIN_WEIGHT && weight <= MAX_WEIGHT;
}

int main() {
    const int MAX_PUPILS = 30;
    vector<string> names(MAX_PUPILS);
    vector<float> weights(MAX_PUPILS);

    for (int i = 0; i < MAX_PUPILS; ++i) {
        cout << "Enter the name of pupil " << (i + 1) << ": ";
        cin >> names[i];

        cout << "Enter the weight of " << names[i] << " (in kg): ";
        cin >> weights[i];

        // Valid weight
        while (!isValidWeight(weights[i])) {
            cout << "Invalid weight. Please enter a value between 10 and 150 kg." << endl;
            cout << "Re-enter the weight of " << names[i] << " (in kg): ";
            cin >> weights[i];
        }
    }

    // Output names and weights
    cout << " Names and Weights of the Pupils:" << endl;
    for (int i = 0; i < MAX_PUPILS; ++i) {
        cout << names[i] << " : " << weights[i] << " kg" << endl;
    }

    return 0;
}