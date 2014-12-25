#include "StdAfx.h"
#include ".\interactiverslapp.h"

InteractiveRslApp::InteractiveRslApp(const char* PathRslModule)
{
	setRslPath(PathRslModule);
}

InteractiveRslApp::~InteractiveRslApp(void)
{
}

bool InteractiveRslApp::setRslPath(const char* pathRsl)
{	if(pathRsl) {
		strcpy(m_pathRslModule, PathRslModule);
		return true;
	}
	return false;
}

int InteractiveRslApp::Run(void)
{
	return 0;
}
