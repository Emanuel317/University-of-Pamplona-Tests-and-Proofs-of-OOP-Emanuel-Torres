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

        void const getBarCode (string barCode) {
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

        void getProductName (string name) {
            std::cout << &name << std::endl;
        }

        float setProductPrice (float price) {
            return price;
        }

        void const getProductPrice (float price) {
            std::cout << &price << std::endl;
        }

        int setProductAmount (int amount) {
            return amount;
        }

        void const getProductAmount (int amount) {
            std::cout << &amount << std::endl;
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
        
        }
        return discountedPrice;
    }

    float calculateTotalProductPrice (float discountedPrice) {
            float totalPrice = discountedPrice;
            return totalPrice;
    }

};


int main () {

    int i = 1;
    
    while (i) {
        Product createdProduct;

        std::cout << "Indique el nombre del " << i << " producto: ";
        string productName;
        std::cin >> productName;

        std::cout << "Indique el precio del " << i << " producto: ";
        float productPrice;
        std::cin >> productPrice;

        std::cout << "Indique la cantidad del " << i << " producto: ";
        float productAmount;
        std::cin >> productAmount;

        i++;

        std::cout << createdProduct.setProductName(productName) << std::endl;
        std::cout << createdProduct.setProductPrice(productPrice) << std::endl;
        std::cout << createdProduct.setProductAmount(productAmount) << std::endl;
    }

    return 0;
}
