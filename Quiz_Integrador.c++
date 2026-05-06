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

        float TotalProductPrice () {
            float calculateDiscount (float price, int amount);
        }
};

/*

*/

class Discount : public Product {
    //Público
    public:

    float calculateDiscount (float price, int amount) {
        float discount;
        float discountedPrice;

        if (amount > 10) {
            if (price > 150) {
                discount = price * 0.10;
                discountedPrice = price - discount;
            
            } else if (price > 75) {
                discount = price * 0.05;
                discountedPrice = price - discount;
            } else {
                discountedPrice = price;
            }
        
        return discountedPrice;
        }
    }

};


int main () {

    Product harinapan;
    string Productname;
    std::cin >> Productname;


    std::cout << harinapan.setProductName(Productname) << std::endl;

    return 0;
}
