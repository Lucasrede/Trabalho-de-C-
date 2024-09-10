#include <iostream>
using namespace std;



int main() {



 int i,pe[5],mao[5],podologia[5];
  string funcionarias[5];
  int salariope[5],salariomao[5],salariopodologia[5];



 for(i=0;i<5;i++){
    cout<<"Informe o nome da funcionária: ";
    cin>>funcionarias[i];
  }



 for(i=0;i<5;i++){
    cout<<"\nInforme o número total de serviços de pés feitos pela funcionária "<<funcionarias[i]<<"\n";
    cin>>pe[i];
    salariope[i]=pe[i]*10;
  }
  
  for(i=0;i<5;i++){
    cout<<"\nInforme o número total de serviços de mãos feitos pela funcionária "<<funcionarias[i]<<"\n";
    cin>>mao[i];
    salariomao[i]=mao[i]*15;
  }
  
   for(i=0;i<5;i++){
    cout<<"\nInforme o número total de serviços de podologia feitos pela funcionária "<<funcionarias[i]<<"\n";
    cin>>podologia[i];
    salariopodologia[i]=podologia[i]*30;
  }
  
  for (i=0;i<5;i++){
  cout<<"\n\nO salário da funcionária "<<funcionarias[i]<< " é:\n\n "<<"Funcionária ("<<funcionarias[i]<<") "<<"\n Pés: "<<salariope[i]<<"\n Mãos: "<<salariomao[i]<<"\n Podologia: "<<salariopodologia[i];
  }
  
  
return 0;
}
