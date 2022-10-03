#include <iostream>

using namespace std;

int main(){
    int n, ele, found = 0;
    cout << "Print the number of element in array : ";
    cin >> n;
    int aray[n];
    cout << "Enter elements one by one : \n";
    for(int i = 0; i < n; i++){
        cin >> aray[i];
    }
    cout << "Enter the number want to search : ";
    cin >> ele;
    for(int i = 0; i < n; i++){
        if(aray[i] == ele)found = 1;
    }
    if(found == 1)cout << "Element present in the array";
    else cout << "Element not found in the array";
    cout << endl;
    return 0;
}
