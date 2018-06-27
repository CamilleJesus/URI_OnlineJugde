#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

#define PENALIDADE 20


using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
	int n;

    while (cin >> n >> ws, n != 0) {
        int corretos = 0, total = 0;
        vector<int> penalidadeProblema('Z' - 'A' + 1, 0);

        for (int i = 0; i < n; i++) {
            char problema;
            int tempo;
            string status;
            cin >> problema >> tempo >> status >> ws;

            if (status == "correct") {
                corretos += 1;
                total += tempo + penalidadeProblema[problema - 'A'];
                penalidadeProblema[problema - 'A'] = 0;
            } else {
            	penalidadeProblema[problema - 'A'] += PENALIDADE;
            }
        }
        cout << corretos << " " << total << endl;
    }

    return 0;
}
