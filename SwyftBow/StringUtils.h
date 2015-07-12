#pragma once
#include <iostream>
#include <string>
#include <regex>

using namespace std;

class StringUtils
{
public:
	static string Rainbowify(string text, bool isRoom);
	static string MakeHTML(string text);
	static string StripHTML(string text);
	static bool ProcessMessage(string* text);
};

