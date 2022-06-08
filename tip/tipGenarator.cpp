//to genarate tip bill.
#include<iostream>
using namespace std;

int main(){

int bill,tip,tipAmout,share,totalBill;
cout<<"..Well come Tip Genarator.."<<endl;
cout<<"\n**************************"<<endl;
cout<<"Enter Bill Amout : ";
cin>>bill;

//tip percentage
cout<<"Enter tip percentage of : 10 ,12 or 15 : ";
cin>>tip;
tipAmout=(bill*tip)/100;


//Bill share
cout<<"\nEnter how many members sharing Bill : ";
cin>>share;

cout<<"Tip Amount is : "<<tipAmout;
cout<<"\nThe Total Bill is :"<<tipAmout+bill<<endl;

cout<<"The Bill sharing of ["<<share<<"] member is : "<<(bill+tipAmout)/share;
return 0;

}
