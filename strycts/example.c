#include <stdio.h>
#include <string.h>

struct address
{
    /* data */
    char firstname[20];
    char streetname[20];
    float longitude;
    float latitude;
};

int main(void)
{
    /* declearing struct*/
    struct address getAddress;
    struct address ImsaAdress;

   /* Assigning values to struct*/ 
    strcpy(getAddress.firstname, "KOBOKO"); 
    strcpy(getAddress.streetname, "demgbelenga");
    getAddress.longitude = 2.89;
    getAddress.latitude = 1.557;

    printf("the address is %s and latitude %f, longitude %f", 
    getAddress.streetname, getAddress.latitude, getAddress.longitude);

    return 0;

}
