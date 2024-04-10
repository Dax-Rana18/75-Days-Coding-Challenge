vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> superiorElements;
    int currentMax = a.back(); // last element is a Superior Element
    superiorElements.push_back(currentMax);

    for (int i = a.size() - 2; i >= 0; --i) {
        if (a[i] > currentMax) {
            superiorElements.push_back(a[i]);
            currentMax = a[i]; 
        }
    }

    sort(superiorElements.begin(), superiorElements.end());
    return superiorElements;

}