//000000000000000000000000000000000000000000
//���ļ����������ļ���
//000000000000000000000000000000000000000000
#include<iostream>
#include<string>
#include<string.h>
#include<io.h>
using namespace std;
//path ĸ�ļ���·��
//mode ���������ļ�������
//result ������������ļ��е�·����
void filesearch(string path, string mode, char *result)
{
	struct _finddata_t filefind;
	if (path[path.size() - 1] == '\\')
		path.resize(path.size() - 1);
	string curr = path + "\\*.*";
	int done = 0, handle;
	if ((handle = _findfirst(curr.c_str(), &filefind)) == -1)
		return;
	while (!(done = _findnext(handle, &filefind)))
	{
		if (!strcmp(filefind.name, ".."))
			continue;
		curr = path + "\\" + filefind.name;
		if (strstr(filefind.name, mode.c_str()))
		{
			strcpy(result, curr.c_str());
			return;
		}
		//cout<<curr<<endl;
		if (_A_SUBDIR == filefind.attrib)
			filesearch(curr, mode, result);
	}
	_findclose(handle);
}

