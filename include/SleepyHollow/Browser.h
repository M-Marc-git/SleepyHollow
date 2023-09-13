/**
 * \file include/SleepyHollow/Browser.h
 * \author Marc M
 * \brief Implementation d'un gestionaire d'onglets
 */
#pragma once

#include <list>
#include <mutex>

#include <SleepyHollow/Config.h>

namespace sh {

	class Tab;

	class SH Browser {
	private:
		std::list<Tab*> m_Tabs;
		std::mutex m_TabMutex;
	public:
		Browser();
		~Browser();

		/**
		 * \brief Ajoute un onglet à la liste des ongles disponibles
		 * \return nouvel onglet sur HEAP
		 */
		Tab* AddTab();
		
		/**
		 * \brief Supprime un ongle de la liste des onglets disponibles
		 * \param tab l'onglet à supprimer
		 */
		void RemoveTab(Tab* tab);
	};
}
