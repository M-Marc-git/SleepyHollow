#include <SleepyHollow/Browser.h>
#include <SleepyHollow/Tab.h>

int main(void) {
	sh::Browser browser;
	sh::Tab* download = browser.AddTab();



	browser.RemoveTab(download);
	return 0;
}
