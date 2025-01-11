// Create a union with bit fields for a flag (1-bit), a status code (3-bit), 
// and an error code (4-bit), and output their values after taking user input.

#include <stdio.h>

union BitFieldUnion {
    struct {
        unsigned int flag : 1;       // 1-bit flag
        unsigned int statusCode : 3; // 3-bit status code
        unsigned int errorCode : 4;  // 4-bit error code
    } bits;
    unsigned char allBits; // To access the raw representation (1 byte is sufficient for 8 bits)
};

int main() {
    union BitFieldUnion u;

    // Ensure the union is initialized
    u.allBits = 0;

    // Input values for bit fields
    unsigned int flag, statusCode, errorCode;
    printf("Enter flag (0/1), statusCode (0-7), and errorCode (0-15): ");
    scanf("%u %u %u", &flag, &statusCode, &errorCode);

    // Assign values to bit fields
    u.bits.flag = flag & 0x1;            // Mask to 1 bit
    u.bits.statusCode = statusCode & 0x7; // Mask to 3 bits
    u.bits.errorCode = errorCode & 0xF;   // Mask to 4 bits

    // Print the bit field values
    printf("Flag: %u\n", u.bits.flag);
    printf("Status Code: %u\n", u.bits.statusCode);
    printf("Error Code: %u\n", u.bits.errorCode);

    // Optionally, display raw representation
    printf("Raw Value: 0x%X\n", u.allBits);

    return 0;
}
