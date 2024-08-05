import javax.crypto.Cipher;
import javax.crypto.spec.IvParameterSpec;
import javax.crypto.spec.SecretKeySpec;

public class AESDecryptor {

    public static void main(String[] args) {
        // Hex outputs from your C++ code
        String encryptedMessageHex = "15619f9ee225cf2c9ebff37885f29b0b38b3b6dd8bf8fb53547b2ee9ac19e8cbfde4b35e3e1b9aef05cbb579ecc86cb1";
        String keyHex = "54f3cb9917ad01f7bb3e1c5afa7b59ca2f32b098eb4eee2f97810f7b0cf8f237";
        String ivHex = "3867d305c27dbeb58aeaf4d458d85a34";

        try {
            byte[] encryptedMessage = hexStringToByteArray(encryptedMessageHex);
            byte[] key = hexStringToByteArray(keyHex);
            byte[] iv = hexStringToByteArray(ivHex);

            String decryptedMessage = decrypt(encryptedMessage, key, iv);
            System.out.println("Decrypted Message: " + decryptedMessage);
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static String decrypt(byte[] encryptedMessage, byte[] key, byte[] iv) throws Exception {
        Cipher cipher = Cipher.getInstance("AES/CBC/PKCS5Padding");
        SecretKeySpec secretKeySpec = new SecretKeySpec(key, "AES");
        IvParameterSpec ivParameterSpec = new IvParameterSpec(iv);

        cipher.init(Cipher.DECRYPT_MODE, secretKeySpec, ivParameterSpec);
        byte[] original = cipher.doFinal(encryptedMessage);

        return new String(original);
    }

    public static byte[] hexStringToByteArray(String s) {
        int len = s.length();
        byte[] data = new byte[len / 2];
        for (int i = 0; i < len; i += 2) {
            int firstDigit = Character.digit(s.charAt(i), 16);
            int secondDigit = Character.digit(s.charAt(i + 1), 16);
            if (firstDigit == -1 || secondDigit == -1) {
                throw new IllegalArgumentException("Invalid hex digit: " + s.charAt(i) + s.charAt(i + 1));
            }
            data[i / 2] = (byte) ((firstDigit << 4) + secondDigit);
        }
        return data;
    }
}
