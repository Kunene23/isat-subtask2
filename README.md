# Decimal to Hexadecimal
string decimalToHexadecimal(int num) {
    if (num == 0) return "0";
    string hex = "";
    char hexChars[] = "0123456789ABCDEF";
    while (num > 0) {
        hex += hexChars[num % 16];
        num /= 16;
    }
    reverse(hex.begin(), hex.end());
    return hex;
}
