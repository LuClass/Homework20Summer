#include <iostream>
#include <cstring>
using namespace std;
class File{
	string Filename;
	double size;
	string CreationDate;
	string ModificationDate;
public :
     void setter(const char * F,double S,const char * C,const char * M)
     {
     	this->Filename=F;
     	this->size=S;
     	this->CreationDate=C;
     	this->ModificationDate=M;
	 }
	 string getF(){return Filename;}
	 double getS(){return size;}
	 string getC(){return CreationDate;}
	 string getM(){return ModificationDate;}
};
class MediaFile : public File{
public :
	//Audio File Type
	static const int FILE_TYPE_MP3=1;
	static const int FILE_TYPE_M4a=2;
	static const int FILE_TYPE_Wav=3;
	static const int FILE_TYPE_AMR=4;
	static const int FILE_TYPE_AMB=5;
	static const int FILE_TYPE_WMA=6;
	static const int FILE_TYPE_OGG=7;
	static const int FILE_TYPE_AAC=8;
	static const int FILE_TYPE_MKA=9;
	static const int FILE_TYPE_FLAC=10;
	//Video File Type;
	static const int FILE_TYPE_MP4=11;
	static const int FILE_TYPE_M4V=12;
	static const int FILE_TYPE_3GPP=13;
	static const int FILE_TYPE_3GPP2=14;
	static const int FILE_TYPE_WMV=15;
	static const int FILE_TYPE_ASF=16;
	static const int FILE_TYPE_MKV=17;
	static const int FILE_TYPE_MP2TS=18;
	static const int FILE_TYPE_AVI=19;
	static const int FILE_TYPE_WEBM=20;
	
	string FileType[21]={"MP3","M4a","Wav","AMR","AMB","WMA","OGG","AAC","MKA","FLAC","MP4","M4V","3GPP","3GPP2","WMV","ASF","MKV","MP2TS","AVI","WEBM"};
	string RealFileType;
	string PlayTime;
	
	//define Audio or Video
	string FileSort1;
	string FileSort2[2]={"Audio","Video"};
	void JudgeFileSort(int i)
	{
		if(i>=0&&i<=10){FileSort1=FileSort2[0];}
		else if(i>=10&&i<=20){FileSort1=FileSort2[1];}
		cout<<"File Sort: "<<FileSort1<<endl;
	}
	void SetFile(const char *a,double b,const char * c,const char * d,int File_Type,string Play_Time)
	{
		setter(a,b,c,d);
		RealFileType=FileType[File_Type];
		PlayTime=Play_Time;
	}
	void GetFile()
	{
		cout<<"FileName: "<<getF()<<endl;
		cout<<"Size: "<<getS()<<"Mb"<<endl;
		cout<<"Real File Type: "<<RealFileType<<endl;
		cout<<"Creation Date: "<<getC()<<endl;
		cout<<"Modification Date: "<<getM()<<endl;
		cout<<"Play Time: "<<PlayTime<<endl;
	}
};
int main()
{
	MediaFile x1;
	x1.SetFile("UntitledFile1",12.56,"2006:10:1","2019:8:1",1,"1:52:48");
	x1.JudgeFileSort(1);
	x1.GetFile();
	return 0;
}
