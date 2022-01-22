#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
	string nome_do_arquivo;
	string text;

	cout<<"digite o nome do arquivo"<<endl;
	cin >>nome_do_arquivo;
	cout<<"\n";
	cout << "digite o conteudo do arquivo" <<endl;
	cin >>text;
           
	ofstream Myfile(nome_do_arquivo);

	Myfile << text ;
	Myfile.close();

	return 0;
}
