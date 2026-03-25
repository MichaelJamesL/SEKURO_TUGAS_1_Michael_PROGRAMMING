#include "bits/stdc++.h"
using namespace std;
typedef long long ll;

int main() {
    int n;
    cin >> n;
    
    vector<pair<ll, ll>> paket(n);
    
    for (int i = 0; i < n; i++) {
        cin >> paket[i].first;
    }
    
    for (int i = 0; i < n; i++) {
        cin >> paket[i].second;
    }
    
    sort(paket.begin(), paket.end());

    vector<ll> kategori_diambil;
    int res = 0;

    for (int i = 0; i < n; i++) {
        ll koordinat = paket[i].first;
        ll kategori = paket[i].second;
        
        if (find(kategori_diambil.begin(), kategori_diambil.end(), kategori) == kategori_diambil.end()) {
            kategori_diambil.push_back(kategori);
            res++;
        }
    }
    
    cout << res << endl;
    
    return 0;
}
