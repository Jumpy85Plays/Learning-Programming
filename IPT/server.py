from Crypto.Cipher import AES
from Crypto.Util.Padding import unpad
import binascii

# Function to decrypt data
def decrypt(encrypted_data, key, iv):
    cipher = AES.new(key, AES.MODE_CBC, iv)
    decrypted_data = unpad(cipher.decrypt(encrypted_data), AES.block_size)
    return decrypted_data.decode('utf-8')

def main():
    # Replace these with the hex outputs from your C++ code
    encrypted_message_hex = 'dcf165b930f490121a5dbee90e0da4dfe2754ea34aae66a8fd3aec1f72a0b0729d5b5fc7700026bc0ea19315a40b3ac2'  # Update with C++ output
    key_hex = '5854611f3e09fb48784d19330f560bd511d54f4a7445ca0d470b8ec7b4ecc37d488f43ca38b89901db2455af6d99177fd52b21fa13e93'                              # Update with C++ output
    iv_hex = '43dd5474b57fcc57533c75ff7a4a6098'                                # Update with C++ output

    encrypted_message = binascii.unhexlify(encrypted_message_hex)
    key = binascii.unhexlify(key_hex)
    iv = binascii.unhexlify(iv_hex)

    # Ensure IV length is exactly 16 bytes
    if len(iv) != 16:
        raise ValueError(f"Incorrect IV length (it must be 16 bytes long, got {len(iv)} bytes)")

    decrypted_message = decrypt(encrypted_message, key, iv)

    print("Decrypted Message:", decrypted_message)

if __name__ == "__main__":
    main()
