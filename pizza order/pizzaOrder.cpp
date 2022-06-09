//pizza order
#include<iostream>
using namespace std;
int main(void){
  string a,p,c;
  cout<<"************************"<<endl;
  cout<<"WELL COME TO PIZZA ODER"<<endl;
  cout<<"************************"<<endl;

  cout<<"which size pizza you want"<<endl;
  cout<<"S-Small: 100/-  M-Medium: 150/-  L-Large :200/-    : ";
  cin>>a;
  //for small pizza
  if(a=="S" || a=="s"){
    cout<<"Do you want pepperon : y or n ";
    cout<<"for small pzza :20/- and medium and Large :25/-   :  ";
    cin>>p;
    if(p=="Y" || p=="y"){
        cout<<"Do you want cheese it only 10/- :  y or n : ";
        cin>>c;
        if(c=="y" || c=="Y"){
          cout<<"Your Total Bill : "<<100+20+10<<endl;
        }
        else if(c=="n" || c=="N"){
          cout<<"Your Total Bill : "<<100+20<<endl;

        }
        else{
            cout<<"wrong input...";
        }
    }
  else if(p=="n" || p=="N"){
        cout<<"Do you want cheese it only 10/- :  y or n : ";
        cin>>c;
        if(c=="y" || c=="Y"){
          cout<<"Your Total Bill : "<<100+10<<endl;
        }
        else if(c=="n" || c=="N"){
          cout<<"your Total Bill : "<<100<<endl;
        }
        else{
            cout<<"wrong input....";
        }
    }
    else{
      cout<<"wrong input"<<endl;
    }
  }

  //for medium pizza
  else if(a=="M" || a=="m"){
    cout<<"Do you want pepperon : y or n ";
    cout<<"for small pzza :20/- and medium and Large :25/-   :  ";
    cin>>p;
    if(p=="Y" || p=="y"){
        cout<<"Do you want cheese it only 10/- :  y or n : ";
        cin>>c;
        if(c=="y" || c=="Y"){
          cout<<"Your Total Bill : "<<150+25+10<<endl;
        }
        else if(c=="n" || c=="N"){
          cout<<"Your Total Bill : "<<150+25<<endl;

        }
        else{
            cout<<"wrong input...";
        }
    }
    else if(p=="n" || p=="N"){
        cout<<"Do you want cheese it only 10/- :  y or n : ";
        cin>>c;
        if(c=="y" || c=="Y"){
          cout<<"Your Total Bill : "<<150+10<<endl;
        }
        else if(c=="n" || c=="N"){
          cout<<"your Total Bill : "<<150<<endl;
        }
        else{
            cout<<"wrong input...";
        }
    }
    else{
      cout<<"wrong input"<<endl;
    }
  }

  //for Large pizza
  else if(a=="l" || a=="L"){
    cout<<"Do you want pepperon : y or n ";
    cout<<"for small pzza :20/- and medium and Large :25/-   :  ";
    cin>>p;
    if(p=="Y" || p=="y"){
        cout<<"Do you want cheese it only 10/- :  y or n : ";
        cin>>c;
        if(c=="y" || c=="Y"){
          cout<<"Your Total Bill : "<<200+25+10<<endl;
        }
        else if(c=="n" || c=="N"){
          cout<<"Your Total Bill : "<<200+25<<endl;

        }
        else{
            cout<<"wrong input...";
        }
    }
    else if(p=="n" || p=="N"){
        cout<<"Do you want cheese it only 10/- :  y or n : ";
        cin>>c;
        if(c=="y" || c=="Y"){
          cout<<"Your Total Bill : "<<200+10<<endl;
        }
        else if(c=="n" || c=="N"){
          cout<<"your Total Bill : "<<200<<endl;
        }
        else{
        cout<<"wrong input...";
    }}
    else{
      cout<<"Wrong input"<<endl;
    }
  }
else{
  cout<<"your Enter pizza size is wrong ...."<<endl;
}
return 0;
}
