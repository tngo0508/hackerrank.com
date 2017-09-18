#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    double mealCost;
    int tipPercent;
    int taxPercent;
    
    cin >> mealCost >> tipPercent >> taxPercent;
    double tip = mealCost * (tipPercent/100.00);
    
    double tax = mealCost * (taxPercent/100.00);
    double totalCost = mealCost + tip + tax;
    
    cout << "The total meal cost is " << round(totalCost) << " dollars.";
    
    return 0;
}
