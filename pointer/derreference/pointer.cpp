#include <iostream>
#include <vector>

using namespace std;


// vector won't be copied into the parameter
// (that's why it is "cheap")
void cheaplyModify(vector<int>& vector) {
    for (int i=0; i<vector.size(); i++) {
        vector[i]++;
    }
}

void cheaplyPrint(vector<int>& vector) {
    for (int i=0; i<vector.size(); i++) {
        cout << vector[i] << " ";
    }

    cout << endl;
}

int main(){
    vector<int> V(3,0);
    cheaplyModify(V);
    cheaplyPrint(V);

    // you can also use it inline...
    vector<int>* v = &V; // creating a pointer
    vector<int>& deref = *v; // "derreferencing" the pointer

    for (int i=0; i<deref.size(); i++) {
        deref[i]++;
        cout << V[i] << " ";
    }

    cout << endl;
    return 0;
}
