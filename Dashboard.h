#pragma once

namespace POO {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description r�sum�e de Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilis�es.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label_gestpersonnel;
	protected:

	protected:


	protected:















	private: System::Windows::Forms::Panel^ Pannel_Titre;


	private: System::Windows::Forms::Button^ Btn_Gestion_Personnel;
	private: System::Windows::Forms::Button^ Btn_Gestion_clients;
	private: System::Windows::Forms::Button^ btn_Gestion_commandes;
	private: System::Windows::Forms::Button^ Btn_Gestion_stock;
	private: System::Windows::Forms::Button^ Btn_Gestion_stat;
	private: System::Windows::Forms::Button^ Btn_Exit_DB;
	private: System::Windows::Forms::Panel^ panel_gestion;
	private: System::Windows::Forms::Panel^ Panel_Dashboard;
	private: System::Windows::Forms::Label^ Title_Dashboard;
	private: System::Windows::Forms::Panel^ panel_Gestion_Personnel;
	private: System::Windows::Forms::Label^ Title_Gestion_Personel;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Client;

	private: System::Windows::Forms::Label^ Title_gestion_clients;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Commandes;
	private: System::Windows::Forms::Label^ Title_Gestion_Commandes;
	private: System::Windows::Forms::Panel^ panel_Gestion_Stock;
	private: System::Windows::Forms::Label^ title_Gestion_Stock;
	private: System::Windows::Forms::Panel^ Panel_Gestion_Stat;
	private: System::Windows::Forms::Label^ Title_Gestion_Stat;
	private: System::Windows::Forms::Label^ label_adressefacturation;

	private: System::Windows::Forms::Label^ label_adresselivraison;


	private: System::Windows::Forms::TextBox^ text1_message;
	private: System::Windows::Forms::DateTimePicker^ select_date_embauche;
	private: System::Windows::Forms::Label^ label_date_embauche;
	private: System::Windows::Forms::Label^ label_prenompersonnel;

	private: System::Windows::Forms::TextBox^ text_pernom;
	private: System::Windows::Forms::Label^ label_nompersonnel;

	private: System::Windows::Forms::TextBox^ text_nom;
	private: System::Windows::Forms::Label^ Label_Id_perso;
	private: System::Windows::Forms::TextBox^ text_personnel;
	private: System::Windows::Forms::ComboBox^ choice_superieur;
	private: System::Windows::Forms::Label^ label_code_postalpersonnel;

	private: System::Windows::Forms::TextBox^ textBox_code_postal;
	private: System::Windows::Forms::Label^ label_villepersonnel;





	private: System::Windows::Forms::Label^ labelpayslivraison;
	private: System::Windows::Forms::Label^ label_adressepersonnel;



	private: System::Windows::Forms::TextBox^ text_adresse;



	private: System::Windows::Forms::Label^ label_Superieur;
	private: System::Windows::Forms::Label^ label_payspersonnel;


	private: System::Windows::Forms::DataGridView^ dataGridView1;
private: Bunifu::Framework::UI::BunifuThinButton2^ btn_enregistrer_Personnel;
private: Bunifu::Framework::UI::BunifuThinButton2^ Btn_Supprimer_Personnel;



private: Bunifu::Framework::UI::BunifuThinButton2^ btn_modifier_Personnel;


private: Bunifu::Framework::UI::BunifuThinButton2^ btn_nouveau_Personnel;





	private: System::Windows::Forms::ComboBox^ choice_departement;
	private: System::Windows::Forms::TextBox^ text_ville;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id_Personnel;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ nom;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ prenom;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ date_embauche;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Superieur;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adresse;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ville;
private: System::Windows::Forms::DataGridViewComboBoxColumn^ pays;
private: System::Windows::Forms::DataGridViewComboBoxColumn^ code_postal;




	private: System::Windows::Forms::Label^ labelvillelivraison;

	private: System::Windows::Forms::Label^ labelcodepostalelivraison;

	private: System::Windows::Forms::Label^ labeladressepostlivraison;

	private: System::Windows::Forms::Label^ labelidadresselivraison;
	private: System::Windows::Forms::TextBox^ text_adressepostalelivraison;
	private: System::Windows::Forms::TextBox^ text_payslivraison;



	private: System::Windows::Forms::TextBox^ text_villelivraison;
private: System::Windows::Forms::TextBox^ text_codepostalelivraison;



	private: System::Windows::Forms::TextBox^ text_idadresselivraison;



	private: System::Windows::Forms::Label^ labeldatenaissance;

	private: System::Windows::Forms::Label^ labelprenomclient;

	private: System::Windows::Forms::Label^ labelnomclient;

	private: System::Windows::Forms::Label^ labelidclient;
private: System::Windows::Forms::TextBox^ text_nomclient;



private: System::Windows::Forms::TextBox^ text_datenaissance;

private: System::Windows::Forms::TextBox^ text_prenomclient;

private: System::Windows::Forms::TextBox^ text_idclient;






private: System::Windows::Forms::DataGridView^ dataGridView_gestclient;


private: System::Windows::Forms::Label^ labelchampclient;
private: System::Windows::Forms::Label^ labelpaysfacturation;

private: System::Windows::Forms::Label^ labelvillefacturation;

private: System::Windows::Forms::Label^ labelcodepostalefacturation;

private: System::Windows::Forms::Label^ labeladressepostalefacturation;

private: System::Windows::Forms::Label^ labelidadressefacturation;
private: System::Windows::Forms::TextBox^ text_adressepostalefacturation;
private: System::Windows::Forms::TextBox^ text_paysfacturation;



private: System::Windows::Forms::TextBox^ text_villefacturation;

private: System::Windows::Forms::TextBox^ text_codepostalefacturation;

private: System::Windows::Forms::TextBox^ text_idadressefacturation;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_supprimer;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_modiffier;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_ajouter;
private: Bunifu::Framework::UI::BunifuThinButton2^ button1_afficher;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_supprimer;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_modifier;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_ajouter;
private: Bunifu::Framework::UI::BunifuThinButton2^ button2_afficher;
private: System::Windows::Forms::TextBox^ text_messagecommande;


















private: System::Windows::Forms::Label^ label_datelivraison;












private: System::Windows::Forms::Label^ label_monanttotHT;

private: System::Windows::Forms::Label^ label2_idclientcommande;
private: System::Windows::Forms::Label^ labelref_commande;
private: System::Windows::Forms::TextBox^ text_idclientcommande;
private: System::Windows::Forms::TextBox^ text_datelivraison;



private: System::Windows::Forms::TextBox^ text_montanttotHT;

private: System::Windows::Forms::TextBox^ text_refcommande;
private: System::Windows::Forms::DataGridView^ dataGridView_gestcommande;



private: System::Windows::Forms::Label^ label_montanttotTTC;
private: System::Windows::Forms::TextBox^ text_montanttotTTC;


private: System::Windows::Forms::Label^ label_montanttotTVA;
private: System::Windows::Forms::TextBox^ text_montanttotTVA;


private: System::Windows::Forms::Label^ label2_informationsgen;
private: System::Windows::Forms::Label^ label_dateemission;
private: System::Windows::Forms::TextBox^ text_dateemission;
private: System::Windows::Forms::Label^ label_datepaiement;
private: System::Windows::Forms::TextBox^ text_datepaiement;




private: System::Windows::Forms::Label^ label2_paiementcommande;
private: System::Windows::Forms::Label^ label_mypaiement;


private: System::Windows::Forms::Label^ label_nbpaiement;
private: System::Windows::Forms::TextBox^ text_mypaiement;


private: System::Windows::Forms::TextBox^ text_nbpaiement;
private: System::Windows::Forms::Label^ label_infofact;


private: System::Windows::Forms::Label^ label_soldereglement;
private: System::Windows::Forms::Label^ label_idadressesociete;


private: System::Windows::Forms::Label^ label_societe;

private: System::Windows::Forms::Label^ label_nmservice;

private: System::Windows::Forms::Label^ label_idfacture;
private: System::Windows::Forms::TextBox^ text_nmservice;


private: System::Windows::Forms::TextBox^ text_soldereglement;
private: System::Windows::Forms::TextBox^ text_idadressesociete;


private: System::Windows::Forms::TextBox^ text_societe;

private: System::Windows::Forms::TextBox^ text_idfacture;
private: System::Windows::Forms::Label^ label_payssociete;


private: System::Windows::Forms::Label^ label_codepostsociete;
private: System::Windows::Forms::TextBox^ text_payssociete;


private: System::Windows::Forms::TextBox^ text_codepostsociete;

private: System::Windows::Forms::Label^ label_villesociete;

private: System::Windows::Forms::Label^ label_adressepostsociete;
private: System::Windows::Forms::TextBox^ text_villesociete;


private: System::Windows::Forms::TextBox^ text_adressepostsociete;

private: Bunifu::Framework::UI::BunifuThinButton2^ button2_nouveau;
private: System::Windows::Forms::Label^ label_idadfactcommande;
private: System::Windows::Forms::TextBox^ text_idadfactcommande;


private: System::Windows::Forms::Label^ label_idadlivcommande;
private: System::Windows::Forms::TextBox^ text_idadlivcommande;


private: Bunifu::Framework::UI::BunifuThinButton2^ button1_nouveau;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton29;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton28;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton27;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton26;




private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton21;






private: System::Windows::Forms::Label^ label12;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton22;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton23;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton24;
private: Bunifu::Framework::UI::BunifuThinButton2^ bunifuThinButton25;
private: System::Windows::Forms::TextBox^ textBox11;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::TextBox^ textBox16;
private: System::Windows::Forms::TextBox^ textBox17;
private: System::Windows::Forms::TextBox^ textBox18;

private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::ComboBox^ comboBox_TVAStat;
private: System::Windows::Forms::TextBox^ text_ref_article;

private: System::Windows::Forms::Label^ label_ref_article;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label_Couleur_Article;


private: System::Windows::Forms::TextBox^ text_Taux_TVA_Article;

private: System::Windows::Forms::Label^ label_Taux_TVA;
private: System::Windows::Forms::TextBox^ text_Approvisionnement_Article;


private: System::Windows::Forms::Label^ label_Approvisionnement;



private: System::Windows::Forms::TextBox^ text_Prix_HT;

private: System::Windows::Forms::Label^ label_Prix_HT;

private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label_remise_article;

private: System::Windows::Forms::TextBox^ text_Stock_Article;

private: System::Windows::Forms::Label^ label_stock;

private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label_nom_article;
private: System::Windows::Forms::TextBox^ text_Nature_article;
private: System::Windows::Forms::Label^ label_Nature;
private: Bunifu::Framework::UI::BunifuThinButton2^ btn_enregistrer_Stock;
private: Bunifu::Framework::UI::BunifuThinButton2^ btn_Supprimer_Stock;

private: Bunifu::Framework::UI::BunifuThinButton2^ btn_Modifier_Stock;

private: Bunifu::Framework::UI::BunifuThinButton2^ btn_nouveau_Stock;
private: System::Windows::Forms::TextBox^ Textbox_Message_Stock;







































	private:
		/// <summary>
		/// Variable n�cessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�thode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette m�thode avec l'�diteur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dashboard::typeid));
			this->label_gestpersonnel = (gcnew System::Windows::Forms::Label());
			this->Pannel_Titre = (gcnew System::Windows::Forms::Panel());
			this->panel_Gestion_Personnel = (gcnew System::Windows::Forms::Panel());
			this->text_ville = (gcnew System::Windows::Forms::TextBox());
			this->choice_departement = (gcnew System::Windows::Forms::ComboBox());
			this->Btn_Supprimer_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_modifier_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_nouveau_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_enregistrer_Personnel = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id_Personnel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->prenom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->date_embauche = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->Superieur = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->adresse = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ville = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pays = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->code_postal = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->label_payspersonnel = (gcnew System::Windows::Forms::Label());
			this->choice_superieur = (gcnew System::Windows::Forms::ComboBox());
			this->label_code_postalpersonnel = (gcnew System::Windows::Forms::Label());
			this->textBox_code_postal = (gcnew System::Windows::Forms::TextBox());
			this->label_villepersonnel = (gcnew System::Windows::Forms::Label());
			this->label_adressepersonnel = (gcnew System::Windows::Forms::Label());
			this->text_adresse = (gcnew System::Windows::Forms::TextBox());
			this->label_Superieur = (gcnew System::Windows::Forms::Label());
			this->select_date_embauche = (gcnew System::Windows::Forms::DateTimePicker());
			this->label_date_embauche = (gcnew System::Windows::Forms::Label());
			this->label_prenompersonnel = (gcnew System::Windows::Forms::Label());
			this->text_pernom = (gcnew System::Windows::Forms::TextBox());
			this->label_nompersonnel = (gcnew System::Windows::Forms::Label());
			this->text_nom = (gcnew System::Windows::Forms::TextBox());
			this->Label_Id_perso = (gcnew System::Windows::Forms::Label());
			this->text_personnel = (gcnew System::Windows::Forms::TextBox());
			this->Title_Gestion_Personel = (gcnew System::Windows::Forms::Label());
			this->Btn_Gestion_Personnel = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_clients = (gcnew System::Windows::Forms::Button());
			this->btn_Gestion_commandes = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stock = (gcnew System::Windows::Forms::Button());
			this->Btn_Gestion_stat = (gcnew System::Windows::Forms::Button());
			this->Btn_Exit_DB = (gcnew System::Windows::Forms::Button());
			this->panel_gestion = (gcnew System::Windows::Forms::Panel());
			this->Panel_Dashboard = (gcnew System::Windows::Forms::Panel());
			this->Title_Dashboard = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Client = (gcnew System::Windows::Forms::Panel());
			this->button1_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_modiffier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_ajouter = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button1_afficher = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->labelpaysfacturation = (gcnew System::Windows::Forms::Label());
			this->labelvillefacturation = (gcnew System::Windows::Forms::Label());
			this->labelcodepostalefacturation = (gcnew System::Windows::Forms::Label());
			this->labeladressepostalefacturation = (gcnew System::Windows::Forms::Label());
			this->labelidadressefacturation = (gcnew System::Windows::Forms::Label());
			this->text_adressepostalefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_paysfacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_villefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostalefacturation = (gcnew System::Windows::Forms::TextBox());
			this->text_idadressefacturation = (gcnew System::Windows::Forms::TextBox());
			this->labelchampclient = (gcnew System::Windows::Forms::Label());
			this->label_adressefacturation = (gcnew System::Windows::Forms::Label());
			this->label_adresselivraison = (gcnew System::Windows::Forms::Label());
			this->text1_message = (gcnew System::Windows::Forms::TextBox());
			this->labelpayslivraison = (gcnew System::Windows::Forms::Label());
			this->labelvillelivraison = (gcnew System::Windows::Forms::Label());
			this->labelcodepostalelivraison = (gcnew System::Windows::Forms::Label());
			this->labeladressepostlivraison = (gcnew System::Windows::Forms::Label());
			this->labelidadresselivraison = (gcnew System::Windows::Forms::Label());
			this->text_adressepostalelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_payslivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_villelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostalelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_idadresselivraison = (gcnew System::Windows::Forms::TextBox());
			this->labeldatenaissance = (gcnew System::Windows::Forms::Label());
			this->labelprenomclient = (gcnew System::Windows::Forms::Label());
			this->labelnomclient = (gcnew System::Windows::Forms::Label());
			this->labelidclient = (gcnew System::Windows::Forms::Label());
			this->text_nomclient = (gcnew System::Windows::Forms::TextBox());
			this->text_datenaissance = (gcnew System::Windows::Forms::TextBox());
			this->text_prenomclient = (gcnew System::Windows::Forms::TextBox());
			this->text_idclient = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_gestclient = (gcnew System::Windows::Forms::DataGridView());
			this->Title_gestion_clients = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Commandes = (gcnew System::Windows::Forms::Panel());
			this->label_idadfactcommande = (gcnew System::Windows::Forms::Label());
			this->text_idadfactcommande = (gcnew System::Windows::Forms::TextBox());
			this->label_idadlivcommande = (gcnew System::Windows::Forms::Label());
			this->text_idadlivcommande = (gcnew System::Windows::Forms::TextBox());
			this->button2_nouveau = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label_payssociete = (gcnew System::Windows::Forms::Label());
			this->label_codepostsociete = (gcnew System::Windows::Forms::Label());
			this->text_payssociete = (gcnew System::Windows::Forms::TextBox());
			this->text_codepostsociete = (gcnew System::Windows::Forms::TextBox());
			this->label_villesociete = (gcnew System::Windows::Forms::Label());
			this->label_adressepostsociete = (gcnew System::Windows::Forms::Label());
			this->text_villesociete = (gcnew System::Windows::Forms::TextBox());
			this->text_adressepostsociete = (gcnew System::Windows::Forms::TextBox());
			this->label_datepaiement = (gcnew System::Windows::Forms::Label());
			this->text_datepaiement = (gcnew System::Windows::Forms::TextBox());
			this->label2_paiementcommande = (gcnew System::Windows::Forms::Label());
			this->label_mypaiement = (gcnew System::Windows::Forms::Label());
			this->label_nbpaiement = (gcnew System::Windows::Forms::Label());
			this->text_mypaiement = (gcnew System::Windows::Forms::TextBox());
			this->text_nbpaiement = (gcnew System::Windows::Forms::TextBox());
			this->label_dateemission = (gcnew System::Windows::Forms::Label());
			this->text_dateemission = (gcnew System::Windows::Forms::TextBox());
			this->label_montanttotTTC = (gcnew System::Windows::Forms::Label());
			this->text_montanttotTTC = (gcnew System::Windows::Forms::TextBox());
			this->label_montanttotTVA = (gcnew System::Windows::Forms::Label());
			this->text_montanttotTVA = (gcnew System::Windows::Forms::TextBox());
			this->label2_informationsgen = (gcnew System::Windows::Forms::Label());
			this->button2_supprimer = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button2_modifier = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button2_ajouter = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->button2_afficher = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label_infofact = (gcnew System::Windows::Forms::Label());
			this->text_messagecommande = (gcnew System::Windows::Forms::TextBox());
			this->label_soldereglement = (gcnew System::Windows::Forms::Label());
			this->label_idadressesociete = (gcnew System::Windows::Forms::Label());
			this->label_societe = (gcnew System::Windows::Forms::Label());
			this->label_nmservice = (gcnew System::Windows::Forms::Label());
			this->label_idfacture = (gcnew System::Windows::Forms::Label());
			this->text_nmservice = (gcnew System::Windows::Forms::TextBox());
			this->text_soldereglement = (gcnew System::Windows::Forms::TextBox());
			this->text_idadressesociete = (gcnew System::Windows::Forms::TextBox());
			this->text_societe = (gcnew System::Windows::Forms::TextBox());
			this->text_idfacture = (gcnew System::Windows::Forms::TextBox());
			this->label_datelivraison = (gcnew System::Windows::Forms::Label());
			this->label_monanttotHT = (gcnew System::Windows::Forms::Label());
			this->label2_idclientcommande = (gcnew System::Windows::Forms::Label());
			this->labelref_commande = (gcnew System::Windows::Forms::Label());
			this->text_idclientcommande = (gcnew System::Windows::Forms::TextBox());
			this->text_datelivraison = (gcnew System::Windows::Forms::TextBox());
			this->text_montanttotHT = (gcnew System::Windows::Forms::TextBox());
			this->text_refcommande = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView_gestcommande = (gcnew System::Windows::Forms::DataGridView());
			this->Title_Gestion_Commandes = (gcnew System::Windows::Forms::Label());
			this->panel_Gestion_Stock = (gcnew System::Windows::Forms::Panel());
			this->title_Gestion_Stock = (gcnew System::Windows::Forms::Label());
			this->Panel_Gestion_Stat = (gcnew System::Windows::Forms::Panel());
			this->comboBox_TVAStat = (gcnew System::Windows::Forms::ComboBox());
			this->bunifuThinButton29 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton28 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton27 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton26 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton21 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->bunifuThinButton22 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton23 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton24 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->bunifuThinButton25 = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Title_Gestion_Stat = (gcnew System::Windows::Forms::Label());
			this->label_ref_article = (gcnew System::Windows::Forms::Label());
			this->text_ref_article = (gcnew System::Windows::Forms::TextBox());
			this->text_Nature_article = (gcnew System::Windows::Forms::TextBox());
			this->label_Nature = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label_nom_article = (gcnew System::Windows::Forms::Label());
			this->text_Prix_HT = (gcnew System::Windows::Forms::TextBox());
			this->label_Prix_HT = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label_remise_article = (gcnew System::Windows::Forms::Label());
			this->text_Stock_Article = (gcnew System::Windows::Forms::TextBox());
			this->label_stock = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label_Couleur_Article = (gcnew System::Windows::Forms::Label());
			this->text_Taux_TVA_Article = (gcnew System::Windows::Forms::TextBox());
			this->label_Taux_TVA = (gcnew System::Windows::Forms::Label());
			this->text_Approvisionnement_Article = (gcnew System::Windows::Forms::TextBox());
			this->label_Approvisionnement = (gcnew System::Windows::Forms::Label());
			this->btn_enregistrer_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_nouveau_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_Modifier_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->btn_Supprimer_Stock = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->Textbox_Message_Stock = (gcnew System::Windows::Forms::TextBox());
			this->panel_Gestion_Personnel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel_gestion->SuspendLayout();
			this->Panel_Dashboard->SuspendLayout();
			this->Panel_Gestion_Client->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->BeginInit();
			this->Panel_Gestion_Commandes->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestcommande))->BeginInit();
			this->panel_Gestion_Stock->SuspendLayout();
			this->Panel_Gestion_Stat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// label_gestpersonnel
			// 
			this->label_gestpersonnel->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label_gestpersonnel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label_gestpersonnel->Location = System::Drawing::Point(464, 45);
			this->label_gestpersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_gestpersonnel->Name = L"label_gestpersonnel";
			this->label_gestpersonnel->Size = System::Drawing::Size(1092, 106);
			this->label_gestpersonnel->TabIndex = 0;
			this->label_gestpersonnel->Text = L"Gestion Personnel";
			this->label_gestpersonnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Pannel_Titre
			// 
			this->Pannel_Titre->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Pannel_Titre.BackgroundImage")));
			this->Pannel_Titre->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->Pannel_Titre->Dock = System::Windows::Forms::DockStyle::Top;
			this->Pannel_Titre->Location = System::Drawing::Point(0, 0);
			this->Pannel_Titre->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Pannel_Titre->Name = L"Pannel_Titre";
			this->Pannel_Titre->Size = System::Drawing::Size(488, 500);
			this->Pannel_Titre->TabIndex = 0;
			// 
			// panel_Gestion_Personnel
			// 
			this->panel_Gestion_Personnel->Controls->Add(this->text_ville);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_departement);
			this->panel_Gestion_Personnel->Controls->Add(this->Btn_Supprimer_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->btn_modifier_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->btn_nouveau_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->btn_enregistrer_Personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->dataGridView1);
			this->panel_Gestion_Personnel->Controls->Add(this->label_payspersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->choice_superieur);
			this->panel_Gestion_Personnel->Controls->Add(this->label_code_postalpersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->textBox_code_postal);
			this->panel_Gestion_Personnel->Controls->Add(this->label_villepersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->label_adressepersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->text_adresse);
			this->panel_Gestion_Personnel->Controls->Add(this->label_Superieur);
			this->panel_Gestion_Personnel->Controls->Add(this->select_date_embauche);
			this->panel_Gestion_Personnel->Controls->Add(this->label_date_embauche);
			this->panel_Gestion_Personnel->Controls->Add(this->label_prenompersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->text_pernom);
			this->panel_Gestion_Personnel->Controls->Add(this->label_nompersonnel);
			this->panel_Gestion_Personnel->Controls->Add(this->text_nom);
			this->panel_Gestion_Personnel->Controls->Add(this->Label_Id_perso);
			this->panel_Gestion_Personnel->Controls->Add(this->text_personnel);
			this->panel_Gestion_Personnel->Controls->Add(this->Title_Gestion_Personel);
			this->panel_Gestion_Personnel->Location = System::Drawing::Point(1975, 4);
			this->panel_Gestion_Personnel->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->panel_Gestion_Personnel->Name = L"panel_Gestion_Personnel";
			this->panel_Gestion_Personnel->Size = System::Drawing::Size(1305, 747);
			this->panel_Gestion_Personnel->TabIndex = 2;
			this->panel_Gestion_Personnel->Visible = false;
			this->panel_Gestion_Personnel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::panel_Gestion_Personnel_Paint);
			// 
			// text_ville
			// 
			this->text_ville->Location = System::Drawing::Point(595, 421);
			this->text_ville->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->text_ville->Name = L"text_ville";
			this->text_ville->Size = System::Drawing::Size(239, 31);
			this->text_ville->TabIndex = 27;
			// 
			// choice_departement
			// 
			this->choice_departement->FormattingEnabled = true;
			this->choice_departement->Items->AddRange(gcnew cli::array< System::Object^  >(96) {
				L"Ain", L"Aisne", L"Allier", L"Alpes de Haute-Provence",
					L"Hautes-Alpes", L"Alpes-Maritimes", L"Ard�che", L"Ardennes", L"Ari�ge", L"Aube", L"Aude", L"Aveyron", L"Bouches-du-Rh�ne", L"Calvados",
					L"Cantal", L"Charente", L"Charente-Maritime", L"Cher", L"Corr�ze", L"Corse-du-Sud", L"Haute-Corse", L"C�te-d\'Or", L"C�tes d\'Armor",
					L"Creuse", L"Dordogne", L"Doubs", L"Dr�me", L"Eure", L"Eure-et-Loir", L"Finist�re", L"Gard", L"Haute-Garonne", L"Gers", L"Gironde",
					L"H�rault", L"�le-et-Vilaine", L"Indre", L"Indre-et-Loire", L"Is�re", L"Jura", L"Landes", L"Loir-et-Cher", L"Loire", L"Haute-Loire",
					L"Loire-Atlantique", L"Loiret", L"Lot", L"Lot-et-Garonne", L"Loz�re", L"Maine-et-Loire", L"Manche", L"Marne", L"Haute-Marne",
					L"Mayenne", L"Meurthe-et-Moselle", L"Meuse", L"Morbihan", L"Moselle", L"Ni�vre", L"Nord", L"Oise", L"Orne", L"Pas-de-Calais",
					L"Puy-de-D�me", L"Pyr�n�es-Atlantiques", L"Hautes-Pyr�n�es", L"Pyr�n�es-Orientales", L"Bas-Rhin", L"Haut-Rhin", L"Rh�ne", L"Haute-Sa�ne",
					L"Sa�ne-et-Loire", L"Sarthe", L"Savoie", L"Haute-Savoie", L"Paris", L"Seine-Maritime", L"Seine-et-Marne", L"Yvelines", L"Deux-S�vres",
					L"Somme", L"Tarn", L"Tarn-et-Garonne", L"Var", L"Vaucluse", L"Vend�e", L"Vienne", L"Haute-Vienne", L"Vosges", L"Yonne", L"Territoire-de-Belfort",
					L"Essonne", L"Hauts-de-Seine", L"Seine-Saint-Denis", L"Val-de-Marne", L"Val-d\'Oise"
			});
			this->choice_departement->Location = System::Drawing::Point(884, 421);
			this->choice_departement->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->choice_departement->Name = L"choice_departement";
			this->choice_departement->Size = System::Drawing::Size(239, 33);
			this->choice_departement->TabIndex = 26;
			// 
			// Btn_Supprimer_Personnel
			// 
			this->Btn_Supprimer_Personnel->ActiveBorderThickness = 1;
			this->Btn_Supprimer_Personnel->ActiveCornerRadius = 20;
			this->Btn_Supprimer_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->Btn_Supprimer_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->Btn_Supprimer_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->Btn_Supprimer_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Btn_Supprimer_Personnel.BackgroundImage")));
			this->Btn_Supprimer_Personnel->ButtonText = L"Supprimer";
			this->Btn_Supprimer_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Btn_Supprimer_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Supprimer_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->IdleBorderThickness = 1;
			this->Btn_Supprimer_Personnel->IdleCornerRadius = 20;
			this->Btn_Supprimer_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->Btn_Supprimer_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->Btn_Supprimer_Personnel->Location = System::Drawing::Point(1019, 635);
			this->Btn_Supprimer_Personnel->Margin = System::Windows::Forms::Padding(12);
			this->Btn_Supprimer_Personnel->Name = L"Btn_Supprimer_Personnel";
			this->Btn_Supprimer_Personnel->Size = System::Drawing::Size(267, 156);
			this->Btn_Supprimer_Personnel->TabIndex = 25;
			this->Btn_Supprimer_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_modifier_Personnel
			// 
			this->btn_modifier_Personnel->ActiveBorderThickness = 1;
			this->btn_modifier_Personnel->ActiveCornerRadius = 20;
			this->btn_modifier_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_modifier_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_modifier_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_modifier_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_modifier_Personnel.BackgroundImage")));
			this->btn_modifier_Personnel->ButtonText = L"Modifier";
			this->btn_modifier_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_modifier_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_modifier_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->IdleBorderThickness = 1;
			this->btn_modifier_Personnel->IdleCornerRadius = 20;
			this->btn_modifier_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_modifier_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_modifier_Personnel->Location = System::Drawing::Point(700, 635);
			this->btn_modifier_Personnel->Margin = System::Windows::Forms::Padding(12);
			this->btn_modifier_Personnel->Name = L"btn_modifier_Personnel";
			this->btn_modifier_Personnel->Size = System::Drawing::Size(267, 156);
			this->btn_modifier_Personnel->TabIndex = 24;
			this->btn_modifier_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_nouveau_Personnel
			// 
			this->btn_nouveau_Personnel->ActiveBorderThickness = 1;
			this->btn_nouveau_Personnel->ActiveCornerRadius = 20;
			this->btn_nouveau_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_nouveau_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_nouveau_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nouveau_Personnel.BackgroundImage")));
			this->btn_nouveau_Personnel->ButtonText = L"Nouveau";
			this->btn_nouveau_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_nouveau_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_nouveau_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->IdleBorderThickness = 1;
			this->btn_nouveau_Personnel->IdleCornerRadius = 20;
			this->btn_nouveau_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Personnel->Location = System::Drawing::Point(372, 635);
			this->btn_nouveau_Personnel->Margin = System::Windows::Forms::Padding(12);
			this->btn_nouveau_Personnel->Name = L"btn_nouveau_Personnel";
			this->btn_nouveau_Personnel->Size = System::Drawing::Size(267, 156);
			this->btn_nouveau_Personnel->TabIndex = 23;
			this->btn_nouveau_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_nouveau_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::btn_nouveau_Click);
			// 
			// btn_enregistrer_Personnel
			// 
			this->btn_enregistrer_Personnel->ActiveBorderThickness = 1;
			this->btn_enregistrer_Personnel->ActiveCornerRadius = 20;
			this->btn_enregistrer_Personnel->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Personnel->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_enregistrer_Personnel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_enregistrer_Personnel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_enregistrer_Personnel.BackgroundImage")));
			this->btn_enregistrer_Personnel->ButtonText = L"Enregistrer";
			this->btn_enregistrer_Personnel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_enregistrer_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btn_enregistrer_Personnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->IdleBorderThickness = 1;
			this->btn_enregistrer_Personnel->IdleCornerRadius = 20;
			this->btn_enregistrer_Personnel->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Personnel->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Personnel->Location = System::Drawing::Point(43, 635);
			this->btn_enregistrer_Personnel->Margin = System::Windows::Forms::Padding(12);
			this->btn_enregistrer_Personnel->Name = L"btn_enregistrer_Personnel";
			this->btn_enregistrer_Personnel->Size = System::Drawing::Size(267, 156);
			this->btn_enregistrer_Personnel->TabIndex = 22;
			this->btn_enregistrer_Personnel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_enregistrer_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::button_enregistrer_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->Id_Personnel,
					this->nom, this->prenom, this->date_embauche, this->Superieur, this->adresse, this->ville, this->pays, this->code_postal
			});
			this->dataGridView1->Location = System::Drawing::Point(5, 829);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 82;
			this->dataGridView1->Size = System::Drawing::Size(1448, 208);
			this->dataGridView1->TabIndex = 21;
			// 
			// Id_Personnel
			// 
			this->Id_Personnel->HeaderText = L"Id_Personnel";
			this->Id_Personnel->MinimumWidth = 10;
			this->Id_Personnel->Name = L"Id_Personnel";
			this->Id_Personnel->Width = 200;
			// 
			// nom
			// 
			this->nom->HeaderText = L"nom";
			this->nom->MinimumWidth = 10;
			this->nom->Name = L"nom";
			this->nom->Width = 200;
			// 
			// prenom
			// 
			this->prenom->HeaderText = L"prenom";
			this->prenom->MinimumWidth = 10;
			this->prenom->Name = L"prenom";
			this->prenom->Width = 200;
			// 
			// date_embauche
			// 
			this->date_embauche->HeaderText = L"date_embauche";
			this->date_embauche->MinimumWidth = 10;
			this->date_embauche->Name = L"date_embauche";
			this->date_embauche->Width = 200;
			// 
			// Superieur
			// 
			this->Superieur->HeaderText = L"Superieur";
			this->Superieur->MinimumWidth = 10;
			this->Superieur->Name = L"Superieur";
			this->Superieur->Width = 200;
			// 
			// adresse
			// 
			this->adresse->HeaderText = L"adresse";
			this->adresse->MinimumWidth = 10;
			this->adresse->Name = L"adresse";
			this->adresse->Width = 200;
			// 
			// ville
			// 
			this->ville->HeaderText = L"ville";
			this->ville->MinimumWidth = 10;
			this->ville->Name = L"ville";
			this->ville->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->ville->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			this->ville->Width = 200;
			// 
			// pays
			// 
			this->pays->HeaderText = L"pays";
			this->pays->MinimumWidth = 10;
			this->pays->Name = L"pays";
			this->pays->Width = 200;
			// 
			// code_postal
			// 
			this->code_postal->HeaderText = L"code_postal";
			this->code_postal->MinimumWidth = 10;
			this->code_postal->Name = L"code_postal";
			this->code_postal->Width = 200;
			// 
			// label_payspersonnel
			// 
			this->label_payspersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_payspersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_payspersonnel->Location = System::Drawing::Point(876, 362);
			this->label_payspersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_payspersonnel->Name = L"label_payspersonnel";
			this->label_payspersonnel->Size = System::Drawing::Size(200, 52);
			this->label_payspersonnel->TabIndex = 20;
			this->label_payspersonnel->Text = L"d�partement";
			this->label_payspersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label_departement_Click);
			// 
			// choice_superieur
			// 
			this->choice_superieur->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(2) { L"oui", L"non" });
			this->choice_superieur->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->choice_superieur->FormattingEnabled = true;
			this->choice_superieur->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"oui", L"non" });
			this->choice_superieur->Location = System::Drawing::Point(67, 560);
			this->choice_superieur->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->choice_superieur->Name = L"choice_superieur";
			this->choice_superieur->Size = System::Drawing::Size(239, 33);
			this->choice_superieur->TabIndex = 18;
			this->choice_superieur->SelectedIndexChanged += gcnew System::EventHandler(this, &Dashboard::choice_superieur_SelectedIndexChanged);
			// 
			// label_code_postalpersonnel
			// 
			this->label_code_postalpersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_code_postalpersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_code_postalpersonnel->Location = System::Drawing::Point(600, 502);
			this->label_code_postalpersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_code_postalpersonnel->Name = L"label_code_postalpersonnel";
			this->label_code_postalpersonnel->Size = System::Drawing::Size(200, 52);
			this->label_code_postalpersonnel->TabIndex = 17;
			this->label_code_postalpersonnel->Text = L"code postal";
			// 
			// textBox_code_postal
			// 
			this->textBox_code_postal->Location = System::Drawing::Point(595, 562);
			this->textBox_code_postal->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->textBox_code_postal->Name = L"textBox_code_postal";
			this->textBox_code_postal->Size = System::Drawing::Size(528, 31);
			this->textBox_code_postal->TabIndex = 16;
			this->textBox_code_postal->TextChanged += gcnew System::EventHandler(this, &Dashboard::textBox_code_postal_TextChanged);
			// 
			// label_villepersonnel
			// 
			this->label_villepersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_villepersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_villepersonnel->Location = System::Drawing::Point(587, 362);
			this->label_villepersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_villepersonnel->Name = L"label_villepersonnel";
			this->label_villepersonnel->Size = System::Drawing::Size(200, 52);
			this->label_villepersonnel->TabIndex = 15;
			this->label_villepersonnel->Text = L"ville";
			// 
			// label_adressepersonnel
			// 
			this->label_adressepersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adressepersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_adressepersonnel->Location = System::Drawing::Point(587, 252);
			this->label_adressepersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_adressepersonnel->Name = L"label_adressepersonnel";
			this->label_adressepersonnel->Size = System::Drawing::Size(200, 52);
			this->label_adressepersonnel->TabIndex = 13;
			this->label_adressepersonnel->Text = L"adresse";
			this->label_adressepersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label3_Click);
			// 
			// text_adresse
			// 
			this->text_adresse->Location = System::Drawing::Point(595, 310);
			this->text_adresse->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->text_adresse->Name = L"text_adresse";
			this->text_adresse->Size = System::Drawing::Size(528, 31);
			this->text_adresse->TabIndex = 12;
			this->text_adresse->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_adresse_TextChanged);
			// 
			// label_Superieur
			// 
			this->label_Superieur->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_Superieur->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Superieur->Location = System::Drawing::Point(59, 502);
			this->label_Superieur->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_Superieur->Name = L"label_Superieur";
			this->label_Superieur->Size = System::Drawing::Size(200, 52);
			this->label_Superieur->TabIndex = 11;
			this->label_Superieur->Text = L"Superieur";
			this->label_Superieur->Click += gcnew System::EventHandler(this, &Dashboard::label_Superieur_Click);
			// 
			// select_date_embauche
			// 
			this->select_date_embauche->Location = System::Drawing::Point(595, 185);
			this->select_date_embauche->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->select_date_embauche->Name = L"select_date_embauche";
			this->select_date_embauche->Size = System::Drawing::Size(336, 31);
			this->select_date_embauche->TabIndex = 9;
			this->select_date_embauche->ValueChanged += gcnew System::EventHandler(this, &Dashboard::select_date_embauche_ValueChanged);
			// 
			// label_date_embauche
			// 
			this->label_date_embauche->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_date_embauche->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_date_embauche->Location = System::Drawing::Point(587, 122);
			this->label_date_embauche->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_date_embauche->Name = L"label_date_embauche";
			this->label_date_embauche->Size = System::Drawing::Size(276, 52);
			this->label_date_embauche->TabIndex = 8;
			this->label_date_embauche->Text = L"date d\'embauche";
			this->label_date_embauche->Click += gcnew System::EventHandler(this, &Dashboard::label_date_embauche_Click);
			// 
			// label_prenompersonnel
			// 
			this->label_prenompersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_prenompersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_prenompersonnel->Location = System::Drawing::Point(59, 375);
			this->label_prenompersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_prenompersonnel->Name = L"label_prenompersonnel";
			this->label_prenompersonnel->Size = System::Drawing::Size(200, 52);
			this->label_prenompersonnel->TabIndex = 6;
			this->label_prenompersonnel->Text = L"prenom";
			this->label_prenompersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label_pernom_Click);
			// 
			// text_pernom
			// 
			this->text_pernom->Location = System::Drawing::Point(67, 432);
			this->text_pernom->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->text_pernom->Name = L"text_pernom";
			this->text_pernom->Size = System::Drawing::Size(264, 31);
			this->text_pernom->TabIndex = 5;
			this->text_pernom->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_pernom_TextChanged);
			// 
			// label_nompersonnel
			// 
			this->label_nompersonnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nompersonnel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_nompersonnel->Location = System::Drawing::Point(59, 252);
			this->label_nompersonnel->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->label_nompersonnel->Name = L"label_nompersonnel";
			this->label_nompersonnel->Size = System::Drawing::Size(200, 52);
			this->label_nompersonnel->TabIndex = 4;
			this->label_nompersonnel->Text = L"nom";
			this->label_nompersonnel->Click += gcnew System::EventHandler(this, &Dashboard::label_nom_Click);
			// 
			// text_nom
			// 
			this->text_nom->Location = System::Drawing::Point(67, 310);
			this->text_nom->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->text_nom->Name = L"text_nom";
			this->text_nom->Size = System::Drawing::Size(264, 31);
			this->text_nom->TabIndex = 3;
			this->text_nom->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_nom_TextChanged);
			// 
			// Label_Id_perso
			// 
			this->Label_Id_perso->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Label_Id_perso->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Label_Id_perso->Location = System::Drawing::Point(59, 128);
			this->Label_Id_perso->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Label_Id_perso->Name = L"Label_Id_perso";
			this->Label_Id_perso->Size = System::Drawing::Size(200, 52);
			this->Label_Id_perso->TabIndex = 2;
			this->Label_Id_perso->Text = L"Id Personnel";
			this->Label_Id_perso->Click += gcnew System::EventHandler(this, &Dashboard::Label_Id_perso_Click);
			// 
			// text_personnel
			// 
			this->text_personnel->Location = System::Drawing::Point(67, 185);
			this->text_personnel->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->text_personnel->Name = L"text_personnel";
			this->text_personnel->Size = System::Drawing::Size(264, 31);
			this->text_personnel->TabIndex = 1;
			this->text_personnel->TextChanged += gcnew System::EventHandler(this, &Dashboard::text_personnel_TextChanged);
			// 
			// Title_Gestion_Personel
			// 
			this->Title_Gestion_Personel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Personel->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Personel->Location = System::Drawing::Point(175, 26);
			this->Title_Gestion_Personel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->Title_Gestion_Personel->Name = L"Title_Gestion_Personel";
			this->Title_Gestion_Personel->Size = System::Drawing::Size(1275, 162);
			this->Title_Gestion_Personel->TabIndex = 0;
			this->Title_Gestion_Personel->Text = L"Gestion Personnel";
			this->Title_Gestion_Personel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Btn_Gestion_Personnel
			// 
			this->Btn_Gestion_Personnel->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_Personnel->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_Personnel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_Personnel->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn_Gestion_Personnel->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_Personnel->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_Personnel->Location = System::Drawing::Point(0, 500);
			this->Btn_Gestion_Personnel->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Gestion_Personnel->Name = L"Btn_Gestion_Personnel";
			this->Btn_Gestion_Personnel->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_Personnel->TabIndex = 1;
			this->Btn_Gestion_Personnel->Text = L"Gestion personnel";
			this->Btn_Gestion_Personnel->UseVisualStyleBackColor = true;
			this->Btn_Gestion_Personnel->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Personnel);
			// 
			// Btn_Gestion_clients
			// 
			this->Btn_Gestion_clients->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_clients->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_clients->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_clients->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_clients->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_clients->Location = System::Drawing::Point(0, 631);
			this->Btn_Gestion_clients->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Gestion_clients->Name = L"Btn_Gestion_clients";
			this->Btn_Gestion_clients->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_clients->TabIndex = 2;
			this->Btn_Gestion_clients->Text = L"Gestion clients";
			this->Btn_Gestion_clients->UseVisualStyleBackColor = true;
			this->Btn_Gestion_clients->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Clients);
			// 
			// btn_Gestion_commandes
			// 
			this->btn_Gestion_commandes->Dock = System::Windows::Forms::DockStyle::Top;
			this->btn_Gestion_commandes->FlatAppearance->BorderSize = 0;
			this->btn_Gestion_commandes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btn_Gestion_commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->btn_Gestion_commandes->ForeColor = System::Drawing::Color::Gainsboro;
			this->btn_Gestion_commandes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btn_Gestion_commandes->Location = System::Drawing::Point(0, 762);
			this->btn_Gestion_commandes->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btn_Gestion_commandes->Name = L"btn_Gestion_commandes";
			this->btn_Gestion_commandes->Size = System::Drawing::Size(488, 131);
			this->btn_Gestion_commandes->TabIndex = 3;
			this->btn_Gestion_commandes->Text = L"Gestion commandes";
			this->btn_Gestion_commandes->UseVisualStyleBackColor = true;
			this->btn_Gestion_commandes->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Commandes);
			// 
			// Btn_Gestion_stock
			// 
			this->Btn_Gestion_stock->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stock->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stock->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stock->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stock->Location = System::Drawing::Point(0, 893);
			this->Btn_Gestion_stock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Gestion_stock->Name = L"Btn_Gestion_stock";
			this->Btn_Gestion_stock->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_stock->TabIndex = 4;
			this->Btn_Gestion_stock->Text = L"Gestion stock";
			this->Btn_Gestion_stock->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stock->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stock);
			// 
			// Btn_Gestion_stat
			// 
			this->Btn_Gestion_stat->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Gestion_stat->FlatAppearance->BorderSize = 0;
			this->Btn_Gestion_stat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Gestion_stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Gestion_stat->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Gestion_stat->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Gestion_stat->Location = System::Drawing::Point(0, 1024);
			this->Btn_Gestion_stat->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Gestion_stat->Name = L"Btn_Gestion_stat";
			this->Btn_Gestion_stat->Size = System::Drawing::Size(488, 131);
			this->Btn_Gestion_stat->TabIndex = 5;
			this->Btn_Gestion_stat->Text = L"Gestion statistiques";
			this->Btn_Gestion_stat->UseVisualStyleBackColor = true;
			this->Btn_Gestion_stat->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_gestion_Stat);
			// 
			// Btn_Exit_DB
			// 
			this->Btn_Exit_DB->Dock = System::Windows::Forms::DockStyle::Top;
			this->Btn_Exit_DB->FlatAppearance->BorderSize = 0;
			this->Btn_Exit_DB->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn_Exit_DB->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 13.875F, System::Drawing::FontStyle::Bold));
			this->Btn_Exit_DB->ForeColor = System::Drawing::Color::Gainsboro;
			this->Btn_Exit_DB->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Btn_Exit_DB->Location = System::Drawing::Point(0, 1155);
			this->Btn_Exit_DB->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Btn_Exit_DB->Name = L"Btn_Exit_DB";
			this->Btn_Exit_DB->Size = System::Drawing::Size(488, 131);
			this->Btn_Exit_DB->TabIndex = 6;
			this->Btn_Exit_DB->Text = L"Exit";
			this->Btn_Exit_DB->UseVisualStyleBackColor = true;
			this->Btn_Exit_DB->Click += gcnew System::EventHandler(this, &Dashboard::Click_Btn_Exit_DB);
			// 
			// panel_gestion
			// 
			this->panel_gestion->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(54)));
			this->panel_gestion->Controls->Add(this->Btn_Exit_DB);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_stat);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_stock);
			this->panel_gestion->Controls->Add(this->btn_Gestion_commandes);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_clients);
			this->panel_gestion->Controls->Add(this->Btn_Gestion_Personnel);
			this->panel_gestion->Controls->Add(this->Pannel_Titre);
			this->panel_gestion->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel_gestion->Location = System::Drawing::Point(0, 0);
			this->panel_gestion->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->panel_gestion->Name = L"panel_gestion";
			this->panel_gestion->Size = System::Drawing::Size(488, 1559);
			this->panel_gestion->TabIndex = 0;
			// 
			// Panel_Dashboard
			// 
			this->Panel_Dashboard->Controls->Add(this->Title_Dashboard);
			this->Panel_Dashboard->Enabled = false;
			this->Panel_Dashboard->Location = System::Drawing::Point(1367, 34);
			this->Panel_Dashboard->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Panel_Dashboard->Name = L"Panel_Dashboard";
			this->Panel_Dashboard->Size = System::Drawing::Size(709, 1485);
			this->Panel_Dashboard->TabIndex = 1;
			this->Panel_Dashboard->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Dashboard_Paint);
			// 
			// Title_Dashboard
			// 
			this->Title_Dashboard->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Dashboard->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Dashboard->Location = System::Drawing::Point(-17, 46);
			this->Title_Dashboard->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Title_Dashboard->Name = L"Title_Dashboard";
			this->Title_Dashboard->Size = System::Drawing::Size(756, 212);
			this->Title_Dashboard->TabIndex = 0;
			this->Title_Dashboard->Text = L"Dashboard";
			this->Title_Dashboard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Panel_Gestion_Client
			// 
			this->Panel_Gestion_Client->Controls->Add(this->button1_nouveau);
			this->Panel_Gestion_Client->Controls->Add(this->button1_supprimer);
			this->Panel_Gestion_Client->Controls->Add(this->button1_modiffier);
			this->Panel_Gestion_Client->Controls->Add(this->button1_ajouter);
			this->Panel_Gestion_Client->Controls->Add(this->button1_afficher);
			this->Panel_Gestion_Client->Controls->Add(this->labelpaysfacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelvillefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_paysfacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_villefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_codepostalefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->labelchampclient);
			this->Panel_Gestion_Client->Controls->Add(this->label_adressefacturation);
			this->Panel_Gestion_Client->Controls->Add(this->label_adresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text1_message);
			this->Panel_Gestion_Client->Controls->Add(this->labelpayslivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelvillelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelcodepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labeladressepostlivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labelidadresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_adressepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_payslivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_villelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_codepostalelivraison);
			this->Panel_Gestion_Client->Controls->Add(this->text_idadresselivraison);
			this->Panel_Gestion_Client->Controls->Add(this->labeldatenaissance);
			this->Panel_Gestion_Client->Controls->Add(this->labelprenomclient);
			this->Panel_Gestion_Client->Controls->Add(this->labelnomclient);
			this->Panel_Gestion_Client->Controls->Add(this->labelidclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_nomclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_datenaissance);
			this->Panel_Gestion_Client->Controls->Add(this->text_prenomclient);
			this->Panel_Gestion_Client->Controls->Add(this->text_idclient);
			this->Panel_Gestion_Client->Controls->Add(this->dataGridView_gestclient);
			this->Panel_Gestion_Client->Controls->Add(this->Title_gestion_clients);
			this->Panel_Gestion_Client->Location = System::Drawing::Point(564, 32);
			this->Panel_Gestion_Client->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Panel_Gestion_Client->Name = L"Panel_Gestion_Client";
			this->Panel_Gestion_Client->Size = System::Drawing::Size(2344, 1589);
			this->Panel_Gestion_Client->TabIndex = 3;
			this->Panel_Gestion_Client->Visible = false;
			// 
			// button1_nouveau
			// 
			this->button1_nouveau->ActiveBorderThickness = 1;
			this->button1_nouveau->ActiveCornerRadius = 20;
			this->button1_nouveau->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_nouveau->ActiveForecolor = System::Drawing::Color::White;
			this->button1_nouveau->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_nouveau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_nouveau.BackgroundImage")));
			this->button1_nouveau->ButtonText = L"NOUVEAU";
			this->button1_nouveau->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_nouveau->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_nouveau->ForeColor = System::Drawing::Color::White;
			this->button1_nouveau->IdleBorderThickness = 1;
			this->button1_nouveau->IdleCornerRadius = 20;
			this->button1_nouveau->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_nouveau->IdleForecolor = System::Drawing::Color::White;
			this->button1_nouveau->IdleLineColor = System::Drawing::Color::White;
			this->button1_nouveau->Location = System::Drawing::Point(1915, 978);
			this->button1_nouveau->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1_nouveau->Name = L"button1_nouveau";
			this->button1_nouveau->Size = System::Drawing::Size(364, 90);
			this->button1_nouveau->TabIndex = 122;
			this->button1_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_supprimer
			// 
			this->button1_supprimer->ActiveBorderThickness = 1;
			this->button1_supprimer->ActiveCornerRadius = 20;
			this->button1_supprimer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_supprimer->ActiveForecolor = System::Drawing::Color::White;
			this->button1_supprimer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_supprimer.BackgroundImage")));
			this->button1_supprimer->ButtonText = L"SUPPRIMER";
			this->button1_supprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_supprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_supprimer->ForeColor = System::Drawing::Color::White;
			this->button1_supprimer->IdleBorderThickness = 1;
			this->button1_supprimer->IdleCornerRadius = 20;
			this->button1_supprimer->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_supprimer->IdleForecolor = System::Drawing::Color::White;
			this->button1_supprimer->IdleLineColor = System::Drawing::Color::White;
			this->button1_supprimer->Location = System::Drawing::Point(1461, 978);
			this->button1_supprimer->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1_supprimer->Name = L"button1_supprimer";
			this->button1_supprimer->Size = System::Drawing::Size(364, 90);
			this->button1_supprimer->TabIndex = 53;
			this->button1_supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_modiffier
			// 
			this->button1_modiffier->ActiveBorderThickness = 1;
			this->button1_modiffier->ActiveCornerRadius = 20;
			this->button1_modiffier->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_modiffier->ActiveForecolor = System::Drawing::Color::White;
			this->button1_modiffier->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_modiffier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_modiffier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_modiffier.BackgroundImage")));
			this->button1_modiffier->ButtonText = L"MODIFIER";
			this->button1_modiffier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_modiffier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_modiffier->ForeColor = System::Drawing::Color::White;
			this->button1_modiffier->IdleBorderThickness = 1;
			this->button1_modiffier->IdleCornerRadius = 20;
			this->button1_modiffier->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_modiffier->IdleForecolor = System::Drawing::Color::White;
			this->button1_modiffier->IdleLineColor = System::Drawing::Color::White;
			this->button1_modiffier->Location = System::Drawing::Point(1005, 978);
			this->button1_modiffier->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1_modiffier->Name = L"button1_modiffier";
			this->button1_modiffier->Size = System::Drawing::Size(367, 90);
			this->button1_modiffier->TabIndex = 52;
			this->button1_modiffier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_ajouter
			// 
			this->button1_ajouter->ActiveBorderThickness = 1;
			this->button1_ajouter->ActiveCornerRadius = 20;
			this->button1_ajouter->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_ajouter->ActiveForecolor = System::Drawing::Color::White;
			this->button1_ajouter->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_ajouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_ajouter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_ajouter.BackgroundImage")));
			this->button1_ajouter->ButtonText = L"AJOUTER";
			this->button1_ajouter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_ajouter->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_ajouter->ForeColor = System::Drawing::Color::White;
			this->button1_ajouter->IdleBorderThickness = 1;
			this->button1_ajouter->IdleCornerRadius = 20;
			this->button1_ajouter->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_ajouter->IdleForecolor = System::Drawing::Color::White;
			this->button1_ajouter->IdleLineColor = System::Drawing::Color::White;
			this->button1_ajouter->Location = System::Drawing::Point(553, 978);
			this->button1_ajouter->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1_ajouter->Name = L"button1_ajouter";
			this->button1_ajouter->Size = System::Drawing::Size(365, 90);
			this->button1_ajouter->TabIndex = 51;
			this->button1_ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1_afficher
			// 
			this->button1_afficher->ActiveBorderThickness = 1;
			this->button1_afficher->ActiveCornerRadius = 20;
			this->button1_afficher->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button1_afficher->ActiveForecolor = System::Drawing::Color::White;
			this->button1_afficher->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button1_afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button1_afficher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1_afficher.BackgroundImage")));
			this->button1_afficher->ButtonText = L"AFFICHER";
			this->button1_afficher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1_afficher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1_afficher->ForeColor = System::Drawing::Color::White;
			this->button1_afficher->IdleBorderThickness = 1;
			this->button1_afficher->IdleCornerRadius = 20;
			this->button1_afficher->IdleFillColor = System::Drawing::Color::Transparent;
			this->button1_afficher->IdleForecolor = System::Drawing::Color::White;
			this->button1_afficher->IdleLineColor = System::Drawing::Color::White;
			this->button1_afficher->Location = System::Drawing::Point(99, 978);
			this->button1_afficher->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button1_afficher->Name = L"button1_afficher";
			this->button1_afficher->Size = System::Drawing::Size(361, 90);
			this->button1_afficher->TabIndex = 50;
			this->button1_afficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// labelpaysfacturation
			// 
			this->labelpaysfacturation->AutoSize = true;
			this->labelpaysfacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelpaysfacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpaysfacturation->ForeColor = System::Drawing::Color::White;
			this->labelpaysfacturation->Location = System::Drawing::Point(1796, 808);
			this->labelpaysfacturation->Name = L"labelpaysfacturation";
			this->labelpaysfacturation->Size = System::Drawing::Size(69, 37);
			this->labelpaysfacturation->TabIndex = 49;
			this->labelpaysfacturation->Text = L"Pays";
			// 
			// labelvillefacturation
			// 
			this->labelvillefacturation->AutoSize = true;
			this->labelvillefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelvillefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvillefacturation->ForeColor = System::Drawing::Color::White;
			this->labelvillefacturation->Location = System::Drawing::Point(1797, 715);
			this->labelvillefacturation->Name = L"labelvillefacturation";
			this->labelvillefacturation->Size = System::Drawing::Size(69, 37);
			this->labelvillefacturation->TabIndex = 48;
			this->labelvillefacturation->Text = L"Ville";
			// 
			// labelcodepostalefacturation
			// 
			this->labelcodepostalefacturation->AutoSize = true;
			this->labelcodepostalefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostalefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostalefacturation->ForeColor = System::Drawing::Color::White;
			this->labelcodepostalefacturation->Location = System::Drawing::Point(1796, 608);
			this->labelcodepostalefacturation->Name = L"labelcodepostalefacturation";
			this->labelcodepostalefacturation->Size = System::Drawing::Size(172, 37);
			this->labelcodepostalefacturation->TabIndex = 47;
			this->labelcodepostalefacturation->Text = L"Code Postale";
			// 
			// labeladressepostalefacturation
			// 
			this->labeladressepostalefacturation->AutoSize = true;
			this->labeladressepostalefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepostalefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepostalefacturation->ForeColor = System::Drawing::Color::White;
			this->labeladressepostalefacturation->Location = System::Drawing::Point(1797, 505);
			this->labeladressepostalefacturation->Name = L"labeladressepostalefacturation";
			this->labeladressepostalefacturation->Size = System::Drawing::Size(201, 37);
			this->labeladressepostalefacturation->TabIndex = 46;
			this->labeladressepostalefacturation->Text = L"Adresse Postale";
			// 
			// labelidadressefacturation
			// 
			this->labelidadressefacturation->AutoSize = true;
			this->labelidadressefacturation->BackColor = System::Drawing::Color::Transparent;
			this->labelidadressefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadressefacturation->ForeColor = System::Drawing::Color::White;
			this->labelidadressefacturation->Location = System::Drawing::Point(1797, 398);
			this->labelidadressefacturation->Name = L"labelidadressefacturation";
			this->labelidadressefacturation->Size = System::Drawing::Size(142, 37);
			this->labelidadressefacturation->TabIndex = 45;
			this->labelidadressefacturation->Text = L"ID Adresse";
			// 
			// text_adressepostalefacturation
			// 
			this->text_adressepostalefacturation->Location = System::Drawing::Point(1793, 542);
			this->text_adressepostalefacturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_adressepostalefacturation->Name = L"text_adressepostalefacturation";
			this->text_adressepostalefacturation->Size = System::Drawing::Size(297, 31);
			this->text_adressepostalefacturation->TabIndex = 44;
			// 
			// text_paysfacturation
			// 
			this->text_paysfacturation->Location = System::Drawing::Point(1793, 845);
			this->text_paysfacturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_paysfacturation->Name = L"text_paysfacturation";
			this->text_paysfacturation->Size = System::Drawing::Size(297, 31);
			this->text_paysfacturation->TabIndex = 43;
			// 
			// text_villefacturation
			// 
			this->text_villefacturation->Location = System::Drawing::Point(1793, 752);
			this->text_villefacturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_villefacturation->Name = L"text_villefacturation";
			this->text_villefacturation->Size = System::Drawing::Size(297, 31);
			this->text_villefacturation->TabIndex = 42;
			// 
			// text_codepostalefacturation
			// 
			this->text_codepostalefacturation->Location = System::Drawing::Point(1793, 645);
			this->text_codepostalefacturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_codepostalefacturation->Name = L"text_codepostalefacturation";
			this->text_codepostalefacturation->Size = System::Drawing::Size(297, 31);
			this->text_codepostalefacturation->TabIndex = 41;
			// 
			// text_idadressefacturation
			// 
			this->text_idadressefacturation->Location = System::Drawing::Point(1793, 435);
			this->text_idadressefacturation->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idadressefacturation->Name = L"text_idadressefacturation";
			this->text_idadressefacturation->Size = System::Drawing::Size(297, 31);
			this->text_idadressefacturation->TabIndex = 40;
			// 
			// labelchampclient
			// 
			this->labelchampclient->AutoSize = true;
			this->labelchampclient->BackColor = System::Drawing::Color::Transparent;
			this->labelchampclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->labelchampclient->ForeColor = System::Drawing::Color::White;
			this->labelchampclient->Location = System::Drawing::Point(213, 295);
			this->labelchampclient->Name = L"labelchampclient";
			this->labelchampclient->Size = System::Drawing::Size(366, 45);
			this->labelchampclient->TabIndex = 39;
			this->labelchampclient->Text = L"Informations g�n�rales";
			// 
			// label_adressefacturation
			// 
			this->label_adressefacturation->AutoSize = true;
			this->label_adressefacturation->BackColor = System::Drawing::Color::Transparent;
			this->label_adressefacturation->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_adressefacturation->ForeColor = System::Drawing::Color::White;
			this->label_adressefacturation->Location = System::Drawing::Point(1785, 295);
			this->label_adressefacturation->Name = L"label_adressefacturation";
			this->label_adressefacturation->Size = System::Drawing::Size(358, 45);
			this->label_adressefacturation->TabIndex = 38;
			this->label_adressefacturation->Text = L"Adresse de facturation";
			// 
			// label_adresselivraison
			// 
			this->label_adresselivraison->AutoSize = true;
			this->label_adresselivraison->BackColor = System::Drawing::Color::Transparent;
			this->label_adresselivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_adresselivraison->ForeColor = System::Drawing::Color::White;
			this->label_adresselivraison->Location = System::Drawing::Point(1052, 295);
			this->label_adresselivraison->Name = L"label_adresselivraison";
			this->label_adresselivraison->Size = System::Drawing::Size(320, 45);
			this->label_adresselivraison->TabIndex = 37;
			this->label_adresselivraison->Text = L"Adresse de livraison";
			// 
			// text1_message
			// 
			this->text1_message->Location = System::Drawing::Point(17, 1088);
			this->text1_message->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text1_message->Multiline = true;
			this->text1_message->Name = L"text1_message";
			this->text1_message->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text1_message->Size = System::Drawing::Size(2313, 72);
			this->text1_message->TabIndex = 36;
			// 
			// labelpayslivraison
			// 
			this->labelpayslivraison->AutoSize = true;
			this->labelpayslivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelpayslivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelpayslivraison->ForeColor = System::Drawing::Color::White;
			this->labelpayslivraison->Location = System::Drawing::Point(1064, 808);
			this->labelpayslivraison->Name = L"labelpayslivraison";
			this->labelpayslivraison->Size = System::Drawing::Size(69, 37);
			this->labelpayslivraison->TabIndex = 24;
			this->labelpayslivraison->Text = L"Pays";
			// 
			// labelvillelivraison
			// 
			this->labelvillelivraison->AutoSize = true;
			this->labelvillelivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelvillelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelvillelivraison->ForeColor = System::Drawing::Color::White;
			this->labelvillelivraison->Location = System::Drawing::Point(1064, 715);
			this->labelvillelivraison->Name = L"labelvillelivraison";
			this->labelvillelivraison->Size = System::Drawing::Size(69, 37);
			this->labelvillelivraison->TabIndex = 23;
			this->labelvillelivraison->Text = L"Ville";
			// 
			// labelcodepostalelivraison
			// 
			this->labelcodepostalelivraison->AutoSize = true;
			this->labelcodepostalelivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelcodepostalelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelcodepostalelivraison->ForeColor = System::Drawing::Color::White;
			this->labelcodepostalelivraison->Location = System::Drawing::Point(1064, 608);
			this->labelcodepostalelivraison->Name = L"labelcodepostalelivraison";
			this->labelcodepostalelivraison->Size = System::Drawing::Size(172, 37);
			this->labelcodepostalelivraison->TabIndex = 22;
			this->labelcodepostalelivraison->Text = L"Code Postale";
			// 
			// labeladressepostlivraison
			// 
			this->labeladressepostlivraison->AutoSize = true;
			this->labeladressepostlivraison->BackColor = System::Drawing::Color::Transparent;
			this->labeladressepostlivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeladressepostlivraison->ForeColor = System::Drawing::Color::White;
			this->labeladressepostlivraison->Location = System::Drawing::Point(1064, 505);
			this->labeladressepostlivraison->Name = L"labeladressepostlivraison";
			this->labeladressepostlivraison->Size = System::Drawing::Size(201, 37);
			this->labeladressepostlivraison->TabIndex = 21;
			this->labeladressepostlivraison->Text = L"Adresse Postale";
			// 
			// labelidadresselivraison
			// 
			this->labelidadresselivraison->AutoSize = true;
			this->labelidadresselivraison->BackColor = System::Drawing::Color::Transparent;
			this->labelidadresselivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidadresselivraison->ForeColor = System::Drawing::Color::White;
			this->labelidadresselivraison->Location = System::Drawing::Point(1064, 396);
			this->labelidadresselivraison->Name = L"labelidadresselivraison";
			this->labelidadresselivraison->Size = System::Drawing::Size(142, 37);
			this->labelidadresselivraison->TabIndex = 20;
			this->labelidadresselivraison->Text = L"ID Adresse";
			this->labelidadresselivraison->Click += gcnew System::EventHandler(this, &Dashboard::label11_Click);
			// 
			// text_adressepostalelivraison
			// 
			this->text_adressepostalelivraison->Location = System::Drawing::Point(1060, 542);
			this->text_adressepostalelivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_adressepostalelivraison->Name = L"text_adressepostalelivraison";
			this->text_adressepostalelivraison->Size = System::Drawing::Size(297, 31);
			this->text_adressepostalelivraison->TabIndex = 19;
			// 
			// text_payslivraison
			// 
			this->text_payslivraison->Location = System::Drawing::Point(1060, 845);
			this->text_payslivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_payslivraison->Name = L"text_payslivraison";
			this->text_payslivraison->Size = System::Drawing::Size(297, 31);
			this->text_payslivraison->TabIndex = 18;
			// 
			// text_villelivraison
			// 
			this->text_villelivraison->Location = System::Drawing::Point(1060, 752);
			this->text_villelivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_villelivraison->Name = L"text_villelivraison";
			this->text_villelivraison->Size = System::Drawing::Size(297, 31);
			this->text_villelivraison->TabIndex = 17;
			// 
			// text_codepostalelivraison
			// 
			this->text_codepostalelivraison->Location = System::Drawing::Point(1060, 645);
			this->text_codepostalelivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_codepostalelivraison->Name = L"text_codepostalelivraison";
			this->text_codepostalelivraison->Size = System::Drawing::Size(297, 31);
			this->text_codepostalelivraison->TabIndex = 16;
			// 
			// text_idadresselivraison
			// 
			this->text_idadresselivraison->Location = System::Drawing::Point(1060, 435);
			this->text_idadresselivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idadresselivraison->Name = L"text_idadresselivraison";
			this->text_idadresselivraison->Size = System::Drawing::Size(297, 31);
			this->text_idadresselivraison->TabIndex = 15;
			// 
			// labeldatenaissance
			// 
			this->labeldatenaissance->AutoSize = true;
			this->labeldatenaissance->BackColor = System::Drawing::Color::Transparent;
			this->labeldatenaissance->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labeldatenaissance->ForeColor = System::Drawing::Color::White;
			this->labeldatenaissance->Location = System::Drawing::Point(224, 710);
			this->labeldatenaissance->Name = L"labeldatenaissance";
			this->labeldatenaissance->Size = System::Drawing::Size(410, 37);
			this->labeldatenaissance->TabIndex = 13;
			this->labeldatenaissance->Text = L"Date de naissance (JJ/MM/AAAA)\r\n";
			// 
			// labelprenomclient
			// 
			this->labelprenomclient->AutoSize = true;
			this->labelprenomclient->BackColor = System::Drawing::Color::Transparent;
			this->labelprenomclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelprenomclient->ForeColor = System::Drawing::Color::White;
			this->labelprenomclient->Location = System::Drawing::Point(224, 608);
			this->labelprenomclient->Name = L"labelprenomclient";
			this->labelprenomclient->Size = System::Drawing::Size(109, 37);
			this->labelprenomclient->TabIndex = 12;
			this->labelprenomclient->Text = L"Pr�nom";
			// 
			// labelnomclient
			// 
			this->labelnomclient->AutoSize = true;
			this->labelnomclient->BackColor = System::Drawing::Color::Transparent;
			this->labelnomclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelnomclient->ForeColor = System::Drawing::Color::White;
			this->labelnomclient->Location = System::Drawing::Point(224, 505);
			this->labelnomclient->Name = L"labelnomclient";
			this->labelnomclient->Size = System::Drawing::Size(76, 37);
			this->labelnomclient->TabIndex = 11;
			this->labelnomclient->Text = L"Nom";
			// 
			// labelidclient
			// 
			this->labelidclient->AutoSize = true;
			this->labelidclient->BackColor = System::Drawing::Color::Transparent;
			this->labelidclient->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelidclient->ForeColor = System::Drawing::Color::White;
			this->labelidclient->Location = System::Drawing::Point(224, 396);
			this->labelidclient->Name = L"labelidclient";
			this->labelidclient->Size = System::Drawing::Size(119, 37);
			this->labelidclient->TabIndex = 10;
			this->labelidclient->Text = L"ID Client";
			// 
			// text_nomclient
			// 
			this->text_nomclient->Location = System::Drawing::Point(221, 542);
			this->text_nomclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_nomclient->Name = L"text_nomclient";
			this->text_nomclient->Size = System::Drawing::Size(297, 31);
			this->text_nomclient->TabIndex = 9;
			// 
			// text_datenaissance
			// 
			this->text_datenaissance->Location = System::Drawing::Point(221, 752);
			this->text_datenaissance->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_datenaissance->Name = L"text_datenaissance";
			this->text_datenaissance->Size = System::Drawing::Size(297, 31);
			this->text_datenaissance->TabIndex = 7;
			// 
			// text_prenomclient
			// 
			this->text_prenomclient->Location = System::Drawing::Point(221, 645);
			this->text_prenomclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_prenomclient->Name = L"text_prenomclient";
			this->text_prenomclient->Size = System::Drawing::Size(297, 31);
			this->text_prenomclient->TabIndex = 6;
			// 
			// text_idclient
			// 
			this->text_idclient->Location = System::Drawing::Point(221, 435);
			this->text_idclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idclient->Name = L"text_idclient";
			this->text_idclient->Size = System::Drawing::Size(297, 31);
			this->text_idclient->TabIndex = 5;
			// 
			// dataGridView_gestclient
			// 
			this->dataGridView_gestclient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestclient->Location = System::Drawing::Point(17, 1200);
			this->dataGridView_gestclient->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView_gestclient->Name = L"dataGridView_gestclient";
			this->dataGridView_gestclient->ReadOnly = true;
			this->dataGridView_gestclient->RowHeadersWidth = 62;
			this->dataGridView_gestclient->RowTemplate->Height = 28;
			this->dataGridView_gestclient->Size = System::Drawing::Size(2307, 375);
			this->dataGridView_gestclient->TabIndex = 1;
			// 
			// Title_gestion_clients
			// 
			this->Title_gestion_clients->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_gestion_clients->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_gestion_clients->Location = System::Drawing::Point(884, 62);
			this->Title_gestion_clients->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Title_gestion_clients->Name = L"Title_gestion_clients";
			this->Title_gestion_clients->Size = System::Drawing::Size(652, 165);
			this->Title_gestion_clients->TabIndex = 0;
			this->Title_gestion_clients->Text = L"Gestion Clients";
			// 
			// Panel_Gestion_Commandes
			// 
			this->Panel_Gestion_Commandes->Controls->Add(this->panel_Gestion_Stock);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idadfactcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idadfactcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idadlivcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idadlivcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_nouveau);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_payssociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_codepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_payssociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_codepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_villesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_adressepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_villesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_adressepostsociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_datepaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_datepaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label2_paiementcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_mypaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_nbpaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_mypaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_nbpaiement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_dateemission);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_dateemission);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_montanttotTTC);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_montanttotTTC);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_montanttotTVA);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_montanttotTVA);
			this->Panel_Gestion_Commandes->Controls->Add(this->label2_informationsgen);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_supprimer);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_modifier);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_ajouter);
			this->Panel_Gestion_Commandes->Controls->Add(this->button2_afficher);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_infofact);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_messagecommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_soldereglement);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idadressesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_societe);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_nmservice);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_idfacture);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_nmservice);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_soldereglement);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idadressesociete);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_societe);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idfacture);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_datelivraison);
			this->Panel_Gestion_Commandes->Controls->Add(this->label_monanttotHT);
			this->Panel_Gestion_Commandes->Controls->Add(this->label2_idclientcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->labelref_commande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_idclientcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_datelivraison);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_montanttotHT);
			this->Panel_Gestion_Commandes->Controls->Add(this->text_refcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->dataGridView_gestcommande);
			this->Panel_Gestion_Commandes->Controls->Add(this->Title_Gestion_Commandes);
			this->Panel_Gestion_Commandes->Location = System::Drawing::Point(537, 18);
			this->Panel_Gestion_Commandes->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Panel_Gestion_Commandes->Name = L"Panel_Gestion_Commandes";
			this->Panel_Gestion_Commandes->Size = System::Drawing::Size(2379, 1595);
			this->Panel_Gestion_Commandes->TabIndex = 4;
			this->Panel_Gestion_Commandes->Visible = false;
			// 
			// label_idadfactcommande
			// 
			this->label_idadfactcommande->AutoSize = true;
			this->label_idadfactcommande->BackColor = System::Drawing::Color::Transparent;
			this->label_idadfactcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadfactcommande->ForeColor = System::Drawing::Color::White;
			this->label_idadfactcommande->Location = System::Drawing::Point(665, 519);
			this->label_idadfactcommande->Name = L"label_idadfactcommande";
			this->label_idadfactcommande->Size = System::Drawing::Size(277, 37);
			this->label_idadfactcommande->TabIndex = 125;
			this->label_idadfactcommande->Text = L"ID Adresse facturation";
			// 
			// text_idadfactcommande
			// 
			this->text_idadfactcommande->Location = System::Drawing::Point(672, 556);
			this->text_idadfactcommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idadfactcommande->Name = L"text_idadfactcommande";
			this->text_idadfactcommande->Size = System::Drawing::Size(260, 31);
			this->text_idadfactcommande->TabIndex = 124;
			// 
			// label_idadlivcommande
			// 
			this->label_idadlivcommande->AutoSize = true;
			this->label_idadlivcommande->BackColor = System::Drawing::Color::Transparent;
			this->label_idadlivcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadlivcommande->ForeColor = System::Drawing::Color::White;
			this->label_idadlivcommande->Location = System::Drawing::Point(384, 519);
			this->label_idadlivcommande->Name = L"label_idadlivcommande";
			this->label_idadlivcommande->Size = System::Drawing::Size(248, 37);
			this->label_idadlivcommande->TabIndex = 123;
			this->label_idadlivcommande->Text = L"ID Adresse livraison";
			// 
			// text_idadlivcommande
			// 
			this->text_idadlivcommande->Location = System::Drawing::Point(391, 556);
			this->text_idadlivcommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idadlivcommande->Name = L"text_idadlivcommande";
			this->text_idadlivcommande->Size = System::Drawing::Size(235, 31);
			this->text_idadlivcommande->TabIndex = 122;
			// 
			// button2_nouveau
			// 
			this->button2_nouveau->ActiveBorderThickness = 1;
			this->button2_nouveau->ActiveCornerRadius = 20;
			this->button2_nouveau->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_nouveau->ActiveForecolor = System::Drawing::Color::White;
			this->button2_nouveau->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_nouveau->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_nouveau->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_nouveau.BackgroundImage")));
			this->button2_nouveau->ButtonText = L"NOUVEAU";
			this->button2_nouveau->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_nouveau->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_nouveau->ForeColor = System::Drawing::Color::White;
			this->button2_nouveau->IdleBorderThickness = 1;
			this->button2_nouveau->IdleCornerRadius = 20;
			this->button2_nouveau->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_nouveau->IdleForecolor = System::Drawing::Color::White;
			this->button2_nouveau->IdleLineColor = System::Drawing::Color::White;
			this->button2_nouveau->Location = System::Drawing::Point(1929, 955);
			this->button2_nouveau->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2_nouveau->Name = L"button2_nouveau";
			this->button2_nouveau->Size = System::Drawing::Size(364, 90);
			this->button2_nouveau->TabIndex = 121;
			this->button2_nouveau->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_payssociete
			// 
			this->label_payssociete->AutoSize = true;
			this->label_payssociete->BackColor = System::Drawing::Color::Transparent;
			this->label_payssociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_payssociete->ForeColor = System::Drawing::Color::White;
			this->label_payssociete->Location = System::Drawing::Point(2020, 800);
			this->label_payssociete->Name = L"label_payssociete";
			this->label_payssociete->Size = System::Drawing::Size(69, 37);
			this->label_payssociete->TabIndex = 120;
			this->label_payssociete->Text = L"Pays";
			// 
			// label_codepostsociete
			// 
			this->label_codepostsociete->AutoSize = true;
			this->label_codepostsociete->BackColor = System::Drawing::Color::Transparent;
			this->label_codepostsociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_codepostsociete->ForeColor = System::Drawing::Color::White;
			this->label_codepostsociete->Location = System::Drawing::Point(1757, 802);
			this->label_codepostsociete->Name = L"label_codepostsociete";
			this->label_codepostsociete->Size = System::Drawing::Size(172, 37);
			this->label_codepostsociete->TabIndex = 119;
			this->label_codepostsociete->Text = L"Code Postale";
			// 
			// text_payssociete
			// 
			this->text_payssociete->Location = System::Drawing::Point(2027, 838);
			this->text_payssociete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_payssociete->Name = L"text_payssociete";
			this->text_payssociete->Size = System::Drawing::Size(145, 31);
			this->text_payssociete->TabIndex = 118;
			// 
			// text_codepostsociete
			// 
			this->text_codepostsociete->Location = System::Drawing::Point(1764, 840);
			this->text_codepostsociete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_codepostsociete->Name = L"text_codepostsociete";
			this->text_codepostsociete->Size = System::Drawing::Size(227, 31);
			this->text_codepostsociete->TabIndex = 117;
			// 
			// label_villesociete
			// 
			this->label_villesociete->AutoSize = true;
			this->label_villesociete->BackColor = System::Drawing::Color::Transparent;
			this->label_villesociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_villesociete->ForeColor = System::Drawing::Color::White;
			this->label_villesociete->Location = System::Drawing::Point(2020, 692);
			this->label_villesociete->Name = L"label_villesociete";
			this->label_villesociete->Size = System::Drawing::Size(69, 37);
			this->label_villesociete->TabIndex = 116;
			this->label_villesociete->Text = L"Ville";
			// 
			// label_adressepostsociete
			// 
			this->label_adressepostsociete->AutoSize = true;
			this->label_adressepostsociete->BackColor = System::Drawing::Color::Transparent;
			this->label_adressepostsociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_adressepostsociete->ForeColor = System::Drawing::Color::White;
			this->label_adressepostsociete->Location = System::Drawing::Point(1757, 695);
			this->label_adressepostsociete->Name = L"label_adressepostsociete";
			this->label_adressepostsociete->Size = System::Drawing::Size(201, 37);
			this->label_adressepostsociete->TabIndex = 115;
			this->label_adressepostsociete->Text = L"Adresse Postale";
			// 
			// text_villesociete
			// 
			this->text_villesociete->Location = System::Drawing::Point(2027, 730);
			this->text_villesociete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_villesociete->Name = L"text_villesociete";
			this->text_villesociete->Size = System::Drawing::Size(145, 31);
			this->text_villesociete->TabIndex = 114;
			// 
			// text_adressepostsociete
			// 
			this->text_adressepostsociete->Location = System::Drawing::Point(1764, 732);
			this->text_adressepostsociete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_adressepostsociete->Name = L"text_adressepostsociete";
			this->text_adressepostsociete->Size = System::Drawing::Size(227, 31);
			this->text_adressepostsociete->TabIndex = 113;
			// 
			// label_datepaiement
			// 
			this->label_datepaiement->AutoSize = true;
			this->label_datepaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_datepaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_datepaiement->ForeColor = System::Drawing::Color::White;
			this->label_datepaiement->Location = System::Drawing::Point(1128, 664);
			this->label_datepaiement->Name = L"label_datepaiement";
			this->label_datepaiement->Size = System::Drawing::Size(409, 37);
			this->label_datepaiement->TabIndex = 112;
			this->label_datepaiement->Text = L"Date de paiement (JJ/MM/AAAA)\r\n";
			// 
			// text_datepaiement
			// 
			this->text_datepaiement->Location = System::Drawing::Point(1135, 702);
			this->text_datepaiement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_datepaiement->Name = L"text_datepaiement";
			this->text_datepaiement->Size = System::Drawing::Size(381, 31);
			this->text_datepaiement->TabIndex = 111;
			// 
			// label2_paiementcommande
			// 
			this->label2_paiementcommande->AutoSize = true;
			this->label2_paiementcommande->BackColor = System::Drawing::Color::Transparent;
			this->label2_paiementcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2_paiementcommande->ForeColor = System::Drawing::Color::White;
			this->label2_paiementcommande->Location = System::Drawing::Point(1127, 279);
			this->label2_paiementcommande->Name = L"label2_paiementcommande";
			this->label2_paiementcommande->Size = System::Drawing::Size(362, 45);
			this->label2_paiementcommande->TabIndex = 110;
			this->label2_paiementcommande->Text = L"Informations Paiement";
			// 
			// label_mypaiement
			// 
			this->label_mypaiement->AutoSize = true;
			this->label_mypaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_mypaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_mypaiement->ForeColor = System::Drawing::Color::White;
			this->label_mypaiement->Location = System::Drawing::Point(1128, 521);
			this->label_mypaiement->Name = L"label_mypaiement";
			this->label_mypaiement->Size = System::Drawing::Size(255, 37);
			this->label_mypaiement->TabIndex = 106;
			this->label_mypaiement->Text = L"Moyen de paiement";
			// 
			// label_nbpaiement
			// 
			this->label_nbpaiement->AutoSize = true;
			this->label_nbpaiement->BackColor = System::Drawing::Color::Transparent;
			this->label_nbpaiement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nbpaiement->ForeColor = System::Drawing::Color::White;
			this->label_nbpaiement->Location = System::Drawing::Point(1128, 384);
			this->label_nbpaiement->Name = L"label_nbpaiement";
			this->label_nbpaiement->Size = System::Drawing::Size(282, 37);
			this->label_nbpaiement->TabIndex = 105;
			this->label_nbpaiement->Text = L"Nombre de paiements";
			// 
			// text_mypaiement
			// 
			this->text_mypaiement->Location = System::Drawing::Point(1135, 559);
			this->text_mypaiement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_mypaiement->Name = L"text_mypaiement";
			this->text_mypaiement->Size = System::Drawing::Size(381, 31);
			this->text_mypaiement->TabIndex = 104;
			// 
			// text_nbpaiement
			// 
			this->text_nbpaiement->Location = System::Drawing::Point(1135, 421);
			this->text_nbpaiement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_nbpaiement->Name = L"text_nbpaiement";
			this->text_nbpaiement->Size = System::Drawing::Size(381, 31);
			this->text_nbpaiement->TabIndex = 100;
			// 
			// label_dateemission
			// 
			this->label_dateemission->AutoSize = true;
			this->label_dateemission->BackColor = System::Drawing::Color::Transparent;
			this->label_dateemission->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_dateemission->ForeColor = System::Drawing::Color::White;
			this->label_dateemission->Location = System::Drawing::Point(545, 802);
			this->label_dateemission->Name = L"label_dateemission";
			this->label_dateemission->Size = System::Drawing::Size(386, 37);
			this->label_dateemission->TabIndex = 99;
			this->label_dateemission->Text = L"Date d\'�mission (JJ/MM/AAAA)\r\n";
			// 
			// text_dateemission
			// 
			this->text_dateemission->Location = System::Drawing::Point(552, 841);
			this->text_dateemission->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_dateemission->Name = L"text_dateemission";
			this->text_dateemission->Size = System::Drawing::Size(381, 31);
			this->text_dateemission->TabIndex = 98;
			// 
			// label_montanttotTTC
			// 
			this->label_montanttotTTC->AutoSize = true;
			this->label_montanttotTTC->BackColor = System::Drawing::Color::Transparent;
			this->label_montanttotTTC->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_montanttotTTC->ForeColor = System::Drawing::Color::White;
			this->label_montanttotTTC->Location = System::Drawing::Point(707, 660);
			this->label_montanttotTTC->Name = L"label_montanttotTTC";
			this->label_montanttotTTC->Size = System::Drawing::Size(233, 37);
			this->label_montanttotTTC->TabIndex = 97;
			this->label_montanttotTTC->Text = L"Montant total TTC";
			// 
			// text_montanttotTTC
			// 
			this->text_montanttotTTC->Location = System::Drawing::Point(713, 698);
			this->text_montanttotTTC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_montanttotTTC->Name = L"text_montanttotTTC";
			this->text_montanttotTTC->Size = System::Drawing::Size(219, 31);
			this->text_montanttotTTC->TabIndex = 96;
			// 
			// label_montanttotTVA
			// 
			this->label_montanttotTVA->AutoSize = true;
			this->label_montanttotTVA->BackColor = System::Drawing::Color::Transparent;
			this->label_montanttotTVA->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_montanttotTVA->ForeColor = System::Drawing::Color::White;
			this->label_montanttotTVA->Location = System::Drawing::Point(425, 660);
			this->label_montanttotTVA->Name = L"label_montanttotTVA";
			this->label_montanttotTVA->Size = System::Drawing::Size(235, 37);
			this->label_montanttotTVA->TabIndex = 95;
			this->label_montanttotTVA->Text = L"Montant total TVA";
			// 
			// text_montanttotTVA
			// 
			this->text_montanttotTVA->Location = System::Drawing::Point(432, 698);
			this->text_montanttotTVA->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_montanttotTVA->Name = L"text_montanttotTVA";
			this->text_montanttotTVA->Size = System::Drawing::Size(219, 31);
			this->text_montanttotTVA->TabIndex = 94;
			// 
			// label2_informationsgen
			// 
			this->label2_informationsgen->AutoSize = true;
			this->label2_informationsgen->BackColor = System::Drawing::Color::Transparent;
			this->label2_informationsgen->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label2_informationsgen->ForeColor = System::Drawing::Color::White;
			this->label2_informationsgen->Location = System::Drawing::Point(96, 279);
			this->label2_informationsgen->Name = L"label2_informationsgen";
			this->label2_informationsgen->Size = System::Drawing::Size(366, 45);
			this->label2_informationsgen->TabIndex = 93;
			this->label2_informationsgen->Text = L"Informations g�n�rales";
			// 
			// button2_supprimer
			// 
			this->button2_supprimer->ActiveBorderThickness = 1;
			this->button2_supprimer->ActiveCornerRadius = 20;
			this->button2_supprimer->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_supprimer->ActiveForecolor = System::Drawing::Color::White;
			this->button2_supprimer->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_supprimer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_supprimer->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_supprimer.BackgroundImage")));
			this->button2_supprimer->ButtonText = L"SUPPRIMER";
			this->button2_supprimer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_supprimer->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_supprimer->ForeColor = System::Drawing::Color::White;
			this->button2_supprimer->IdleBorderThickness = 1;
			this->button2_supprimer->IdleCornerRadius = 20;
			this->button2_supprimer->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_supprimer->IdleForecolor = System::Drawing::Color::White;
			this->button2_supprimer->IdleLineColor = System::Drawing::Color::White;
			this->button2_supprimer->Location = System::Drawing::Point(1460, 955);
			this->button2_supprimer->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2_supprimer->Name = L"button2_supprimer";
			this->button2_supprimer->Size = System::Drawing::Size(364, 90);
			this->button2_supprimer->TabIndex = 92;
			this->button2_supprimer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2_modifier
			// 
			this->button2_modifier->ActiveBorderThickness = 1;
			this->button2_modifier->ActiveCornerRadius = 20;
			this->button2_modifier->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_modifier->ActiveForecolor = System::Drawing::Color::White;
			this->button2_modifier->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_modifier->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_modifier->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_modifier.BackgroundImage")));
			this->button2_modifier->ButtonText = L"MODIFIER";
			this->button2_modifier->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_modifier->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_modifier->ForeColor = System::Drawing::Color::White;
			this->button2_modifier->IdleBorderThickness = 1;
			this->button2_modifier->IdleCornerRadius = 20;
			this->button2_modifier->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_modifier->IdleForecolor = System::Drawing::Color::White;
			this->button2_modifier->IdleLineColor = System::Drawing::Color::White;
			this->button2_modifier->Location = System::Drawing::Point(1004, 955);
			this->button2_modifier->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2_modifier->Name = L"button2_modifier";
			this->button2_modifier->Size = System::Drawing::Size(367, 90);
			this->button2_modifier->TabIndex = 91;
			this->button2_modifier->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2_ajouter
			// 
			this->button2_ajouter->ActiveBorderThickness = 1;
			this->button2_ajouter->ActiveCornerRadius = 20;
			this->button2_ajouter->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_ajouter->ActiveForecolor = System::Drawing::Color::White;
			this->button2_ajouter->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_ajouter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_ajouter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_ajouter.BackgroundImage")));
			this->button2_ajouter->ButtonText = L"AJOUTER";
			this->button2_ajouter->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_ajouter->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_ajouter->ForeColor = System::Drawing::Color::White;
			this->button2_ajouter->IdleBorderThickness = 1;
			this->button2_ajouter->IdleCornerRadius = 20;
			this->button2_ajouter->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_ajouter->IdleForecolor = System::Drawing::Color::White;
			this->button2_ajouter->IdleLineColor = System::Drawing::Color::White;
			this->button2_ajouter->Location = System::Drawing::Point(552, 955);
			this->button2_ajouter->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2_ajouter->Name = L"button2_ajouter";
			this->button2_ajouter->Size = System::Drawing::Size(365, 90);
			this->button2_ajouter->TabIndex = 90;
			this->button2_ajouter->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2_afficher
			// 
			this->button2_afficher->ActiveBorderThickness = 1;
			this->button2_afficher->ActiveCornerRadius = 20;
			this->button2_afficher->ActiveFillColor = System::Drawing::Color::Transparent;
			this->button2_afficher->ActiveForecolor = System::Drawing::Color::White;
			this->button2_afficher->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->button2_afficher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->button2_afficher->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2_afficher.BackgroundImage")));
			this->button2_afficher->ButtonText = L"AFFICHER";
			this->button2_afficher->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2_afficher->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2_afficher->ForeColor = System::Drawing::Color::White;
			this->button2_afficher->IdleBorderThickness = 1;
			this->button2_afficher->IdleCornerRadius = 20;
			this->button2_afficher->IdleFillColor = System::Drawing::Color::Transparent;
			this->button2_afficher->IdleForecolor = System::Drawing::Color::White;
			this->button2_afficher->IdleLineColor = System::Drawing::Color::White;
			this->button2_afficher->Location = System::Drawing::Point(97, 955);
			this->button2_afficher->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->button2_afficher->Name = L"button2_afficher";
			this->button2_afficher->Size = System::Drawing::Size(361, 90);
			this->button2_afficher->TabIndex = 89;
			this->button2_afficher->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_infofact
			// 
			this->label_infofact->AutoSize = true;
			this->label_infofact->BackColor = System::Drawing::Color::Transparent;
			this->label_infofact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label_infofact->ForeColor = System::Drawing::Color::White;
			this->label_infofact->Location = System::Drawing::Point(1745, 279);
			this->label_infofact->Name = L"label_infofact";
			this->label_infofact->Size = System::Drawing::Size(392, 45);
			this->label_infofact->TabIndex = 76;
			this->label_infofact->Text = L"Informations Facturation";
			// 
			// text_messagecommande
			// 
			this->text_messagecommande->Location = System::Drawing::Point(20, 1068);
			this->text_messagecommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_messagecommande->Multiline = true;
			this->text_messagecommande->Name = L"text_messagecommande";
			this->text_messagecommande->ReadOnly = true;
			this->text_messagecommande->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->text_messagecommande->Size = System::Drawing::Size(2291, 72);
			this->text_messagecommande->TabIndex = 75;
			// 
			// label_soldereglement
			// 
			this->label_soldereglement->AutoSize = true;
			this->label_soldereglement->BackColor = System::Drawing::Color::Transparent;
			this->label_soldereglement->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_soldereglement->ForeColor = System::Drawing::Color::White;
			this->label_soldereglement->Location = System::Drawing::Point(1128, 802);
			this->label_soldereglement->Name = L"label_soldereglement";
			this->label_soldereglement->Size = System::Drawing::Size(249, 37);
			this->label_soldereglement->TabIndex = 74;
			this->label_soldereglement->Text = L"Solde de r�glement";
			// 
			// label_idadressesociete
			// 
			this->label_idadressesociete->AutoSize = true;
			this->label_idadressesociete->BackColor = System::Drawing::Color::Transparent;
			this->label_idadressesociete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idadressesociete->ForeColor = System::Drawing::Color::White;
			this->label_idadressesociete->Location = System::Drawing::Point(2020, 589);
			this->label_idadressesociete->Name = L"label_idadressesociete";
			this->label_idadressesociete->Size = System::Drawing::Size(142, 37);
			this->label_idadressesociete->TabIndex = 73;
			this->label_idadressesociete->Text = L"ID Adresse";
			// 
			// label_societe
			// 
			this->label_societe->AutoSize = true;
			this->label_societe->BackColor = System::Drawing::Color::Transparent;
			this->label_societe->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_societe->ForeColor = System::Drawing::Color::White;
			this->label_societe->Location = System::Drawing::Point(1757, 591);
			this->label_societe->Name = L"label_societe";
			this->label_societe->Size = System::Drawing::Size(103, 37);
			this->label_societe->TabIndex = 72;
			this->label_societe->Text = L"Soci�t�";
			// 
			// label_nmservice
			// 
			this->label_nmservice->AutoSize = true;
			this->label_nmservice->BackColor = System::Drawing::Color::Transparent;
			this->label_nmservice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_nmservice->ForeColor = System::Drawing::Color::White;
			this->label_nmservice->Location = System::Drawing::Point(1757, 489);
			this->label_nmservice->Name = L"label_nmservice";
			this->label_nmservice->Size = System::Drawing::Size(309, 37);
			this->label_nmservice->TabIndex = 71;
			this->label_nmservice->Text = L"Num�ro de service client";
			// 
			// label_idfacture
			// 
			this->label_idfacture->AutoSize = true;
			this->label_idfacture->BackColor = System::Drawing::Color::Transparent;
			this->label_idfacture->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_idfacture->ForeColor = System::Drawing::Color::White;
			this->label_idfacture->Location = System::Drawing::Point(1757, 379);
			this->label_idfacture->Name = L"label_idfacture";
			this->label_idfacture->Size = System::Drawing::Size(135, 37);
			this->label_idfacture->TabIndex = 70;
			this->label_idfacture->Text = L"ID Facture";
			// 
			// text_nmservice
			// 
			this->text_nmservice->Location = System::Drawing::Point(1764, 526);
			this->text_nmservice->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_nmservice->Name = L"text_nmservice";
			this->text_nmservice->Size = System::Drawing::Size(408, 31);
			this->text_nmservice->TabIndex = 69;
			// 
			// text_soldereglement
			// 
			this->text_soldereglement->Location = System::Drawing::Point(1135, 840);
			this->text_soldereglement->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_soldereglement->Name = L"text_soldereglement";
			this->text_soldereglement->Size = System::Drawing::Size(379, 31);
			this->text_soldereglement->TabIndex = 68;
			// 
			// text_idadressesociete
			// 
			this->text_idadressesociete->Location = System::Drawing::Point(2027, 626);
			this->text_idadressesociete->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idadressesociete->Name = L"text_idadressesociete";
			this->text_idadressesociete->Size = System::Drawing::Size(145, 31);
			this->text_idadressesociete->TabIndex = 67;
			// 
			// text_societe
			// 
			this->text_societe->Location = System::Drawing::Point(1764, 629);
			this->text_societe->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_societe->Name = L"text_societe";
			this->text_societe->Size = System::Drawing::Size(227, 31);
			this->text_societe->TabIndex = 66;
			// 
			// text_idfacture
			// 
			this->text_idfacture->Location = System::Drawing::Point(1764, 419);
			this->text_idfacture->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idfacture->Name = L"text_idfacture";
			this->text_idfacture->Size = System::Drawing::Size(408, 31);
			this->text_idfacture->TabIndex = 65;
			// 
			// label_datelivraison
			// 
			this->label_datelivraison->AutoSize = true;
			this->label_datelivraison->BackColor = System::Drawing::Color::Transparent;
			this->label_datelivraison->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_datelivraison->ForeColor = System::Drawing::Color::White;
			this->label_datelivraison->Location = System::Drawing::Point(136, 802);
			this->label_datelivraison->Name = L"label_datelivraison";
			this->label_datelivraison->Size = System::Drawing::Size(396, 37);
			this->label_datelivraison->TabIndex = 63;
			this->label_datelivraison->Text = L"Date de livraison (JJ/MM/AAAA)\r\n";
			// 
			// label_monanttotHT
			// 
			this->label_monanttotHT->AutoSize = true;
			this->label_monanttotHT->BackColor = System::Drawing::Color::Transparent;
			this->label_monanttotHT->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_monanttotHT->ForeColor = System::Drawing::Color::White;
			this->label_monanttotHT->Location = System::Drawing::Point(136, 660);
			this->label_monanttotHT->Name = L"label_monanttotHT";
			this->label_monanttotHT->Size = System::Drawing::Size(221, 37);
			this->label_monanttotHT->TabIndex = 62;
			this->label_monanttotHT->Text = L"Montant total HT";
			// 
			// label2_idclientcommande
			// 
			this->label2_idclientcommande->AutoSize = true;
			this->label2_idclientcommande->BackColor = System::Drawing::Color::Transparent;
			this->label2_idclientcommande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2_idclientcommande->ForeColor = System::Drawing::Color::White;
			this->label2_idclientcommande->Location = System::Drawing::Point(136, 519);
			this->label2_idclientcommande->Name = L"label2_idclientcommande";
			this->label2_idclientcommande->Size = System::Drawing::Size(119, 37);
			this->label2_idclientcommande->TabIndex = 61;
			this->label2_idclientcommande->Text = L"ID Client";
			// 
			// labelref_commande
			// 
			this->labelref_commande->AutoSize = true;
			this->labelref_commande->BackColor = System::Drawing::Color::Transparent;
			this->labelref_commande->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->labelref_commande->ForeColor = System::Drawing::Color::White;
			this->labelref_commande->Location = System::Drawing::Point(136, 379);
			this->labelref_commande->Name = L"labelref_commande";
			this->labelref_commande->Size = System::Drawing::Size(337, 37);
			this->labelref_commande->TabIndex = 60;
			this->labelref_commande->Text = L"R�f�rence de la commande";
			// 
			// text_idclientcommande
			// 
			this->text_idclientcommande->Location = System::Drawing::Point(143, 556);
			this->text_idclientcommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_idclientcommande->Name = L"text_idclientcommande";
			this->text_idclientcommande->Size = System::Drawing::Size(219, 31);
			this->text_idclientcommande->TabIndex = 59;
			// 
			// text_datelivraison
			// 
			this->text_datelivraison->Location = System::Drawing::Point(143, 841);
			this->text_datelivraison->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_datelivraison->Name = L"text_datelivraison";
			this->text_datelivraison->Size = System::Drawing::Size(381, 31);
			this->text_datelivraison->TabIndex = 57;
			// 
			// text_montanttotHT
			// 
			this->text_montanttotHT->Location = System::Drawing::Point(143, 698);
			this->text_montanttotHT->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_montanttotHT->Name = L"text_montanttotHT";
			this->text_montanttotHT->Size = System::Drawing::Size(219, 31);
			this->text_montanttotHT->TabIndex = 56;
			// 
			// text_refcommande
			// 
			this->text_refcommande->Location = System::Drawing::Point(143, 418);
			this->text_refcommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->text_refcommande->Name = L"text_refcommande";
			this->text_refcommande->Size = System::Drawing::Size(789, 31);
			this->text_refcommande->TabIndex = 55;
			// 
			// dataGridView_gestcommande
			// 
			this->dataGridView_gestcommande->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView_gestcommande->Location = System::Drawing::Point(20, 1180);
			this->dataGridView_gestcommande->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView_gestcommande->Name = L"dataGridView_gestcommande";
			this->dataGridView_gestcommande->RowHeadersWidth = 62;
			this->dataGridView_gestcommande->RowTemplate->Height = 28;
			this->dataGridView_gestcommande->Size = System::Drawing::Size(2307, 375);
			this->dataGridView_gestcommande->TabIndex = 54;
			// 
			// Title_Gestion_Commandes
			// 
			this->Title_Gestion_Commandes->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Commandes->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Commandes->Location = System::Drawing::Point(873, 86);
			this->Title_Gestion_Commandes->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Title_Gestion_Commandes->Name = L"Title_Gestion_Commandes";
			this->Title_Gestion_Commandes->Size = System::Drawing::Size(832, 165);
			this->Title_Gestion_Commandes->TabIndex = 0;
			this->Title_Gestion_Commandes->Text = L"Gestion Commandes";
			this->Title_Gestion_Commandes->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel_Gestion_Stock
			// 
			this->panel_Gestion_Stock->Controls->Add(this->Textbox_Message_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_Supprimer_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_Modifier_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_nouveau_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->btn_enregistrer_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->textBox6);
			this->panel_Gestion_Stock->Controls->Add(this->label_Couleur_Article);
			this->panel_Gestion_Stock->Controls->Add(this->text_Taux_TVA_Article);
			this->panel_Gestion_Stock->Controls->Add(this->label_Taux_TVA);
			this->panel_Gestion_Stock->Controls->Add(this->text_Approvisionnement_Article);
			this->panel_Gestion_Stock->Controls->Add(this->label_Approvisionnement);
			this->panel_Gestion_Stock->Controls->Add(this->text_Prix_HT);
			this->panel_Gestion_Stock->Controls->Add(this->label_Prix_HT);
			this->panel_Gestion_Stock->Controls->Add(this->textBox4);
			this->panel_Gestion_Stock->Controls->Add(this->label_remise_article);
			this->panel_Gestion_Stock->Controls->Add(this->text_Stock_Article);
			this->panel_Gestion_Stock->Controls->Add(this->label_stock);
			this->panel_Gestion_Stock->Controls->Add(this->textBox2);
			this->panel_Gestion_Stock->Controls->Add(this->label_nom_article);
			this->panel_Gestion_Stock->Controls->Add(this->text_Nature_article);
			this->panel_Gestion_Stock->Controls->Add(this->label_Nature);
			this->panel_Gestion_Stock->Controls->Add(this->text_ref_article);
			this->panel_Gestion_Stock->Controls->Add(this->label_ref_article);
			this->panel_Gestion_Stock->Controls->Add(this->title_Gestion_Stock);
			this->panel_Gestion_Stock->Controls->Add(this->Panel_Gestion_Stat);
			this->panel_Gestion_Stock->Location = System::Drawing::Point(96, 6);
			this->panel_Gestion_Stock->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->panel_Gestion_Stock->Name = L"panel_Gestion_Stock";
			this->panel_Gestion_Stock->Size = System::Drawing::Size(2344, 1294);
			this->panel_Gestion_Stock->TabIndex = 0;
			this->panel_Gestion_Stock->Visible = false;
			// 
			// title_Gestion_Stock
			// 
			this->title_Gestion_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title_Gestion_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->title_Gestion_Stock->Location = System::Drawing::Point(579, 50);
			this->title_Gestion_Stock->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->title_Gestion_Stock->Name = L"title_Gestion_Stock";
			this->title_Gestion_Stock->Size = System::Drawing::Size(635, 150);
			this->title_Gestion_Stock->TabIndex = 0;
			this->title_Gestion_Stock->Text = L"Gestion Stock";
			// 
			// Panel_Gestion_Stat
			// 
			this->Panel_Gestion_Stat->AccessibleRole = System::Windows::Forms::AccessibleRole::Pane;
			this->Panel_Gestion_Stat->Controls->Add(this->comboBox_TVAStat);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton29);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton28);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton27);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton26);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton21);
			this->Panel_Gestion_Stat->Controls->Add(this->label12);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton22);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton23);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton24);
			this->Panel_Gestion_Stat->Controls->Add(this->bunifuThinButton25);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox11);
			this->Panel_Gestion_Stat->Controls->Add(this->label18);
			this->Panel_Gestion_Stat->Controls->Add(this->label19);
			this->Panel_Gestion_Stat->Controls->Add(this->label20);
			this->Panel_Gestion_Stat->Controls->Add(this->label21);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox16);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox17);
			this->Panel_Gestion_Stat->Controls->Add(this->textBox18);
			this->Panel_Gestion_Stat->Controls->Add(this->dataGridView2);
			this->Panel_Gestion_Stat->Controls->Add(this->Title_Gestion_Stat);
			this->Panel_Gestion_Stat->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Panel_Gestion_Stat->Location = System::Drawing::Point(1483, 132);
			this->Panel_Gestion_Stat->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Panel_Gestion_Stat->Name = L"Panel_Gestion_Stat";
			this->Panel_Gestion_Stat->Size = System::Drawing::Size(2463, 1611);
			this->Panel_Gestion_Stat->TabIndex = 5;
			this->Panel_Gestion_Stat->Visible = false;
			this->Panel_Gestion_Stat->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Dashboard::Panel_Gestion_Stat_Paint);
			// 
			// comboBox_TVAStat
			// 
			this->comboBox_TVAStat->FormattingEnabled = true;
			this->comboBox_TVAStat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"1", L"2", L"3" });
			this->comboBox_TVAStat->Location = System::Drawing::Point(199, 411);
			this->comboBox_TVAStat->Margin = System::Windows::Forms::Padding(4);
			this->comboBox_TVAStat->Name = L"comboBox_TVAStat";
			this->comboBox_TVAStat->Size = System::Drawing::Size(789, 33);
			this->comboBox_TVAStat->TabIndex = 176;
			// 
			// bunifuThinButton29
			// 
			this->bunifuThinButton29->ActiveBorderThickness = 1;
			this->bunifuThinButton29->ActiveCornerRadius = 20;
			this->bunifuThinButton29->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton29->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton29->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton29.BackgroundImage")));
			this->bunifuThinButton29->ButtonText = L"Valeur Commercial (Variations)";
			this->bunifuThinButton29->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton29->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton29->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleBorderThickness = 1;
			this->bunifuThinButton29->IdleCornerRadius = 20;
			this->bunifuThinButton29->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton29->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton29->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton29->Location = System::Drawing::Point(199, 949);
			this->bunifuThinButton29->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton29->Name = L"bunifuThinButton29";
			this->bunifuThinButton29->Size = System::Drawing::Size(789, 90);
			this->bunifuThinButton29->TabIndex = 175;
			this->bunifuThinButton29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton28
			// 
			this->bunifuThinButton28->ActiveBorderThickness = 1;
			this->bunifuThinButton28->ActiveCornerRadius = 20;
			this->bunifuThinButton28->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton28->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton28->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton28.BackgroundImage")));
			this->bunifuThinButton28->ButtonText = L"Valeur d\'Achat du Stock";
			this->bunifuThinButton28->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton28->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton28->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleBorderThickness = 1;
			this->bunifuThinButton28->IdleCornerRadius = 20;
			this->bunifuThinButton28->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton28->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton28->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton28->Location = System::Drawing::Point(1539, 895);
			this->bunifuThinButton28->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton28->Name = L"bunifuThinButton28";
			this->bunifuThinButton28->Size = System::Drawing::Size(365, 90);
			this->bunifuThinButton28->TabIndex = 174;
			this->bunifuThinButton28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton27
			// 
			this->bunifuThinButton27->ActiveBorderThickness = 1;
			this->bunifuThinButton27->ActiveCornerRadius = 20;
			this->bunifuThinButton27->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton27->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton27->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton27.BackgroundImage")));
			this->bunifuThinButton27->ButtonText = L"Valeur Commercial du Stock";
			this->bunifuThinButton27->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton27->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton27->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleBorderThickness = 1;
			this->bunifuThinButton27->IdleCornerRadius = 20;
			this->bunifuThinButton27->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton27->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton27->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton27->Location = System::Drawing::Point(1963, 895);
			this->bunifuThinButton27->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton27->Name = L"bunifuThinButton27";
			this->bunifuThinButton27->Size = System::Drawing::Size(365, 90);
			this->bunifuThinButton27->TabIndex = 173;
			this->bunifuThinButton27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton26
			// 
			this->bunifuThinButton26->ActiveBorderThickness = 1;
			this->bunifuThinButton26->ActiveCornerRadius = 20;
			this->bunifuThinButton26->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton26->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton26->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton26.BackgroundImage")));
			this->bunifuThinButton26->ButtonText = L"Les 10 articles les moins vendus";
			this->bunifuThinButton26->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton26->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton26->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleBorderThickness = 1;
			this->bunifuThinButton26->IdleCornerRadius = 20;
			this->bunifuThinButton26->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton26->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton26->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton26->Location = System::Drawing::Point(1539, 620);
			this->bunifuThinButton26->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton26->Name = L"bunifuThinButton26";
			this->bunifuThinButton26->Size = System::Drawing::Size(365, 90);
			this->bunifuThinButton26->TabIndex = 172;
			this->bunifuThinButton26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton21
			// 
			this->bunifuThinButton21->ActiveBorderThickness = 1;
			this->bunifuThinButton21->ActiveCornerRadius = 20;
			this->bunifuThinButton21->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton21->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton21.BackgroundImage")));
			this->bunifuThinButton21->ButtonText = L"Montant total d\'achat d\'un client";
			this->bunifuThinButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton21->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton21->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleBorderThickness = 1;
			this->bunifuThinButton21->IdleCornerRadius = 20;
			this->bunifuThinButton21->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton21->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton21->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton21->Location = System::Drawing::Point(1539, 755);
			this->bunifuThinButton21->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton21->Name = L"bunifuThinButton21";
			this->bunifuThinButton21->Size = System::Drawing::Size(789, 90);
			this->bunifuThinButton21->TabIndex = 167;
			this->bunifuThinButton21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline))));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(151, 290);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(840, 45);
			this->label12->TabIndex = 149;
			this->label12->Text = L"Calcul de la valeur commercial du stock avec variations";
			// 
			// bunifuThinButton22
			// 
			this->bunifuThinButton22->ActiveBorderThickness = 1;
			this->bunifuThinButton22->ActiveCornerRadius = 20;
			this->bunifuThinButton22->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton22->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton22.BackgroundImage")));
			this->bunifuThinButton22->ButtonText = L"Chiffre d\'affaire ";
			this->bunifuThinButton22->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton22->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton22->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleBorderThickness = 1;
			this->bunifuThinButton22->IdleCornerRadius = 20;
			this->bunifuThinButton22->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton22->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton22->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton22->Location = System::Drawing::Point(1963, 304);
			this->bunifuThinButton22->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton22->Name = L"bunifuThinButton22";
			this->bunifuThinButton22->Size = System::Drawing::Size(364, 90);
			this->bunifuThinButton22->TabIndex = 148;
			this->bunifuThinButton22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton23
			// 
			this->bunifuThinButton23->ActiveBorderThickness = 1;
			this->bunifuThinButton23->ActiveCornerRadius = 20;
			this->bunifuThinButton23->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton23->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton23.BackgroundImage")));
			this->bunifuThinButton23->ButtonText = L"Produits sous seuil r�apprivisionnement";
			this->bunifuThinButton23->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton23->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton23->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleBorderThickness = 1;
			this->bunifuThinButton23->IdleCornerRadius = 20;
			this->bunifuThinButton23->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton23->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton23->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton23->Location = System::Drawing::Point(1537, 462);
			this->bunifuThinButton23->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton23->Name = L"bunifuThinButton23";
			this->bunifuThinButton23->Size = System::Drawing::Size(789, 90);
			this->bunifuThinButton23->TabIndex = 147;
			this->bunifuThinButton23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton24
			// 
			this->bunifuThinButton24->ActiveBorderThickness = 1;
			this->bunifuThinButton24->ActiveCornerRadius = 20;
			this->bunifuThinButton24->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton24->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton24.BackgroundImage")));
			this->bunifuThinButton24->ButtonText = L"Les 10 articles les plus vendus";
			this->bunifuThinButton24->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton24->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton24->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleBorderThickness = 1;
			this->bunifuThinButton24->IdleCornerRadius = 20;
			this->bunifuThinButton24->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton24->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton24->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton24->Location = System::Drawing::Point(1963, 620);
			this->bunifuThinButton24->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton24->Name = L"bunifuThinButton24";
			this->bunifuThinButton24->Size = System::Drawing::Size(365, 90);
			this->bunifuThinButton24->TabIndex = 146;
			this->bunifuThinButton24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bunifuThinButton25
			// 
			this->bunifuThinButton25->ActiveBorderThickness = 1;
			this->bunifuThinButton25->ActiveCornerRadius = 20;
			this->bunifuThinButton25->ActiveFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->ActiveForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->bunifuThinButton25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->bunifuThinButton25->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bunifuThinButton25.BackgroundImage")));
			this->bunifuThinButton25->ButtonText = L"Panier Moyen";
			this->bunifuThinButton25->Cursor = System::Windows::Forms::Cursors::Hand;
			this->bunifuThinButton25->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bunifuThinButton25->ForeColor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleBorderThickness = 1;
			this->bunifuThinButton25->IdleCornerRadius = 20;
			this->bunifuThinButton25->IdleFillColor = System::Drawing::Color::Transparent;
			this->bunifuThinButton25->IdleForecolor = System::Drawing::Color::White;
			this->bunifuThinButton25->IdleLineColor = System::Drawing::Color::White;
			this->bunifuThinButton25->Location = System::Drawing::Point(1537, 304);
			this->bunifuThinButton25->Margin = System::Windows::Forms::Padding(7, 6, 7, 6);
			this->bunifuThinButton25->Name = L"bunifuThinButton25";
			this->bunifuThinButton25->Size = System::Drawing::Size(361, 90);
			this->bunifuThinButton25->TabIndex = 145;
			this->bunifuThinButton25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(79, 1119);
			this->textBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox11->Size = System::Drawing::Size(2303, 72);
			this->textBox11->TabIndex = 143;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(192, 796);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(243, 37);
			this->label18->TabIndex = 134;
			this->label18->Text = L"D�marque inconnu";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(192, 654);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(245, 37);
			this->label19->TabIndex = 133;
			this->label19->Text = L"Remise commercial";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(192, 512);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(238, 37);
			this->label20->TabIndex = 132;
			this->label20->Text = L"Marge commercial";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(192, 372);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(64, 37);
			this->label21->TabIndex = 131;
			this->label21->Text = L"TVA";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(199, 550);
			this->textBox16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(789, 31);
			this->textBox16->TabIndex = 130;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(199, 835);
			this->textBox17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(789, 31);
			this->textBox17->TabIndex = 129;
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(199, 691);
			this->textBox18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(789, 31);
			this->textBox18->TabIndex = 128;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(76, 1209);
			this->dataGridView2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 62;
			this->dataGridView2->RowTemplate->Height = 28;
			this->dataGridView2->Size = System::Drawing::Size(2307, 340);
			this->dataGridView2->TabIndex = 126;
			// 
			// Title_Gestion_Stat
			// 
			this->Title_Gestion_Stat->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title_Gestion_Stat->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->Title_Gestion_Stat->Location = System::Drawing::Point(887, 71);
			this->Title_Gestion_Stat->Margin = System::Windows::Forms::Padding(5, 0, 5, 0);
			this->Title_Gestion_Stat->Name = L"Title_Gestion_Stat";
			this->Title_Gestion_Stat->Size = System::Drawing::Size(748, 150);
			this->Title_Gestion_Stat->TabIndex = 0;
			this->Title_Gestion_Stat->Text = L"Gestion Statistiques";
			this->Title_Gestion_Stat->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_ref_article
			// 
			this->label_ref_article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_ref_article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_ref_article->Location = System::Drawing::Point(121, 242);
			this->label_ref_article->Name = L"label_ref_article";
			this->label_ref_article->Size = System::Drawing::Size(200, 52);
			this->label_ref_article->TabIndex = 1;
			this->label_ref_article->Text = L"r�f�rence";
			// 
			// text_ref_article
			// 
			this->text_ref_article->Location = System::Drawing::Point(126, 303);
			this->text_ref_article->Name = L"text_ref_article";
			this->text_ref_article->Size = System::Drawing::Size(264, 31);
			this->text_ref_article->TabIndex = 2;
			// 
			// text_Nature_article
			// 
			this->text_Nature_article->Location = System::Drawing::Point(124, 455);
			this->text_Nature_article->Name = L"text_Nature_article";
			this->text_Nature_article->Size = System::Drawing::Size(264, 31);
			this->text_Nature_article->TabIndex = 4;
			// 
			// label_Nature
			// 
			this->label_Nature->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Nature->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Nature->Location = System::Drawing::Point(119, 394);
			this->label_Nature->Name = L"label_Nature";
			this->label_Nature->Size = System::Drawing::Size(200, 52);
			this->label_Nature->TabIndex = 3;
			this->label_Nature->Text = L"Nature";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(126, 616);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 31);
			this->textBox2->TabIndex = 6;
			// 
			// label_nom_article
			// 
			this->label_nom_article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_nom_article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_nom_article->Location = System::Drawing::Point(121, 555);
			this->label_nom_article->Name = L"label_nom_article";
			this->label_nom_article->Size = System::Drawing::Size(200, 52);
			this->label_nom_article->TabIndex = 5;
			this->label_nom_article->Text = L"nom";
			// 
			// text_Prix_HT
			// 
			this->text_Prix_HT->Location = System::Drawing::Point(591, 634);
			this->text_Prix_HT->Name = L"text_Prix_HT";
			this->text_Prix_HT->Size = System::Drawing::Size(264, 31);
			this->text_Prix_HT->TabIndex = 12;
			// 
			// label_Prix_HT
			// 
			this->label_Prix_HT->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Prix_HT->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Prix_HT->Location = System::Drawing::Point(586, 573);
			this->label_Prix_HT->Name = L"label_Prix_HT";
			this->label_Prix_HT->Size = System::Drawing::Size(200, 52);
			this->label_Prix_HT->TabIndex = 11;
			this->label_Prix_HT->Text = L"Prix HT";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(589, 473);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(264, 31);
			this->textBox4->TabIndex = 10;
			// 
			// label_remise_article
			// 
			this->label_remise_article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_remise_article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_remise_article->Location = System::Drawing::Point(584, 412);
			this->label_remise_article->Name = L"label_remise_article";
			this->label_remise_article->Size = System::Drawing::Size(200, 52);
			this->label_remise_article->TabIndex = 9;
			this->label_remise_article->Text = L"Remise";
			// 
			// text_Stock_Article
			// 
			this->text_Stock_Article->Location = System::Drawing::Point(591, 321);
			this->text_Stock_Article->Name = L"text_Stock_Article";
			this->text_Stock_Article->Size = System::Drawing::Size(264, 31);
			this->text_Stock_Article->TabIndex = 8;
			// 
			// label_stock
			// 
			this->label_stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_stock->Location = System::Drawing::Point(586, 260);
			this->label_stock->Name = L"label_stock";
			this->label_stock->Size = System::Drawing::Size(200, 52);
			this->label_stock->TabIndex = 7;
			this->label_stock->Text = L"Stock";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(1035, 625);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(264, 31);
			this->textBox6->TabIndex = 18;
			// 
			// label_Couleur_Article
			// 
			this->label_Couleur_Article->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Couleur_Article->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Couleur_Article->Location = System::Drawing::Point(1030, 564);
			this->label_Couleur_Article->Name = L"label_Couleur_Article";
			this->label_Couleur_Article->Size = System::Drawing::Size(200, 52);
			this->label_Couleur_Article->TabIndex = 17;
			this->label_Couleur_Article->Text = L"Couleur";
			// 
			// text_Taux_TVA_Article
			// 
			this->text_Taux_TVA_Article->Location = System::Drawing::Point(1033, 464);
			this->text_Taux_TVA_Article->Name = L"text_Taux_TVA_Article";
			this->text_Taux_TVA_Article->Size = System::Drawing::Size(264, 31);
			this->text_Taux_TVA_Article->TabIndex = 16;
			// 
			// label_Taux_TVA
			// 
			this->label_Taux_TVA->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Taux_TVA->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Taux_TVA->Location = System::Drawing::Point(1028, 403);
			this->label_Taux_TVA->Name = L"label_Taux_TVA";
			this->label_Taux_TVA->Size = System::Drawing::Size(200, 52);
			this->label_Taux_TVA->TabIndex = 15;
			this->label_Taux_TVA->Text = L"Taux TVA";
			// 
			// text_Approvisionnement_Article
			// 
			this->text_Approvisionnement_Article->Location = System::Drawing::Point(1035, 312);
			this->text_Approvisionnement_Article->Name = L"text_Approvisionnement_Article";
			this->text_Approvisionnement_Article->Size = System::Drawing::Size(264, 31);
			this->text_Approvisionnement_Article->TabIndex = 14;
			// 
			// label_Approvisionnement
			// 
			this->label_Approvisionnement->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->label_Approvisionnement->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->label_Approvisionnement->Location = System::Drawing::Point(1030, 251);
			this->label_Approvisionnement->Name = L"label_Approvisionnement";
			this->label_Approvisionnement->Size = System::Drawing::Size(308, 52);
			this->label_Approvisionnement->TabIndex = 13;
			this->label_Approvisionnement->Text = L"Approvisionnement";
			// 
			// btn_enregistrer_Stock
			// 
			this->btn_enregistrer_Stock->ActiveBorderThickness = 1;
			this->btn_enregistrer_Stock->ActiveCornerRadius = 20;
			this->btn_enregistrer_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_enregistrer_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_enregistrer_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_enregistrer_Stock.BackgroundImage")));
			this->btn_enregistrer_Stock->ButtonText = L"Enregistrer";
			this->btn_enregistrer_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_enregistrer_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_enregistrer_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->IdleBorderThickness = 1;
			this->btn_enregistrer_Stock->IdleCornerRadius = 20;
			this->btn_enregistrer_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_enregistrer_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_enregistrer_Stock->Location = System::Drawing::Point(121, 718);
			this->btn_enregistrer_Stock->Margin = System::Windows::Forms::Padding(5);
			this->btn_enregistrer_Stock->Name = L"btn_enregistrer_Stock";
			this->btn_enregistrer_Stock->Size = System::Drawing::Size(267, 156);
			this->btn_enregistrer_Stock->TabIndex = 19;
			this->btn_enregistrer_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_nouveau_Stock
			// 
			this->btn_nouveau_Stock->ActiveBorderThickness = 1;
			this->btn_nouveau_Stock->ActiveCornerRadius = 20;
			this->btn_nouveau_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_nouveau_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_nouveau_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_nouveau_Stock.BackgroundImage")));
			this->btn_nouveau_Stock->ButtonText = L"Nouveau";
			this->btn_nouveau_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_nouveau_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_nouveau_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->IdleBorderThickness = 1;
			this->btn_nouveau_Stock->IdleCornerRadius = 20;
			this->btn_nouveau_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_nouveau_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_nouveau_Stock->Location = System::Drawing::Point(471, 718);
			this->btn_nouveau_Stock->Margin = System::Windows::Forms::Padding(5);
			this->btn_nouveau_Stock->Name = L"btn_nouveau_Stock";
			this->btn_nouveau_Stock->Size = System::Drawing::Size(267, 156);
			this->btn_nouveau_Stock->TabIndex = 20;
			this->btn_nouveau_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_Modifier_Stock
			// 
			this->btn_Modifier_Stock->ActiveBorderThickness = 1;
			this->btn_Modifier_Stock->ActiveCornerRadius = 20;
			this->btn_Modifier_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_Modifier_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_Modifier_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_Modifier_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Modifier_Stock.BackgroundImage")));
			this->btn_Modifier_Stock->ButtonText = L"Modifier";
			this->btn_Modifier_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Modifier_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_Modifier_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->IdleBorderThickness = 1;
			this->btn_Modifier_Stock->IdleCornerRadius = 20;
			this->btn_Modifier_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_Modifier_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Modifier_Stock->Location = System::Drawing::Point(795, 718);
			this->btn_Modifier_Stock->Margin = System::Windows::Forms::Padding(5);
			this->btn_Modifier_Stock->Name = L"btn_Modifier_Stock";
			this->btn_Modifier_Stock->Size = System::Drawing::Size(267, 156);
			this->btn_Modifier_Stock->TabIndex = 21;
			this->btn_Modifier_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_Supprimer_Stock
			// 
			this->btn_Supprimer_Stock->ActiveBorderThickness = 1;
			this->btn_Supprimer_Stock->ActiveCornerRadius = 20;
			this->btn_Supprimer_Stock->ActiveFillColor = System::Drawing::Color::Transparent;
			this->btn_Supprimer_Stock->ActiveForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->ActiveLineColor = System::Drawing::Color::SeaGreen;
			this->btn_Supprimer_Stock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)), static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->btn_Supprimer_Stock->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btn_Supprimer_Stock.BackgroundImage")));
			this->btn_Supprimer_Stock->ButtonText = L"Supprimer";
			this->btn_Supprimer_Stock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btn_Supprimer_Stock->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 11.25F, System::Drawing::FontStyle::Bold));
			this->btn_Supprimer_Stock->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->IdleBorderThickness = 1;
			this->btn_Supprimer_Stock->IdleCornerRadius = 20;
			this->btn_Supprimer_Stock->IdleFillColor = System::Drawing::Color::Transparent;
			this->btn_Supprimer_Stock->IdleForecolor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->IdleLineColor = System::Drawing::Color::WhiteSmoke;
			this->btn_Supprimer_Stock->Location = System::Drawing::Point(1120, 718);
			this->btn_Supprimer_Stock->Margin = System::Windows::Forms::Padding(5);
			this->btn_Supprimer_Stock->Name = L"btn_Supprimer_Stock";
			this->btn_Supprimer_Stock->Size = System::Drawing::Size(267, 156);
			this->btn_Supprimer_Stock->TabIndex = 22;
			this->btn_Supprimer_Stock->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Textbox_Message_Stock
			// 
			this->Textbox_Message_Stock->Location = System::Drawing::Point(47, 1099);
			this->Textbox_Message_Stock->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Textbox_Message_Stock->Multiline = true;
			this->Textbox_Message_Stock->Name = L"Textbox_Message_Stock";
			this->Textbox_Message_Stock->ReadOnly = true;
			this->Textbox_Message_Stock->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->Textbox_Message_Stock->Size = System::Drawing::Size(2303, 72);
			this->Textbox_Message_Stock->TabIndex = 144;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(46)), static_cast<System::Int32>(static_cast<System::Byte>(51)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)));
			this->ClientSize = System::Drawing::Size(2564, 1559);
			this->Controls->Add(this->Panel_Gestion_Commandes);
			this->Controls->Add(this->Panel_Gestion_Client);
			this->Controls->Add(this->panel_gestion);
			this->Controls->Add(this->Panel_Dashboard);
			this->Controls->Add(this->panel_Gestion_Personnel);
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel_Gestion_Personnel->ResumeLayout(false);
			this->panel_Gestion_Personnel->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel_gestion->ResumeLayout(false);
			this->Panel_Dashboard->ResumeLayout(false);
			this->Panel_Gestion_Client->ResumeLayout(false);
			this->Panel_Gestion_Client->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestclient))->EndInit();
			this->Panel_Gestion_Commandes->ResumeLayout(false);
			this->Panel_Gestion_Commandes->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView_gestcommande))->EndInit();
			this->panel_Gestion_Stock->ResumeLayout(false);
			this->panel_Gestion_Stock->PerformLayout();
			this->Panel_Gestion_Stat->ResumeLayout(false);
			this->Panel_Gestion_Stat->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
			private: System::Void Click_Btn_gestion_Personnel(System::Object^ sender, System::EventArgs^ e) {	
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = true;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Clients(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = true;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Commandes(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = true;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Stock(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = true;
				this->Panel_Gestion_Stat->Visible = false;
			}
			private: System::Void Click_Btn_gestion_Stat(System::Object^ sender, System::EventArgs^ e) {
				this->Panel_Dashboard->Visible = false;
				this->panel_Gestion_Personnel->Visible = false;
				this->Panel_Gestion_Client->Visible = false;
				this->Panel_Gestion_Commandes->Visible = false;
				this->panel_Gestion_Stock->Visible = false;
				this->Panel_Gestion_Stat->Visible = true;
			}
			private: System::Void Click_Btn_Exit_DB(System::Object^ sender, System::EventArgs^ e) {
				Application::Exit();
			}
			private: System::Void btn_nouveau_Click(System::Object^ sender, System::EventArgs^ e) {
				this->text_personnel->Clear();
				this->text_nom->Clear();
				choice_superieur->TabIndex =0;
				this->text_pernom->Clear();
				this->text_adresse->Clear();
				this->text_ville->Clear();
				choice_departement->TabIndex = 0;
				this->textBox_code_postal->Clear();
			}
private: System::Void Panel_Dashboard_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel_Gestion_Personnel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}


private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_ville_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Label_Id_perso_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_personnel_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_nom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_nom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_pernom_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_pernom_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_Superieur_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void choice_superieur_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_departement_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_departement_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox_code_postal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void text_adresse_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void select_date_embauche_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label_date_embauche_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_enregistrer_Click(System::Object^ sender, System::EventArgs^ e) {
}






private: System::Void Panel_Gestion_Stat_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}
