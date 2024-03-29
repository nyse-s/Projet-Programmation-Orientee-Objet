#pragma once
//#include "Map_Personne.h"
#include "Map_Adresse.h"


namespace NS_Composants
{
	ref class Map_Client /*: public Map_Personne*/
	{
	private:
		int num_client;
		String^ nom;
		String^ prenom;
		String^ date_naissance;
		String^ TypeAdresse;
	public:
		Map_Client(void);
		String^ SELECT(void) ;
		String^ INSERT(void) ;
		String^ UPDATE(void);
		String^ UPDATE2(void) ;
		String^ DELETE(void) ;
		int getNumClient(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getTypeAdresse(void);
		//Map_Adresse^ getAdresseLivraison(void);
		//Map_Adresse^ getAdresseFacturation(void);
		String^ getDateNaissance(void);
		void setNumClient(int);
		void setNom(String^);
		void setPrenom(String^);
		//void setAdresseLivraison(int);
		//void setAdresseFacturation(int);
		void setDateNaissance(String^);
		void setTypeAdresse(String^);
	};
}
