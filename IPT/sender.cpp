#include <iostream>
#include <openssl/evp.h>
#include <openssl/rand.h>
#include <iomanip>
#include <sstream>
#include <string>

// Function to encrypt data
std::string encrypt(const std::string &plainText, unsigned char *key, unsigned char *iv) {
    OpenSSL_add_all_algorithms();

    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, key, iv);

    int outLen1 = plainText.length() + EVP_CIPHER_CTX_block_size(ctx);
    unsigned char *cipherText = new unsigned char[outLen1];

    int cipherLen1;
    EVP_EncryptUpdate(ctx, cipherText, &cipherLen1, (const unsigned char *)plainText.c_str(), plainText.length());
    int cipherLen2;
    EVP_EncryptFinal_ex(ctx, cipherText + cipherLen1, &cipherLen2);

    std::string encryptedData((char *)cipherText, cipherLen1 + cipherLen2);

    EVP_CIPHER_CTX_free(ctx);
    delete[] cipherText;

    return encryptedData;
}

std::string toHex(const std::string &s) {
    std::ostringstream oss;
    for (unsigned char c : s) {
        oss << std::hex << std::setw(2) << std::setfill('0') << (int)c;
    }
    return oss.str();
}

int main() {
    std::string message = "Hello I am Gabriel";

    unsigned char key[EVP_MAX_KEY_LENGTH];
    unsigned char iv[16]; // 16 bytes for AES IV
    RAND_bytes(key, EVP_MAX_KEY_LENGTH);
    RAND_bytes(iv, 16); // 16 bytes for AES IV

    // Add PKCS7 padding
    int padding = 16 - (message.length() % 16);
    message.append(padding, (char)padding);

    std::string encryptedMessage = encrypt(message, key, iv);

    std::cout << "Encrypted Message (hex): " << toHex(encryptedMessage) << std::endl;
    std::cout << "Key (hex): " << toHex(std::string((char *)key, EVP_MAX_KEY_LENGTH)) << std::endl;
    std::cout << "IV (hex): " << toHex(std::string((char *)iv, 16)) << std::endl;

    return 0;
}
