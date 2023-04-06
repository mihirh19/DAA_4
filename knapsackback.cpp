#include <iostream>
#include <algorithm>

using namespace std;

void knapsack(int values[], int weights[], int n, int capacity, int current_value, int current_weight, int& max_value) {
    if (current_weight > capacity) {
        return;
    }

    if (current_value > max_value) {
        max_value = current_value;
    }

    for (int i = 0; i < n; i++) {
        if (weights[i] > 0) {
            int value_with_item = current_value + values[i];
            int weight_with_item = current_weight + weights[i];

            weights[i] = 0;
            knapsack(values, weights, n, capacity, value_with_item, weight_with_item, max_value);
            weights[i] = weight_with_item - current_weight;
        }
    }
}

int main() {
    int values[] = {60, 100, 120};
    int weights[] = {10, 20, 30};
    int capacity = 50;
    int n = sizeof(values) / sizeof(values[0]);

    int max_value = 0;

    knapsack(values, weights, n, capacity, 0, 0, max_value);

    cout << "Maximum value: " << max_value << endl;

    return 0;
}
