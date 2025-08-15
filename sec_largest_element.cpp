#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<int> getslargest(vector<int>& arr, int n)
{
    int largest = arr[0];
    int slargest = -1;
    int smallest = arr[0];
    int ssmallest = INT_MAX;

    for (int i = 1; i < n; i++) {
        // For largest and second largest
        if (arr[i] > largest) {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > slargest && arr[i] < largest) {
            slargest = arr[i];
        }

        // For smallest and second smallest
        if (arr[i] < smallest) {
            ssmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] < ssmallest && arr[i] > smallest) {
            ssmallest = arr[i];
        }
    }
    return {slargest, ssmallest};
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> result = getslargest(arr, n);
    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}
