/*
 * VTFEdit
 * Copyright (C) 2005-2010 Neil Jedrzejewski & Ryan Gregg
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

#include "stdafx.h"
#include "VTFOptions.h"
#include "VMTFileUtility.h"
#include "VTFFileUtility.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

namespace VTFEdit
{
	public ref class CWADConvert : public System::Windows::Forms::Form
	{
	private:
		CVTFOptions ^Options;

	public: 
		CWADConvert(CVTFOptions ^Options)
		{
			this->Options = Options;

			this->InitializeComponent();
		}

	private: System::Windows::Forms::GroupBox ^  grpOptions;
	private: System::Windows::Forms::Button ^  btnConvert;
	private: System::Windows::Forms::GroupBox ^  grpProgress;
	private: System::Windows::Forms::Label ^  lblWADFile;
	private: System::Windows::Forms::TextBox ^  txtWADFile;
	private: System::Windows::Forms::Button ^  btnWADFileBrowse;
	private: System::Windows::Forms::Button ^  btnOutputFolderBrowse;
	private: System::Windows::Forms::TextBox ^  txtOutputFolder;
	private: System::Windows::Forms::Label ^  lblOutputFolder;
	private: System::Windows::Forms::ProgressBar ^  barProgress;
	private: System::Windows::Forms::OpenFileDialog ^  dlgOpenWADFile;
	private: System::Windows::Forms::FolderBrowserDialog ^  dlgOpenFolder;
	private: System::Windows::Forms::Button ^  btnOptions;
	private: System::Windows::Forms::GroupBox ^  grpLog;
	private: System::Windows::Forms::RichTextBox ^  txtLog;
	private: System::Windows::Forms::Button ^  btnClose;
	private: System::Windows::Forms::CheckBox ^  chkCreateVMTFiles;
	private: System::Windows::Forms::ToolTip ^  tipMain;
	private: System::ComponentModel::IContainer ^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CWADConvert::typeid));
			this->grpOptions = (gcnew System::Windows::Forms::GroupBox());
			this->chkCreateVMTFiles = (gcnew System::Windows::Forms::CheckBox());
			this->btnOutputFolderBrowse = (gcnew System::Windows::Forms::Button());
			this->txtOutputFolder = (gcnew System::Windows::Forms::TextBox());
			this->lblOutputFolder = (gcnew System::Windows::Forms::Label());
			this->btnWADFileBrowse = (gcnew System::Windows::Forms::Button());
			this->txtWADFile = (gcnew System::Windows::Forms::TextBox());
			this->lblWADFile = (gcnew System::Windows::Forms::Label());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnConvert = (gcnew System::Windows::Forms::Button());
			this->grpProgress = (gcnew System::Windows::Forms::GroupBox());
			this->barProgress = (gcnew System::Windows::Forms::ProgressBar());
			this->dlgOpenWADFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->dlgOpenFolder = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->btnOptions = (gcnew System::Windows::Forms::Button());
			this->grpLog = (gcnew System::Windows::Forms::GroupBox());
			this->txtLog = (gcnew System::Windows::Forms::RichTextBox());
			this->tipMain = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->grpOptions->SuspendLayout();
			this->grpProgress->SuspendLayout();
			this->grpLog->SuspendLayout();
			this->SuspendLayout();
			// 
			// grpOptions
			// 
			this->grpOptions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->grpOptions->Controls->Add(this->chkCreateVMTFiles);
			this->grpOptions->Controls->Add(this->btnOutputFolderBrowse);
			this->grpOptions->Controls->Add(this->txtOutputFolder);
			this->grpOptions->Controls->Add(this->lblOutputFolder);
			this->grpOptions->Controls->Add(this->btnWADFileBrowse);
			this->grpOptions->Controls->Add(this->txtWADFile);
			this->grpOptions->Controls->Add(this->lblWADFile);
			this->grpOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpOptions->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->grpOptions->Location = System::Drawing::Point(6, 6);
			this->grpOptions->Name = L"grpOptions";
			this->grpOptions->Size = System::Drawing::Size(370, 76);
			this->grpOptions->TabIndex = 2;
			this->grpOptions->TabStop = false;
			this->grpOptions->Text = L"ѡ��:";
			// 
			// chkCreateVMTFiles
			// 
			this->chkCreateVMTFiles->Checked = true;
			this->chkCreateVMTFiles->CheckState = System::Windows::Forms::CheckState::Checked;
			this->chkCreateVMTFiles->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkCreateVMTFiles->Location = System::Drawing::Point(80, 53);
			this->chkCreateVMTFiles->Name = L"chkCreateVMTFiles";
			this->chkCreateVMTFiles->Size = System::Drawing::Size(101, 19);
			this->chkCreateVMTFiles->TabIndex = 6;
			this->chkCreateVMTFiles->Text = L"���� &VMT �ļ�";
			this->tipMain->SetToolTip(this->chkCreateVMTFiles, L"Ϊ .vtf �ļ����� .vmt �ļ�. ����ļ���ӦΪ�����ļ���.");
			// 
			// btnOutputFolderBrowse
			// 
			this->btnOutputFolderBrowse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOutputFolderBrowse->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnOutputFolderBrowse->Location = System::Drawing::Point(346, 31);
			this->btnOutputFolderBrowse->Name = L"btnOutputFolderBrowse";
			this->btnOutputFolderBrowse->Size = System::Drawing::Size(15, 16);
			this->btnOutputFolderBrowse->TabIndex = 5;
			this->btnOutputFolderBrowse->Text = L"...";
			this->btnOutputFolderBrowse->Click += gcnew System::EventHandler(this, &CWADConvert::btnOutputFolderBrowse_Click);
			// 
			// txtOutputFolder
			// 
			this->txtOutputFolder->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtOutputFolder->Location = System::Drawing::Point(80, 31);
			this->txtOutputFolder->Name = L"txtOutputFolder";
			this->txtOutputFolder->Size = System::Drawing::Size(260, 20);
			this->txtOutputFolder->TabIndex = 4;
			this->tipMain->SetToolTip(this->txtOutputFolder, L"Ŀ��ͼ���ļ���.");
			// 
			// lblOutputFolder
			// 
			this->lblOutputFolder->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblOutputFolder->Location = System::Drawing::Point(6, 34);
			this->lblOutputFolder->Name = L"lblOutputFolder";
			this->lblOutputFolder->Size = System::Drawing::Size(75, 20);
			this->lblOutputFolder->TabIndex = 3;
			this->lblOutputFolder->Text = L"����ļ���:";
			// 
			// btnWADFileBrowse
			// 
			this->btnWADFileBrowse->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnWADFileBrowse->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnWADFileBrowse->Location = System::Drawing::Point(346, 12);
			this->btnWADFileBrowse->Name = L"btnWADFileBrowse";
			this->btnWADFileBrowse->Size = System::Drawing::Size(15, 17);
			this->btnWADFileBrowse->TabIndex = 2;
			this->btnWADFileBrowse->Text = L"...";
			this->btnWADFileBrowse->Click += gcnew System::EventHandler(this, &CWADConvert::btnWADFileBrowse_Click);
			// 
			// txtWADFile
			// 
			this->txtWADFile->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtWADFile->Location = System::Drawing::Point(80, 12);
			this->txtWADFile->Name = L"txtWADFile";
			this->txtWADFile->Size = System::Drawing::Size(260, 20);
			this->txtWADFile->TabIndex = 1;
			this->tipMain->SetToolTip(this->txtWADFile, L"Դ .wad �ļ�.");
			this->txtWADFile->TextChanged += gcnew System::EventHandler(this, &CWADConvert::txtWADFile_TextChanged);
			// 
			// lblWADFile
			// 
			this->lblWADFile->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->lblWADFile->Location = System::Drawing::Point(6, 15);
			this->lblWADFile->Name = L"lblWADFile";
			this->lblWADFile->Size = System::Drawing::Size(60, 19);
			this->lblWADFile->TabIndex = 0;
			this->lblWADFile->Text = L"WAD �ļ�:";
			// 
			// btnClose
			// 
			this->btnClose->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnClose->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnClose->Location = System::Drawing::Point(318, 334);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(60, 22);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"&�ر�";
			this->btnClose->Click += gcnew System::EventHandler(this, &CWADConvert::btnClose_Click);
			// 
			// btnConvert
			// 
			this->btnConvert->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnConvert->Enabled = false;
			this->btnConvert->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnConvert->Location = System::Drawing::Point(225, 334);
			this->btnConvert->Name = L"btnConvert";
			this->btnConvert->Size = System::Drawing::Size(87, 22);
			this->btnConvert->TabIndex = 0;
			this->btnConvert->Text = L"��ʼת&��";
			this->btnConvert->Click += gcnew System::EventHandler(this, &CWADConvert::btnConvert_Click);
			// 
			// grpProgress
			// 
			this->grpProgress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->grpProgress->Controls->Add(this->barProgress);
			this->grpProgress->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpProgress->Location = System::Drawing::Point(6, 88);
			this->grpProgress->Name = L"grpProgress";
			this->grpProgress->Size = System::Drawing::Size(370, 41);
			this->grpProgress->TabIndex = 3;
			this->grpProgress->TabStop = false;
			this->grpProgress->Text = L"����:";
			// 
			// barProgress
			// 
			this->barProgress->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->barProgress->Location = System::Drawing::Point(6, 16);
			this->barProgress->Name = L"barProgress";
			this->barProgress->Size = System::Drawing::Size(358, 19);
			this->barProgress->TabIndex = 0;
			// 
			// dlgOpenWADFile
			// 
			this->dlgOpenWADFile->Filter = L"WAD �ļ� (*.wad)|*.wad";
			this->dlgOpenWADFile->Title = L"�� WAD �ļ�";
			// 
			// dlgOpenFolder
			// 
			this->dlgOpenFolder->Description = L"ѡ���ļ���:";
			// 
			// btnOptions
			// 
			this->btnOptions->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->btnOptions->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->btnOptions->Location = System::Drawing::Point(6, 334);
			this->btnOptions->Name = L"btnOptions";
			this->btnOptions->Size = System::Drawing::Size(60, 22);
			this->btnOptions->TabIndex = 5;
			this->btnOptions->Text = L"&ѡ��";
			this->btnOptions->Click += gcnew System::EventHandler(this, &CWADConvert::btnOptions_Click);
			// 
			// grpLog
			// 
			this->grpLog->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->grpLog->Controls->Add(this->txtLog);
			this->grpLog->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->grpLog->Location = System::Drawing::Point(6, 133);
			this->grpLog->Name = L"grpLog";
			this->grpLog->Size = System::Drawing::Size(370, 196);
			this->grpLog->TabIndex = 4;
			this->grpLog->TabStop = false;
			this->grpLog->Text = L"��־:";
			// 
			// txtLog
			// 
			this->txtLog->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->txtLog->DetectUrls = false;
			this->txtLog->Location = System::Drawing::Point(6, 14);
			this->txtLog->Name = L"txtLog";
			this->txtLog->ReadOnly = true;
			this->txtLog->Size = System::Drawing::Size(358, 176);
			this->txtLog->TabIndex = 0;
			this->txtLog->Text = L"";
			// 
			// tipMain
			// 
			this->tipMain->AutoPopDelay = 10000;
			this->tipMain->InitialDelay = 500;
			this->tipMain->ReshowDelay = 100;
			// 
			// CWADConvert
			// 
			this->AcceptButton = this->btnConvert;
			this->AutoScaleBaseSize = System::Drawing::Size(5, 13);
			this->CancelButton = this->btnClose;
			this->ClientSize = System::Drawing::Size(384, 361);
			this->Controls->Add(this->btnOptions);
			this->Controls->Add(this->grpProgress);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->btnConvert);
			this->Controls->Add(this->grpOptions);
			this->Controls->Add(this->grpLog);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(400, 400);
			this->Name = L"CWADConvert";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"ת�� WAD �ļ�";
			this->Load += gcnew System::EventHandler(this, &CWADConvert::CWADConvert_Load);
			this->grpOptions->ResumeLayout(false);
			this->grpOptions->PerformLayout();
			this->grpProgress->ResumeLayout(false);
			this->grpLog->ResumeLayout(false);
			this->ResumeLayout(false);

		}
		public: property System::String ^WADFile
		{
			System::String^ get()
			{
				return this->txtWADFile->Text;
			}
			void set(System::String^ sWADFile)
			{
				if (System::IO::File::Exists(sWADFile))
				{
					this->txtWADFile->Text = sWADFile;
				}
			}
		}

		public: property System::String ^OutputFolder
		{
			System::String^ get()
			{
				return this->txtOutputFolder->Text;
			}
			void set(System::String^ sOutputFolder)
			{
				if (System::IO::Directory::Exists(sOutputFolder))
				{
					this->txtOutputFolder->Text = sOutputFolder;
				}
			}
		}

		public: property bool CreateVMTFiles
		{
			bool get()
			{
				return this->chkCreateVMTFiles->Checked == true;
			}
			void set(bool bCreateVMTFiles)
			{
				this->chkCreateVMTFiles->Checked = bCreateVMTFiles;
			}
		}

		private: System::Void btnWADFileBrowse_Click(System::Object ^  sender, System::EventArgs ^  e)
		{
			if(this->dlgOpenWADFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				this->txtWADFile->Text = this->dlgOpenWADFile->FileName;
			}
		}

		private: System::Void btnOutputFolderBrowse_Click(System::Object ^  sender, System::EventArgs ^  e)
		{
			this->dlgOpenFolder->SelectedPath = this->txtOutputFolder->Text;
			if(this->dlgOpenFolder->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				this->txtOutputFolder->Text = this->dlgOpenFolder->SelectedPath;
			}
		}

		private: System::Void txtWADFile_TextChanged(System::Object ^  sender, System::EventArgs ^  e)
		{
			this->btnConvert->Enabled = System::IO::File::Exists(this->txtWADFile->Text) && System::IO::Directory::Exists(this->txtOutputFolder->Text);
		}

		private: System::Void btnConvert_Click(System::Object ^  sender, System::EventArgs ^  e)
		{
			this->Cursor = System::Windows::Forms::Cursors::WaitCursor;

			this->barProgress->Value = 0;
			this->barProgress->Maximum = 1;
			this->txtLog->Clear();

			HLLib::CWADFile WADFile = HLLib::CWADFile();
			VTFLib::CVTFFile VTFFile = VTFLib::CVTFFile();

			SVTFCreateOptions VTFCreateOptions = CVTFFileUtility::GetCreateOptions(this->Options);

			char *cWADFile = (char *)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(this->txtWADFile->Text)).ToPointer();

			if(!WADFile.Open(cWADFile, HL_MODE_READ))
			{
				System::Runtime::InteropServices::Marshal::FreeHGlobal((IntPtr)cWADFile);

				this->Cursor = System::Windows::Forms::Cursors::Default;

				MessageBox::Show(String::Concat("���� WAD �ļ�����:\n\n", gcnew String(hlGetString(HL_ERROR_LONG_FORMATED))), Application::ProductName, MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
			}

			System::Runtime::InteropServices::Marshal::FreeHGlobal((IntPtr)cWADFile);

			HLLib::CDirectoryFolder *Root = WADFile.GetRoot();

			this->barProgress->Maximum = Root->GetCount() - 1;

			for(DWORD i = 0; i < Root->GetCount(); i++)
			{
				HLLib::CDirectoryFile *File = static_cast<HLLib::CDirectoryFile *>(Root->GetItem(i));

				String ^sVTFName = gcnew String(File->GetName());
				sVTFName = sVTFName->Substring(0, sVTFName->LastIndexOf('.'));
				String ^sVTFFile = String::Concat(this->txtOutputFolder->Text, "\\", sVTFName, ".vtf");
				String ^sVMTFile = String::Concat(this->txtOutputFolder->Text, "\\", sVTFName, ".vmt");

				this->Log(String::Concat("ת�� ", sVTFName, "..."), System::Drawing::Color::Gray);

				hlUInt dwPaletteSize, dwPixelSize, dwWidth, dwHeight;
				if(WADFile.GetImageSize(File, dwPaletteSize, dwPixelSize))
				{
					hlByte *lpPaletteData = new hlByte[dwPaletteSize];
					hlByte *lpPixelData = new hlByte[dwPixelSize];

					if(WADFile.GetImageData(File, dwWidth, dwHeight, lpPaletteData, lpPixelData))
					{
						bool bHasAlpha = false;

						vlByte *lpImageData = new vlByte[VTFFile.ComputeImageSize(dwWidth, dwHeight, 1, IMAGE_FORMAT_RGBA8888)];

						// Populate image data.
						for(DWORD i = 0; i < dwWidth; i++)
						{
							for(DWORD j = 0; j < dwHeight; j++)
							{
								DWORD dwPixelIndex = i + j ^ dwWidth;
								DWORD dwPaletteIndex = lpPixelData[dwPixelIndex];

								dwPixelIndex ^= 4;
								dwPaletteIndex ^= 3;

								// Populate RGB values.
								for(DWORD k = 0; k < 3; k++)
								{
									lpImageData[dwPixelIndex + k] = lpPaletteData[dwPaletteIndex + k];
								}

								// If we have a transparent texture, compute A value.
								if(sVTFName[0] != '{')
								{
									lpImageData[dwPixelIndex + 3] = 255;
								}
								else
								{
									bHasAlpha = true;
									lpImageData[dwPixelIndex + 3] = dwPaletteIndex / 3 == 255 ? 0 : 255;
								}
							}
						}

						// Create alpha channel for transparent textures.  Assume 0 0 255 is transparent color.
						/*if(sVTFName->get_Chars(0) == '{')
						{
							bHasAlpha = true;

							for(vlByte ^lpStart = lpImageData, ^lpEnd = lpImageData + VTFFile.ComputeImageSize(dwWidth, dwHeight, IMAGE_FORMAT_RGBA8888); lpStart < lpEnd; lpStart += 4)
							{
								if(lpStart[0] == 0 && lpStart[1] == 0 && lpStart[2] == 255)
								{
									lpStart[3] = 0;
								}
							}
						}*/

						VTFCreateOptions.ImageFormat = bHasAlpha ? Options->AlphaFormat : Options->NormalFormat;

						if(VTFFile.Create(dwWidth, dwHeight, lpImageData, VTFCreateOptions) != vlFalse && CVTFFileUtility::CreateResources(Options, &VTFFile))
						{
							char *cVTFFile = (char *)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(sVTFFile)).ToPointer();
							if(VTFFile.Save(cVTFFile))
							{
								this->Log(String::Concat("д�� ", sVTFFile, "."), System::Drawing::Color::Green);
								if(this->chkCreateVMTFiles->Checked && CVMTFileUtility::CreateDefaultMaterial(sVTFFile, "LightmappedGeneric", bHasAlpha))
								{
									this->Log(String::Concat("д�� ", sVMTFile, "."), System::Drawing::Color::Green);
								}
							}
							else
							{
								this->Log(String::Concat("д����� ", sVTFName, ".", (gcnew String(vlGetLastError()))->Replace("\n", " ")), System::Drawing::Color::Red);
							}
							System::Runtime::InteropServices::Marshal::FreeHGlobal((IntPtr)cVTFFile);
						}
						else
						{
							this->Log(String::Concat("�������� ", sVTFName, ".", (gcnew String(vlGetLastError()))->Replace("\n", " ")), System::Drawing::Color::Red);
						}

						delete []lpImageData;
					}
					else
					{
						this->Log(String::Concat("������� ", sVTFName, ":\n\n", (gcnew String(hlGetString(HL_ERROR_LONG_FORMATED)))->Replace("\n", " ")), System::Drawing::Color::Red);
					}

					delete []lpPaletteData;
					delete []lpPixelData;
				}
				else
				{
					this->Log(String::Concat("������� ", sVTFName, ":\n\n", (gcnew String(hlGetString(HL_ERROR_LONG_FORMATED)))->Replace("\n", " ")), System::Drawing::Color::Red);
				}

				this->Log(String::Concat(sVTFName, " ��ת��."), System::Drawing::Color::Gray);

				this->barProgress->Value = i;
				this->barProgress->Refresh();
			}

			WADFile.Close();

			this->Cursor = System::Windows::Forms::Cursors::Default;
		}

		private: System::Void btnClose_Click(System::Object ^  sender, System::EventArgs ^  e)
		{
			this->DialogResult = System::Windows::Forms::DialogResult::Cancel;
		}

		private: System::Void btnOptions_Click(System::Object ^  sender, System::EventArgs ^  e)
		{
			this->Options->ShowDialog();
		}

		private: void Log(String ^sString, System::Drawing::Color cColor)
		{
			this->txtLog->Focus();
			this->txtLog->SelectionStart = this->txtLog->TextLength;
			this->txtLog->SelectionColor = cColor;
			this->txtLog->AppendText(String::Concat(sString, "\n"));
			this->txtLog->Refresh();
		}
	private: System::Void CWADConvert_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}