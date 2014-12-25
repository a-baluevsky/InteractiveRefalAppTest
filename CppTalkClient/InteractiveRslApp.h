#pragma once

class InteractiveRslApp
{
private:
	char* m_pathRslModule[1024];

public:
	InteractiveRslApp(const char* PathRslModule);
	virtual ~InteractiveRslApp(void);
	bool setRslPath(char* pathRsl);
	int Run(void);
};
