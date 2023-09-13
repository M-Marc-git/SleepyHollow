#include <SleepyHollow/Browser.h>

#include <SleepyHollow/Tab.h>

namespace sh {

	Browser::Browser() {
	}

	Browser::~Browser() {
	}

	Tab* Browser::AddTab() {
		Tab* tab = new Tab();
		m_TabMutex.lock();
		m_Tabs.push_back(tab);
		m_TabMutex.unlock();
		return tab;
	}

	void Browser::RemoveTab(Tab* tab) {
		m_TabMutex.lock();
		for (auto it = m_Tabs.begin(); it != m_Tabs.end(); it++) {
			if (*it == tab) {
				m_Tabs.erase(it);
			}
		}
		m_TabMutex.unlock();
		delete tab;
	}
}
