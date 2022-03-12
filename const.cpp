#include <iostream>
#include <string>
using std::string;

class BankAccount
{
  private:
      // TODO: declare member variables
    string account_number_;
    string ownername_;
    double available_funds_;

  public:
    // TODO: declare setters
    void AccountNumber(string s);
    void OwnerName(string s);
    void AvailableFunds(double s);
    // TODO: declare getters
    string AccountNumber() const;
    string OwnerName() const;
    double AvailableFunds() const;
};

// TODO: implement setters

// TODO: implement getters
  
    void BankAccount::AccountNumber(string s){
        account_number_=s;
    }
    void BankAccount::OwnerName(string s){
        ownername_=s;
    }
    void BankAccount::AvailableFunds(double s){
        available_funds_=s;
    }

    
    string BankAccount::AccountNumber()const{
        return account_number_;
    }
    string BankAccount::OwnerName() const{
        return ownername_;
    }
    double BankAccount::AvailableFunds()const{
        return available_funds_;
    }


int main(){
    // TODO: instantiate and output a bank account
    BankAccount ba;
    ba.AccountNumber("aaaa");
    ba.OwnerName("JP");
    ba.AvailableFunds(111.1);
    //std::cout<<"Hello"<<ba.OwnerName();
    std::cout<<ba.OwnerName()<<" "<<ba.AccountNumber()<<" "<<ba.AvailableFunds();
    
}