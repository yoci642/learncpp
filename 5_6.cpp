#include<iostream>
#include<string>
int main()
{
	using namespace std;
	cout << "Enter a word: ";
	string word;
	cin >> word;

	//������ʾ������ַ���
	for (int i = word.size() -1; i >= 0; i--)
		cout << word[i];
	cout << "\nBye.\n";
	cin.get();
	cin.get();
	return 0;
}