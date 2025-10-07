#include <iostream>

using namespace std;

int main () {
    float skn[] = {
    0.7, 0.4, 0.8, 0.4, 0.7, 
    0.9, 0.2, 0.1, 0.2, 0.5,
    0.9, 0.6, 1.0, 0.3, 0.8,
    0.3, 0.1, 0.5, 0.0, 0.7 
};

float skr[] = {
    0.2, 0.4, 0.1, 0.6, 0.8, 
    0.6, 0.2, 0.6, 0.5, 1.0,
    0.3, 0.6, 0.8, 0.6, 0.4,
    0.7, 0.8, 0.4, 0.3, 0.1 
};

    for (int i = 0; i < 20; i++) {
        if (skn[i] > 0.5) {
            cout << "Nilai data skn = " << skn[i] << " -> Perintah belok kanan" << endl;
            if (i > 0) {
                if (skn[i-1] > 0 && skn[i] >= skn[i-1] * 2) {
                    cout << "  >> Peringatan: Nilai skn meningkat 2x lipat!" << endl;
                } else if (skn[i] > 0 && skn[i-1] >= skn[i] * 2) {
                    cout << "  >> Peringatan: Nilai skn menurun 2x lipat!" << endl;
                }
            }
        } else if (skr[i] > 0.5) {
            cout << "Nilai data skr = " << skr[i] << " -> Perintah belok kiri" << endl;
            if (i > 0) {
                if (skr[i-1] > 0 && skr[i] >= skr[i-1] * 2) {
                    cout << "  >> Peringatan: Nilai skr meningkat 2x lipat!" << endl;
                } else if (skr[i] > 0 && skr[i-1] >= skr[i] * 2) {
                    cout << "  >> Peringatan: Nilai skr menurun 2x lipat!" << endl;
                }
            }
        } else if (skn[i] < 0.5 && skr[i] < 0.5) {
            cout << "Nilai data skn dan skr = " << skn[i] << " & " << skr[i] << " -> Robot diam" << endl;
            if (i > 0) {
                if (skn[i-1] > 0 && skn[i-1] >= skn[i] * 2) cout << "  >> Peringatan: Nilai skn menurun signifikan." << endl;
                if (skr[i-1] > 0 && skr[i-1] >= skr[i] * 2) cout << "  >> Peringatan: Nilai skr menurun signifikan." << endl;
            }
        } else {
            cout << "Nilai data skn dan skr = " << skn[i] << " & " << skr[i] << " -> Perintah tetap lurus" << endl;
            if (i > 0) {
                if (skn[i] > 0 && skn[i-1] >= skn[i] * 2) cout << "  >> Peringatan: Nilai skn menurun signifikan." << endl;
                if (skr[i] > 0 && skr[i-1] >= skr[i] * 2) cout << "  >> Peringatan: Nilai skr menurun signifikan." << endl;
            }
        }
    }
    return 0;
}






