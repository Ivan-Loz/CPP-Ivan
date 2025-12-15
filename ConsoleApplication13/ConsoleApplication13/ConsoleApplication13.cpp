#include <iostream>
#include <string>
using namespace std;
class PaymentProcessor {
public:
    void ProcessPayment(double sum) const {
        cout << "Проходит оплата с PayPal сумма: " << sum << endl;
    }
};
class StripePayment {
public:
    void MakeStripePayment(double sum) {
        cout << "Проходит оплата с Stripe " << endl;
    }
};
class StripeToPayPalAdapter : public PaymentProcessor {
public:
    StripeToPayPalAdapter(StripePayment* pay) {

    }

};
void ClientCode(const PaymentProcessor* processor, double amount) {
    cout << processor->ProcessPayment(amount) << endl;
}


int main() {
    setlocale(LC_ALL, "ru");

    cout << "Client: I can work just fine with the PayPal payment processor:\n";
    PaymentProcessor* paypalProcessor = new PaymentProcessor;
    ClientCode(paypalProcessor, 100);
    cout << "\n";

    StripePayment* stripePayment = new StripePayment;
    cout << "Client: The StripePayment class has a different interface. See, I don't understand it:\n";
    cout << "StripePayment: " << stripePayment->MakeStripePayment(200.0) << endl;
    cout << "\n";

    cout << "Client: But I can work with it via the StripeToPayPalAdapter:\n";
    StripeToPayPalAdapter* adapter = new StripeToPayPalAdapter(stripePayment);
    ClientCode(adapter, 200.0);

    delete paypalProcessor;
    delete stripePayment;
    delete adapter;

    return 0;


}