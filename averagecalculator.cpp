#include <iostream>
#include <vector>
using namespace std;

int main() {
    int am;
    int sum = 0;
    int x = 0;
    string sub;
    vector<string> subs;
    vector<string> badSubs;
    vector<int> results;
    cout << "/getall to get all the subjects\n/getbad to get all subjects below 50%\n\n";
    while(true) {
    cout << "Enter the subject: ";
    cin >> sub;
    if(sub == "/getbad") {
        cout << "Subjects below 50%:\n";
        for(int i=0;i<badSubs.size();i++) {
            cout << badSubs[i] << endl;
        }
        continue;
    }
    else if(sub == "/getall") {
        for(int i=0;i<subs.size();i++) {
            cout << subs[i] << ": " << results[i] << "%" << endl;
        }
        continue;
    }
    subs.push_back(sub);
    cout << endl << "Enter amount of scores for " << sub << ":";
    cin >> am;
    int arr[sizeof(int) * am];
    for(int i=0;i<am;i++) {
        cout << endl << "Score " << i+1 << ": ";
        cin >> arr[i];
    }
    for(int j=0;j<am;j++) {
        sum = sum + arr[j];
    }
    int result = sum/am;
    results.push_back(result);
    if(result < 50) {
        badSubs.push_back(subs[x]);
    }
    x++;
    }
    return 0;
}
