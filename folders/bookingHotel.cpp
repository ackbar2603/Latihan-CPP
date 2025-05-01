#include <iostream>
#include <string>
using namespace std;

//Membuat Struktur
struct Boooking{
    string roomType;
    string startDate;
    string endDate;
};

//Inisial kamar sendiri
int singleRoom = 10;
//Inisial kamar double
int doubleRoom = 5;

//fungsi untuk memeriksa ketersediaan kamar yang ada.
bool checkAvailability(string roomType)
{
    if (roomType == "single")
    {
        return singleRoom > 0;
    } else if (roomType == "double")
    {
        return doubleRoom > 0;
    }
    return false;
    
}

//fungsi untuk mengurangi jumlah kamar setelah dipesan.
void bookRoom(string roomType)
{
    if (roomType == "single")
    {
        singleRoom --;
    } else if (roomType == "double")
    {
        doubleRoom --;
    }
    
    
}

//fungsi untukj mensimulasikan proses pembayaran dengan mencetak pesan
void prosesPayment(string customerID)
{
    cout << "Pembayaran diproses untuk pelanggan: " << customerID << endl;    
}

//fungsi untuk memeriksa ketersediaan ka,mar, memesan kamar kalau ada, proses payment dan mengembalikan hasil reservasi.
string makeReservation(string customerID, string roomType, string startDate, string endDate)
{
    if (checkAvailability(roomType))
    {
        bookRoom(roomType);
        prosesPayment(customerID);
        return "reservasi berhasil!";
    } else
    {
        return "Kamar tak tersedia.";
    }
      
}

//Main Function
//memulai program dengan membuat satu reservasi dan mencetak hasilnya letsgooo!!!.
int main(){
    //membuat reservasi
    string result = makeReservation("lexi334", "double", "12-4-2025", "25-4-2025");
    cout << result << endl;
    return 0;
}