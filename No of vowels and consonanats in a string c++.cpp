#include<iostream>
using namespace std;
int main()
{
	char line[150];
	int vowels=0,consonants=0;
	cout<<"enter the string= ";
	cin.get(line,150);
	for(int i=0;line[i]!=0;i++)
	{
		if(line[i]=='a' || line[i]=='e' || line[i]=='i' || line[i]=='o' || line[i]=='u'||line[i]=='A' || line[i]=='E' || line[i]=='I' || line[i]=='O' || line[i]=='U' )
		{
		    vowels+=1;
		}
		else
		{
			consonants+=1;
		}
	}
	cout<<"\n no.of vowels are"<<vowels;
	cout<<"\n no.of consonants are"<<consonants;
	if(vowels>consonants)
	{
		cout<<"\n consonants are minimum";
	}
	else
	{
		cout<<"\n  vowels are minimum";
	}
}
