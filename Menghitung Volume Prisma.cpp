#include <iostream>

namespace variabelLuasPermukaan{
    float luas_alas;
    float keliling_alas;
    float tinggi;
}

float luas_permukaan;
float Volume;
float tinggiPrisma;

int main(){ 
    std::cout << "\t Hitung Luas dan Permukaan Volume Prisma \n\n";
    std::cout << " Masukan Luas Alas     : "; 
    std::cin >> variabelLuasPermukaan::luas_alas;
    std::cout << " Masukan Keliling Alas : "; 
    std::cin >> variabelLuasPermukaan::keliling_alas;
    std::cout << " Masukan Tinggi        : "; 
    std::cin >> variabelLuasPermukaan::tinggi;

    luas_permukaan = (2 * variabelLuasPermukaan::luas_alas) + (variabelLuasPermukaan::keliling_alas * variabelLuasPermukaan::tinggi);
    std::cout << "\n Hasil Luas Permukaannya    : " << luas_permukaan;

    std::cout << " , Masukan Tinggi Prisma : ";
    std::cin >> tinggiPrisma;

    Volume = luas_permukaan * tinggiPrisma;
    std::cout << "\n Hasil Volumenya    : " << Volume;

    return 0;
}