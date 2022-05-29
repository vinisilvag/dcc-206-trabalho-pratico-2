// 2021421869 - Vinicius Silva Gomes

#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'

#define f first
#define s second
#define pb push_back

int main() { _
    int n, m, q;

    // Recebe as entradas do arquivo de entrada
    string input;
    getline(cin, input);
    istringstream size_input(input);

    size_input >> n;
    size_input >> m;
    size_input >> q;

    vector<vector<pair<int, int>>> graph(n);
    vector<pair<int, int>> queries;

    for(int i = 0; i < m; i++) {
        getline(cin, input);
        istringstream path(input);

        int source, destination, weight;

        path >> source;
        path >> destination;
        path >> weight;

        graph[--source].pb(pair<int, int>(--destination, weight));
    }

    for(int i = 0; i < q; i++) {
        getline(cin, input);
        istringstream cases(input);

        int source, destination;

        cases >> source;
        cases >> destination;

        queries.pb(pair<int, int>(--source, --destination));
    }

    for(unsigned i = 0; i < queries.size(); i++) {
        cout << queries[i].f << " " << queries[i].s << endl;
    }

    return 0;
}
