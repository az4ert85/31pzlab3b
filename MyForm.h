#pragma once

namespace ExampleCPP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ ActionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ LoadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AddToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ UpdateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ DeleteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ AboutProgramToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ExitToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button_delete;

	private: System::Windows::Forms::Button^ button_update;

	private: System::Windows::Forms::Button^ button_add;

	private: System::Windows::Forms::Button^ button_download;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ surname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ fathername;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ group;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ math;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ english;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ softdev;

	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ActionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AboutProgramToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ExitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->LoadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->AddToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->UpdateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->DeleteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button_download = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->button_update = (gcnew System::Windows::Forms::Button());
			this->button_delete = (gcnew System::Windows::Forms::Button());
			this->surname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->fathername = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->math = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->english = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->softdev = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();



			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ActionToolStripMenuItem,
					this->AboutProgramToolStripMenuItem, this->ExitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(675, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";



			this->ActionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->LoadToolStripMenuItem,
					this->AddToolStripMenuItem, this->UpdateToolStripMenuItem, this->DeleteToolStripMenuItem
			});
			this->ActionToolStripMenuItem->Name = L"ActionToolStripMenuItem";
			this->ActionToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->ActionToolStripMenuItem->Text = L"Action";



			this->AboutProgramToolStripMenuItem->Name = L"AboutProgramToolStripMenuItem";
			this->AboutProgramToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->AboutProgramToolStripMenuItem->Text = L"About program";
			this->AboutProgramToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::AboutProgramToolStripMenuItem_Click);



			this->ExitToolStripMenuItem->Name = L"ExitToolStripMenuItem";
			this->ExitToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->ExitToolStripMenuItem->Text = L"Exit";
			this->ExitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);



			this->LoadToolStripMenuItem->Name = L"LoadToolStripMenuItem";
			this->LoadToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->LoadToolStripMenuItem->Text = L"Load";



			this->AddToolStripMenuItem->Name = L"AddToolStripMenuItem";
			this->AddToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->AddToolStripMenuItem->Text = L"Add";



			this->UpdateToolStripMenuItem->Name = L"UpdateToolStripMenuItem";
			this->UpdateToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->UpdateToolStripMenuItem->Text = L"Update";



			this->DeleteToolStripMenuItem->Name = L"DeleteToolStripMenuItem";
			this->DeleteToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->DeleteToolStripMenuItem->Text = L"Delete";



			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->surname, this->name,
					this->fathername, this->group,
						this->math, this->english, this->softdev
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 37);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(445, 213);
			this->dataGridView1->TabIndex = 1;



			this->groupBox1->Controls->Add(this->button_delete);
			this->groupBox1->Controls->Add(this->button_update);
			this->groupBox1->Controls->Add(this->button_add);
			this->groupBox1->Controls->Add(this->button_download);
			this->groupBox1->Location = System::Drawing::Point(481, 37);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(182, 213);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Action";



			this->button_download->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_download->Location = System::Drawing::Point(17, 30);
			this->button_download->Name = L"button_download";
			this->button_download->Size = System::Drawing::Size(140, 34);
			this->button_download->TabIndex = 0;
			this->button_download->Text = L"Load";
			this->button_download->UseVisualStyleBackColor = true;
			this->button_download->Click += gcnew System::EventHandler(this, &MyForm::button_download_Click);



			this->button_add->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_add->Location = System::Drawing::Point(17, 70);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(140, 34);
			this->button_add->TabIndex = 1;
			this->button_add->Text = L"Add";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &MyForm::button_add_Click);



			this->button_update->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_update->Location = System::Drawing::Point(17, 110);
			this->button_update->Name = L"button_update";
			this->button_update->Size = System::Drawing::Size(140, 34);
			this->button_update->TabIndex = 2;
			this->button_update->Text = L"Update";
			this->button_update->UseVisualStyleBackColor = true;
			this->button_update->Click += gcnew System::EventHandler(this, &MyForm::button_update_Click);



			this->button_delete->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_delete->Location = System::Drawing::Point(17, 150);
			this->button_delete->Name = L"button_delete";
			this->button_delete->Size = System::Drawing::Size(140, 34);
			this->button_delete->TabIndex = 3;
			this->button_delete->Text = L"Delete";
			this->button_delete->UseVisualStyleBackColor = true;
			this->button_delete->Click += gcnew System::EventHandler(this, &MyForm::button_delete_Click);



			this->surname->HeaderText = L"Surname";
			this->surname->Name = L"surname";

			this->name->HeaderText = L"Name";
			this->name->Name = L"name";

			this->fathername->HeaderText = L"Fathername";
			this->fathername->Name = L"fathername";

			this->group->HeaderText = L"Group";
			this->group->Name = L"group";

			this->math->HeaderText = L"Math";
			this->math->Name = L"math";

			this->english->HeaderText = L"English";
			this->english->Name = L"english";

			this->softdev->HeaderText = L"SoftDev";
			this->softdev->Name = L"softdev";



			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(675, 268);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(691, 307);
			this->MinimumSize = System::Drawing::Size(691, 307);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Working example WInForms c++ in ACCESS ";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void AboutProgramToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_download_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_add_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_update_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button_delete_Click(System::Object^ sender, System::EventArgs^ e);
	};
}