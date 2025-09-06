/*
 * VTFEdit
 * Copyright (C) 2005-2011 Neil Jedrzejewski & Ryan Gregg
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace VTFEdit
{
	public ref class CAbout : public System::Windows::Forms::Form
	{
	public: 
		CAbout(void)
		{
			this->InitializeComponent();

			this->lblVTFLibVersion->Text = String::Concat("VTFLib �汾: ", gcnew String(vlGetVersionString()));
		}

	private: System::Windows::Forms::Button ^ btnOK;
	private: System::Windows::Forms::GroupBox ^ grpAbout;

	private: System::Windows::Forms::Label ^ lblLanguage;

	private: System::Windows::Forms::Label ^ lblAuthor;
	private: System::Windows::Forms::LinkLabel ^ lnkNemsTools;
	private: System::Windows::Forms::PictureBox ^ picIcon;
	private: System::Windows::Forms::LinkLabel ^ lnkWunderboy;

	private: System::Windows::Forms::Label ^ lblVTFEditVersion;
	private: System::Windows::Forms::Label^ lblVTFLibVersion;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label1;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^ components;

		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CAbout::typeid));
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->grpAbout = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lblVTFLibVersion = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->lnkWunderboy = (gcnew System::Windows::Forms::LinkLabel());
			this->lblLanguage = (gcnew System::Windows::Forms::Label());
			this->lblAuthor = (gcnew System::Windows::Forms::Label());
			this->lblVTFEditVersion = (gcnew System::Windows::Forms::Label());
			this->lnkNemsTools = (gcnew System::Windows::Forms::LinkLabel());
			this->picIcon = (gcnew System::Windows::Forms::PictureBox());
			this->grpAbout->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picIcon))->BeginInit();
			this->SuspendLayout();
			// 
			// btnOK
			// 
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnOK->Location = System::Drawing::Point(257, 194);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(193, 26);
			this->btnOK->TabIndex = 0;
			this->btnOK->Text = L"&ȷ��";
			this->btnOK->Click += gcnew System::EventHandler(this, &CAbout::btnOK_Click);
			// 
			// grpAbout
			// 
			this->grpAbout->Controls->Add(this->label1);
			this->grpAbout->Controls->Add(this->lblVTFLibVersion);
			this->grpAbout->Controls->Add(this->btnOK);
			this->grpAbout->Controls->Add(this->linkLabel1);
			this->grpAbout->Controls->Add(this->lnkWunderboy);
			this->grpAbout->Controls->Add(this->lblLanguage);
			this->grpAbout->Controls->Add(this->lblAuthor);
			this->grpAbout->Controls->Add(this->lblVTFEditVersion);
			this->grpAbout->Controls->Add(this->lnkNemsTools);
			this->grpAbout->Controls->Add(this->picIcon);
			this->grpAbout->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpAbout->Location = System::Drawing::Point(12, 12);
			this->grpAbout->Name = L"grpAbout";
			this->grpAbout->Size = System::Drawing::Size(464, 236);
			this->grpAbout->TabIndex = 1;
			this->grpAbout->TabStop = false;
			this->grpAbout->Enter += gcnew System::EventHandler(this, &CAbout::grpAbout_Enter);
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(190, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(260, 42);
			this->label1->TabIndex = 9;
			this->label1->Text = L"���ĺ���:WhatUziname7";
			// 
			// lblVTFLibVersion
			// 
			this->lblVTFLibVersion->Location = System::Drawing::Point(282, 88);
			this->lblVTFLibVersion->Name = L"lblVTFLibVersion";
			this->lblVTFLibVersion->Size = System::Drawing::Size(102, 13);
			this->lblVTFLibVersion->TabIndex = 2;
			// 
			// linkLabel1
			// 
			this->linkLabel1->LinkColor = System::Drawing::Color::Black;
			this->linkLabel1->Location = System::Drawing::Point(93, 201);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(53, 20);
			this->linkLabel1->TabIndex = 8;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"froggi.es";
			this->linkLabel1->VisitedLinkColor = System::Drawing::Color::Black;
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CAbout::linkLabel1_LinkClicked);
			// 
			// lnkWunderboy
			// 
			this->lnkWunderboy->LinkColor = System::Drawing::Color::Black;
			this->lnkWunderboy->Location = System::Drawing::Point(152, 201);
			this->lnkWunderboy->Name = L"lnkWunderboy";
			this->lnkWunderboy->Size = System::Drawing::Size(87, 22);
			this->lnkWunderboy->TabIndex = 6;
			this->lnkWunderboy->TabStop = true;
			this->lnkWunderboy->Text = L"wunderboy.org";
			this->lnkWunderboy->VisitedLinkColor = System::Drawing::Color::Black;
			this->lnkWunderboy->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CAbout::lnkWunderboy_LinkClicked);
			// 
			// lblLanguage
			// 
			this->lblLanguage->Location = System::Drawing::Point(190, 166);
			this->lblLanguage->Name = L"lblLanguage";
			this->lblLanguage->Size = System::Drawing::Size(101, 13);
			this->lblLanguage->TabIndex = 4;
			this->lblLanguage->Text = L"��д��: C++";
			// 
			// lblAuthor
			// 
			this->lblAuthor->Location = System::Drawing::Point(190, 46);
			this->lblAuthor->Name = L"lblAuthor";
			this->lblAuthor->Size = System::Drawing::Size(260, 42);
			this->lblAuthor->TabIndex = 2;
			this->lblAuthor->Text = L"ԭ����: Joshua Ashton, Neil Jedrzejewski && Ryan Gregg";
			// 
			// lblVTFEditVersion
			// 
			this->lblVTFEditVersion->Location = System::Drawing::Point(231, 16);
			this->lblVTFEditVersion->Name = L"lblVTFEditVersion";
			this->lblVTFEditVersion->Size = System::Drawing::Size(153, 19);
			this->lblVTFEditVersion->TabIndex = 1;
			this->lblVTFEditVersion->Text = L"VTFEdit Reloaded �汾: 2.0.4";
			// 
			// lnkNemsTools
			// 
			this->lnkNemsTools->LinkColor = System::Drawing::Color::Black;
			this->lnkNemsTools->Location = System::Drawing::Point(6, 201);
			this->lnkNemsTools->Name = L"lnkNemsTools";
			this->lnkNemsTools->Size = System::Drawing::Size(81, 22);
			this->lnkNemsTools->TabIndex = 7;
			this->lnkNemsTools->TabStop = true;
			this->lnkNemsTools->Text = L"nemesis.twl.net";
			this->lnkNemsTools->VisitedLinkColor = System::Drawing::Color::Black;
			this->lnkNemsTools->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &CAbout::lnkNemsTools_LinkClicked);
			// 
			// picIcon
			// 
			this->picIcon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"picIcon.Image")));
			this->picIcon->Location = System::Drawing::Point(6, 16);
			this->picIcon->Name = L"picIcon";
			this->picIcon->Size = System::Drawing::Size(168, 178);
			this->picIcon->TabIndex = 0;
			this->picIcon->TabStop = false;
			// 
			// CAbout
			// 
			this->AcceptButton = this->btnOK;
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->ClientSize = System::Drawing::Size(488, 260);
			this->Controls->Add(this->grpAbout);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"CAbout";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"���� VTFEdit Reloaded";
			this->Load += gcnew System::EventHandler(this, &CAbout::CAbout_Load);
			this->grpAbout->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picIcon))->EndInit();
			this->ResumeLayout(false);

		}

		private: System::Void lnkWunderboy_LinkClicked(System::Object ^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e)
		{
			try
			{
				System::Diagnostics::Process::Start("http://www.wunderboy.org/");
			}
			catch(Exception ^)
			{

			}
		}

		private: System::Void lnkNemsTools_LinkClicked(System::Object ^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs ^ e)
		{
			try
			{
				System::Diagnostics::Process::Start("http://nemesis.thewavelength.net/");
			}
			catch(Exception ^)
			{

			}
		}

		private: System::Void btnOK_Click(System::Object ^ sender, System::EventArgs ^ e)
		{
			this->Close();
		}

		private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e)
		{
			try
			{
				System::Diagnostics::Process::Start("https://froggi.es");
			}
			catch(Exception ^)
			{

			}
		}
private: System::Void CAbout_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void grpAbout_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
}
};
}