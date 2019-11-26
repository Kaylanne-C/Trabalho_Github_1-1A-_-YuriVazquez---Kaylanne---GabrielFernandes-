#include <iostream>


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
	for(i=0;i<texto.lenght();i++)(
	if(letra1==texto[i]=letra2;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
	
	int i,j=0;
	cout<<"insira o texto:";
	getline(cin, texto);
	cout<<"insira a letra a ser procurada:";
	cin>> letra;
	for(i=0;i<texto, lenght(), i++){
	if(texto[i]==letra){
	j=j+1;
	return j;
	
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
	size_t pos = texto.find(palavra1);
    while(pos != string::npos)
    {
        texto.replace(pos,palavra1.length(),palavra2);
        pos = texto.find(palavra1);
    }
}

int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}
