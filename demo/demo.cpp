// demo.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
TCHAR *usage = _T("\n-l list devices\n-s scan devices in the lan");

int _tmain(int argc, _TCHAR* argv[])
{
	int do_list = 0;
	int do_scan = 0;
	opterr = 0;
	int c;
	if (argc == 1){
		_tprintf(_T("usage :%s "),usage);
		return 0;
	}
	while ((c = getopt(argc, argv, _T("s:l"))) != -1){
		switch (c){
		case _T('s'):
			do_scan = 1;
			break;
		case _T('l'):
			do_list = 1;
			break;
		case _T('?'):
			_tprintf(_T("unknown option %c\n"), optopt);
			break;
		default:
			break;
		}
	}
	if (do_scan){
		_tprintf(_T("scaning\n"));
	}
	if (do_list){
		_tprintf(_T("listing network devices\n"));
	}

	return 0;
}

