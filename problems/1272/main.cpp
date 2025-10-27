#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void solve(wstring& str) {
    
    for (size_t i = 0; i < str.size(); i++) {
        if (str[i] == L'\u00fa') {
            str[i] = L' ';
        }
    }

    wistringstream iss(str);

    
    wstring token;
    while (iss >> token)
    {
        wcout << token[0];
    }
    
    wcout << "\n";
    
    
    
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

    int loop;
    wstring str;

    wcin >> loop;
    wcin.ignore();  // limpa o '\n' residual

    while (loop--) {
        getline(wcin, str);

        // Verificar o caractere unicode, importante para problemas com caracteres fora da tabela ascii
        // for (wchar_t c : str) {
        //     wcout << L"[" << c << L"] = U+" << hex << (int)c << endl;
        // }

        solve(str);
    }

    return 0;
}
