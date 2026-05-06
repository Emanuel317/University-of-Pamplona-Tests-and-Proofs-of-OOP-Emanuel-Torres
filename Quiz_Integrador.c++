#include <iostream>

using std::string;

/*

*/
class Product {

    //Protegidos
    protected:
        string barCode;        

        string setBarCode (string barCode) {
            return barCode;
        }

        string getBarCode (string barCode) {
            std::cout << &barCode << std::endl;
        }

    //Públicos
    public:
        string name;
        float unitPrice;
        int amount;

        string setProductName (string name) {
            return name;
        }

        string getProductName (string name) {
            std::cout << &name << std::endl;
        }

        float setProductPrice (float price) {
            return price;
        }

        float getProductPrice (float price) {
            std::cout << &price << std::endl;
        }

        int setProductAmount (int amount) {
            return amount;
        }

        int getProductAmount (int amount) {
            std::cout << &amount << std::endl;
        }
};








int main () {

    Product harinapan;
    
    std::cout << std::endl;

    return 0;
}
