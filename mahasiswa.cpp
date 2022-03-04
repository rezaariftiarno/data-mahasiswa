#include <iostream>
#include<string>

using namespace std;

void menuAwal()
{
}
void inMahasiswa()
{
cout<<"===================================================== \n";
cout<<" \t\tINPUT DATA MAHASISWA \t \n ";
cout<<"===================================================== \n";
}
void inMatkul()
{
cout<<"===================================================== \n";
cout<<" \t\tINPUT DATA MATAKULIAH \t \n ";
cout<<"===================================================== \n";
}
void nilaiMhs()
{
cout<<"===================================================== \n";
cout<<" \t\tINPUT NILAI \t \n ";
cout<<"===================================================== \n";
}
void daftarNM()
{
cout<<"===================================================== \n";
cout<<" \t\tDATA NILAI MAHASISWA\t \n ";
cout<<"===================================================== \n\n";
cout<<"============================================================================================== \n";
cout<<" No.|NIM\t|Nama\t|Jurusan|Kode MTK|Nama MTK\t| SKS | UTS | TUGAS | UAS | AKHIR |GRADE \n";
cout<<"============================================================================================== \n";
}

int main()
{
    int n;
    int i,x;
    short uts[5];
    short tugas[5];
    short uas[5];
    short nAkhir[5];
    string cari;
    string nim[5];
    string namaMhs[5];
    string jurusan[5];
    string namaMatkul[5];
    string kode[5];
    string sks[5];
    string grade[10];

menuAwal();
int pilih;
string confirm;
do
{   cout<<"===================================================== \n";
    cout<<" \t\tDATA NILAI \t \n ";
    cout<<"===================================================== \n";
    cout<<" 1.Input Mahasiswa\n";
    cout<<" 2.Input Matakuliah\n";
    cout<<" 3.Input Nilai Mahasiswa \n";
    cout<<" 4.Cetak Daftar Nilai Mahasiswa \n";
    cout<<"Masukan Pilihan [1-4]:";
cin>>pilih;
switch (pilih)
{
case 1: inMahasiswa();
    cout<<"Input Mahasiswa: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"NIM Mahasiswa ke-"<<i+1<<"       : ";
        cin>>nim[i];
        cout<<"Nama Mahasiswa ke-"<<i+1<<"      : ";
        cin>>namaMhs[i];
        cout<<"Jurusan Mahasiswa ke-"<<i+1<<"   : ";
        cin>>jurusan[i];
        cout<<endl;
    }
    break;

case 2: inMatkul();
    cout<<"Input Matakuliah: ";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"Kode Matakuliah ke-"<<i+1<<"       : ";
        cin>>kode[i];
        cout<<"Nama Matakuliah ke-"<<i+1<<"       : ";
        cin>>namaMatkul[i];
        cout<<"Bobot SKS ke-"<<i+1<<"             : ";
        cin>>sks[i];
        cout<<endl;
    }
    break;

case 3: nilaiMhs();
    //Cari mahasiswa
    cout<<"Input Nilai Mahasiswa          : ";
    cin>>n;
    cout<<"Input NIM ke-1                 : ";
    cin>>cari;
    for(x=0; x<n; x++){
        if(nim[x] == cari){
            cout<<"Nama                           : "<<namaMhs[x]<<"\n";
            cout<<"Jurusan                        : "<<jurusan[x]<<"\n";
        }else if (nim[x] != cari){
            cout<<"Input NIM ke-"<<x+1<<"                 : ";
            cin>>cari;
            cout<<"Nama                           : "<<namaMhs[x]<<"\n";
            cout<<"Jurusan                        : "<<jurusan[x]<<"\n";
        }else{
        cout<<"Data tidak ditemukan\n";
        }
    };
    //Cari matkul
    cout<<"Input Kode Matakuliah          : ";
    cin>>cari;
    n;
    for(x=0; x<n; x++){
        if(kode[x] == cari){
            cout<<"Nama Matakuliah                : "<<namaMatkul[x]<<"\n";
            cout<<"Bobot SKS                      : "<<sks[x]<<"\n";
        }else if(kode[x] != cari){
            cout<<"Input Kode Matakuliah          : ";
            cin>>cari;
            cout<<"Nama Matakuliah                : "<<namaMatkul[x]<<"\n";
            cout<<"Bobot SKS                      : "<<sks[x]<<"\n";
        }else{
            cout<<"Data tidak ditemukan\n";
        }
    };
    n;
    for(i=0; i<n; i++){
        cout<<"Input Nilai UTS                : ";
        cin>>uts[i];
        cout<<"Input Nilai TUGAS              : ";
        cin>>tugas[i];
        cout<<"Input Nilai UAS                : ";
        cin>>uas[i];
        nAkhir[i]=(0.3*uts[i]+0.3*tugas[i]+0.4*uas[i]);
        cout<<"Nilai Akhir                    : "<<nAkhir[i]<<"\n";

            if((nAkhir[i]>=85) && (nAkhir[i]<= 100)){
                grade[i]='A';
                cout<<"Grade                         : "<<grade[i]<<"\n";
            }else if((nAkhir[i]>=75) && (nAkhir[i] < 85)){
                grade[i]='B';
                cout<<"Grade                         : "<<grade[i]<<"\n";
            }else if((nAkhir[i]>=60) && (nAkhir[i] < 75)){
                grade[i]='C';
                cout<<"Grade                         : "<<grade[i]<<"\n";
            }else if((nAkhir[i]>=40) && (nAkhir[i] < 60)){
                grade[i]='D';
                cout<<"Grade                         : "<<grade[i]<<"\n";
            }else if((nAkhir[i]>=0) && (nAkhir[i] < 40)){
                grade[i]='Es';
                cout<<"Grade                         : "<<grade[i]<<"\n";
            }
    }
    break;

case 4: daftarNM();
    for(x=0; x<=n; x++){
        cout<<x+1<<"  |"<<nim[x]<<"\t|"<<namaMhs[x]<<"\t|"<<jurusan[x]<<"|"<<kode[x]<<"|"<<namaMatkul[x]<<"\t| "<<sks[x]<<" "<<uts[x]<<" "<<tugas[x]<<" "<<uas[x]<<" "<<nAkhir[x]<<" "<<grade[x]<<"\n";
    }
    break;

default: cout<<"invalid";
    break;
}
cout<<"Pilih x untuk kembali ke Menu Utama ";
cin>>confirm;
} while (confirm == "x" || confirm == "X");
return 0;
}

