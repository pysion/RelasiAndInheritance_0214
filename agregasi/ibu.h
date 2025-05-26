#ifndef IBU_H
#define IBU_H

class ibu {
    public:
        string nama;
        vector<anak *> daftar_anak;

        ibu(string pNama) : nama (pNama) {
            cout << "ibu \"" << nama << "\" ada \n";
        }
        ~ibu() {
            cout << "ibu \"" << nama << "\" tidak ada \n";
        }
        void tambahkanAnak (anak *);
        void cetakAnak();
};
void ibu::tambahAnak(anak * pAnak) {
    daftar_anak.push_push (pAnak);
}
void ibu::cetakAnak() {
    cout << "Daftar anak dari ibu \"" << this ->nama << "\":\n";
}

for (auto &a : daftar_anak)