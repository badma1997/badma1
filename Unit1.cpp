#include <iostream>
#include <conio.h>

 using namespace std;

  int main(int argc,char* argv[]){


 char str[100]="Hello world!",simbol;
 cout << str << endl;

    cout << "Enter simbol :";
    cin >>simbol;
    for(int i=0; str[i]!='\0';i++)
        if (str[i]==simbol && (str[i-1]==' ' || i==0))
    {
        int j=1,k=i;
        while (str[j]!=' ' && str[j]!='\0')j++;
        for(k=i;str[k+j]!='\0';k++)
            str[k]=str[k+j];
          str[k]='\0';
          i--;

    cout<< "New string : "<<str<<endl;
    }

    getch();
    return 0;
    }
