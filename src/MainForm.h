#pragma once


namespace Font2Image {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Form1 摘要
	///
	/// 警告: 如果更改此类的名称，则需要更改
	///          与此类所依赖的所有 .resx 文件关联的托管资源编译器工具的
	///          “资源文件名”属性。否则，
	///          设计器将不能与此窗体的关联
	///          本地化资源正确交互。
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  ExportButton;

	private: System::Windows::Forms::Button^  FontButton;
	private: System::Windows::Forms::Button^  FrontColorButton;
	private: System::Windows::Forms::Button^  BackColorButton;
	private: System::Windows::Forms::Label^  PreviewLabel;
	private: System::Windows::Forms::RadioButton^  CharRangeButton;
	private: System::Windows::Forms::RadioButton^  CharAnyButton;
	private: System::Windows::Forms::TextBox^  CharMinEdit;
	private: System::Windows::Forms::TextBox^  CharMaxEdit;
	private: System::Windows::Forms::TextBox^  CharAnyEdit;
	private: System::Windows::Forms::GroupBox^  ContentGroup;
	private: System::Windows::Forms::GroupBox^  StyleGroup;

	private: System::Windows::Forms::CheckBox^  AntialiasButton;

	private: System::Windows::Forms::StatusStrip^  StatusBar;
	private: System::Windows::Forms::ToolStripProgressBar^  StatusProcessBar;
	private: System::Windows::Forms::FontDialog^  FontSelectDlg;
	private: System::Windows::Forms::ColorDialog^  ColorSelectDlg;
	private: System::Windows::Forms::FolderBrowserDialog^  FolderSelectDlg;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  ReverseColorButton;


	protected: 

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->ExportButton = (gcnew System::Windows::Forms::Button());
			this->FontButton = (gcnew System::Windows::Forms::Button());
			this->FrontColorButton = (gcnew System::Windows::Forms::Button());
			this->BackColorButton = (gcnew System::Windows::Forms::Button());
			this->PreviewLabel = (gcnew System::Windows::Forms::Label());
			this->CharRangeButton = (gcnew System::Windows::Forms::RadioButton());
			this->CharAnyButton = (gcnew System::Windows::Forms::RadioButton());
			this->CharMinEdit = (gcnew System::Windows::Forms::TextBox());
			this->CharMaxEdit = (gcnew System::Windows::Forms::TextBox());
			this->CharAnyEdit = (gcnew System::Windows::Forms::TextBox());
			this->ContentGroup = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->StyleGroup = (gcnew System::Windows::Forms::GroupBox());
			this->ReverseColorButton = (gcnew System::Windows::Forms::CheckBox());
			this->AntialiasButton = (gcnew System::Windows::Forms::CheckBox());
			this->StatusBar = (gcnew System::Windows::Forms::StatusStrip());
			this->StatusProcessBar = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->FontSelectDlg = (gcnew System::Windows::Forms::FontDialog());
			this->ColorSelectDlg = (gcnew System::Windows::Forms::ColorDialog());
			this->FolderSelectDlg = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->ContentGroup->SuspendLayout();
			this->StyleGroup->SuspendLayout();
			this->StatusBar->SuspendLayout();
			this->SuspendLayout();
			// 
			// ExportButton
			// 
			this->ExportButton->Location = System::Drawing::Point(413, 311);
			this->ExportButton->Name = L"ExportButton";
			this->ExportButton->Size = System::Drawing::Size(90, 23);
			this->ExportButton->TabIndex = 0;
			this->ExportButton->Text = L"&Export...";
			this->ExportButton->UseVisualStyleBackColor = true;
			this->ExportButton->Click += gcnew System::EventHandler(this, &Form1::ExportButton_Click);
			// 
			// FontButton
			// 
			this->FontButton->Location = System::Drawing::Point(11, 20);
			this->FontButton->Name = L"FontButton";
			this->FontButton->Size = System::Drawing::Size(90, 23);
			this->FontButton->TabIndex = 2;
			this->FontButton->Text = L"Font";
			this->FontButton->UseVisualStyleBackColor = true;
			this->FontButton->Click += gcnew System::EventHandler(this, &Form1::FontButton_Click);
			// 
			// FrontColorButton
			// 
			this->FrontColorButton->Location = System::Drawing::Point(11, 63);
			this->FrontColorButton->Name = L"FrontColorButton";
			this->FrontColorButton->Size = System::Drawing::Size(90, 23);
			this->FrontColorButton->TabIndex = 3;
			this->FrontColorButton->Text = L"Front Color";
			this->FrontColorButton->UseVisualStyleBackColor = true;
			this->FrontColorButton->Click += gcnew System::EventHandler(this, &Form1::FrontColorButton_Click);
			// 
			// BackColorButton
			// 
			this->BackColorButton->Location = System::Drawing::Point(11, 105);
			this->BackColorButton->Name = L"BackColorButton";
			this->BackColorButton->Size = System::Drawing::Size(90, 23);
			this->BackColorButton->TabIndex = 4;
			this->BackColorButton->Text = L"Back Color";
			this->BackColorButton->UseVisualStyleBackColor = true;
			this->BackColorButton->Click += gcnew System::EventHandler(this, &Form1::BackColorButton_Click);
			// 
			// PreviewLabel
			// 
			this->PreviewLabel->BackColor = System::Drawing::Color::White;
			this->PreviewLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PreviewLabel->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(134)));
			this->PreviewLabel->ForeColor = System::Drawing::Color::Black;
			this->PreviewLabel->Location = System::Drawing::Point(12, 234);
			this->PreviewLabel->Name = L"PreviewLabel";
			this->PreviewLabel->Size = System::Drawing::Size(344, 100);
			this->PreviewLabel->TabIndex = 5;
			this->PreviewLabel->Text = L"The quick brown fox jumped over the LAZY camel.1234567890";
			this->PreviewLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CharRangeButton
			// 
			this->CharRangeButton->AutoSize = true;
			this->CharRangeButton->Checked = true;
			this->CharRangeButton->Location = System::Drawing::Point(6, 20);
			this->CharRangeButton->Name = L"CharRangeButton";
			this->CharRangeButton->Size = System::Drawing::Size(149, 16);
			this->CharRangeButton->TabIndex = 6;
			this->CharRangeButton->TabStop = true;
			this->CharRangeButton->Text = L"Range(Unicode in HEX)";
			this->CharRangeButton->UseVisualStyleBackColor = true;
			this->CharRangeButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::CharRangeOnChecked);
			// 
			// CharAnyButton
			// 
			this->CharAnyButton->AutoSize = true;
			this->CharAnyButton->Location = System::Drawing::Point(6, 83);
			this->CharAnyButton->Name = L"CharAnyButton";
			this->CharAnyButton->Size = System::Drawing::Size(71, 16);
			this->CharAnyButton->TabIndex = 7;
			this->CharAnyButton->Text = L"Any Text";
			this->CharAnyButton->UseVisualStyleBackColor = true;
			this->CharAnyButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::CharAnyOnChecked);
			// 
			// CharMinEdit
			// 
			this->CharMinEdit->Location = System::Drawing::Point(39, 42);
			this->CharMinEdit->Name = L"CharMinEdit";
			this->CharMinEdit->Size = System::Drawing::Size(50, 21);
			this->CharMinEdit->TabIndex = 8;
			this->CharMinEdit->Text = L"0020";
			// 
			// CharMaxEdit
			// 
			this->CharMaxEdit->Location = System::Drawing::Point(126, 42);
			this->CharMaxEdit->Name = L"CharMaxEdit";
			this->CharMaxEdit->Size = System::Drawing::Size(50, 21);
			this->CharMaxEdit->TabIndex = 9;
			this->CharMaxEdit->Text = L"007E";
			// 
			// CharAnyEdit
			// 
			this->CharAnyEdit->Enabled = false;
			this->CharAnyEdit->Location = System::Drawing::Point(24, 105);
			this->CharAnyEdit->Multiline = true;
			this->CharAnyEdit->Name = L"CharAnyEdit";
			this->CharAnyEdit->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->CharAnyEdit->Size = System::Drawing::Size(302, 86);
			this->CharAnyEdit->TabIndex = 10;
			// 
			// ContentGroup
			// 
			this->ContentGroup->Controls->Add(this->label2);
			this->ContentGroup->Controls->Add(this->label1);
			this->ContentGroup->Controls->Add(this->CharAnyEdit);
			this->ContentGroup->Controls->Add(this->CharRangeButton);
			this->ContentGroup->Controls->Add(this->CharMinEdit);
			this->ContentGroup->Controls->Add(this->CharMaxEdit);
			this->ContentGroup->Controls->Add(this->CharAnyButton);
			this->ContentGroup->Location = System::Drawing::Point(14, 12);
			this->ContentGroup->Name = L"ContentGroup";
			this->ContentGroup->Size = System::Drawing::Size(342, 205);
			this->ContentGroup->TabIndex = 11;
			this->ContentGroup->TabStop = false;
			this->ContentGroup->Text = L"Content";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 45);
			this->label2->Margin = System::Windows::Forms::Padding(0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(17, 12);
			this->label2->TabIndex = 12;
			this->label2->Text = L"0x";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(97, 45);
			this->label1->Margin = System::Windows::Forms::Padding(0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 11;
			this->label1->Text = L"- 0x";
			// 
			// StyleGroup
			// 
			this->StyleGroup->Controls->Add(this->ReverseColorButton);
			this->StyleGroup->Controls->Add(this->AntialiasButton);
			this->StyleGroup->Controls->Add(this->FontButton);
			this->StyleGroup->Controls->Add(this->FrontColorButton);
			this->StyleGroup->Controls->Add(this->BackColorButton);
			this->StyleGroup->Location = System::Drawing::Point(378, 12);
			this->StyleGroup->Name = L"StyleGroup";
			this->StyleGroup->Size = System::Drawing::Size(125, 205);
			this->StyleGroup->TabIndex = 12;
			this->StyleGroup->TabStop = false;
			this->StyleGroup->Text = L"Style";
			// 
			// ReverseColorButton
			// 
			this->ReverseColorButton->AutoSize = true;
			this->ReverseColorButton->Location = System::Drawing::Point(11, 152);
			this->ReverseColorButton->Name = L"ReverseColorButton";
			this->ReverseColorButton->Size = System::Drawing::Size(108, 16);
			this->ReverseColorButton->TabIndex = 6;
			this->ReverseColorButton->Text = L"Exchange Color";
			this->ReverseColorButton->UseVisualStyleBackColor = true;
			this->ReverseColorButton->CheckedChanged += gcnew System::EventHandler(this, &Form1::ReverseColorButton_CheckedChanged);
			// 
			// AntialiasButton
			// 
			this->AntialiasButton->AutoSize = true;
			this->AntialiasButton->Checked = true;
			this->AntialiasButton->CheckState = System::Windows::Forms::CheckState::Checked;
			this->AntialiasButton->Location = System::Drawing::Point(11, 174);
			this->AntialiasButton->Name = L"AntialiasButton";
			this->AntialiasButton->Size = System::Drawing::Size(78, 16);
			this->AntialiasButton->TabIndex = 5;
			this->AntialiasButton->Text = L"Antialias";
			this->AntialiasButton->UseVisualStyleBackColor = true;
			// 
			// StatusBar
			// 
			this->StatusBar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->StatusProcessBar});
			this->StatusBar->Location = System::Drawing::Point(0, 343);
			this->StatusBar->Name = L"StatusBar";
			this->StatusBar->Size = System::Drawing::Size(515, 22);
			this->StatusBar->SizingGrip = false;
			this->StatusBar->TabIndex = 13;
			this->StatusBar->Text = L"Status Bar";
			// 
			// StatusProcessBar
			// 
			this->StatusProcessBar->Name = L"StatusProcessBar";
			this->StatusProcessBar->Size = System::Drawing::Size(100, 16);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(515, 365);
			this->Controls->Add(this->StatusBar);
			this->Controls->Add(this->StyleGroup);
			this->Controls->Add(this->ContentGroup);
			this->Controls->Add(this->PreviewLabel);
			this->Controls->Add(this->ExportButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Text = L"Font2Image v0.2 [Flynn]";
			this->ContentGroup->ResumeLayout(false);
			this->ContentGroup->PerformLayout();
			this->StyleGroup->ResumeLayout(false);
			this->StyleGroup->PerformLayout();
			this->StatusBar->ResumeLayout(false);
			this->StatusBar->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Drawing::SizeF StrSize(System::String ^s, System::Drawing::Font ^font)
		{
			System::Drawing::SizeF size;
			System::Drawing::Bitmap ^bmp; 
			System::Drawing::Graphics ^graphics;

			bmp = gcnew System::Drawing::Bitmap(1, 1, System::Drawing::Imaging::PixelFormat::Format32bppArgb);
			graphics = System::Drawing::Graphics::FromImage(bmp);
			size = graphics->MeasureString(s, font);

			delete graphics;
			delete bmp;

			return size;
		}

		bool IsBitsEmpty(System::Drawing::Bitmap ^bmp, int x)
		{
			int y = 0;
			for (y = 0; y < bmp->Height ; y++)
            {
				if (0 != bmp->GetPixel(x, y).A)
                    return false;
            }
			return true;
		}

		System::Drawing::Bitmap ^StripBitmap(System::Drawing::Bitmap ^bmp)
		{
			System::Drawing::Bitmap ^new_bmp;
			System::Drawing::Graphics ^graphics;
			int new_left = 0;
			int new_right = bmp->Width - 1;
			int new_width;

			while ((new_left < new_right) && IsBitsEmpty(bmp, new_left))
				new_left++;

			while ((new_right > new_left) && IsBitsEmpty(bmp, new_right))
				new_right--;

			if (new_left == new_right)
				return (gcnew System::Drawing::Bitmap(bmp));

			new_left = Math::Max(new_left - 1, 0);
			new_right = Math::Min(new_right + 1, bmp->Width - 1);

			new_width = new_right - new_left + 1;
			new_bmp = gcnew System::Drawing::Bitmap(new_width, bmp->Height, bmp->PixelFormat);

			graphics = System::Drawing::Graphics::FromImage(new_bmp);
			//graphics->CompositingMode = System::Drawing::Drawing2D::CompositingMode::SourceCopy;
			graphics->Clear(PreviewLabel->BackColor);
			graphics->DrawImage(bmp, 0, 0,
					System::Drawing::Rectangle(new_left, 0, new_width, bmp->Height),
					System::Drawing::GraphicsUnit::Pixel);
            graphics->Flush();

			delete graphics;

			return new_bmp;
		}

		System::Drawing::Bitmap ^Str2Bitmap(System::String ^s)
		{
			System::Drawing::SizeF size;
			System::Drawing::Bitmap ^bmp;
			System::Drawing::Bitmap ^strip_bmp;
			System::Drawing::Graphics ^graphics;
			System::Drawing::Brush ^brush;
			int width = 0, height = 0;
			
			size = StrSize(s, PreviewLabel->Font);
			width = (int)System::Math::Ceiling(size.Width);
			height = (int)System::Math::Ceiling(size.Height);
			bmp = gcnew System::Drawing::Bitmap(width, height, System::Drawing::Imaging::PixelFormat::Format32bppArgb);
			
			brush = gcnew System::Drawing::SolidBrush(PreviewLabel->ForeColor);
			graphics = System::Drawing::Graphics::FromImage(bmp);

			graphics->TextRenderingHint = ((AntialiasButton->Checked) ?
				System::Drawing::Text::TextRenderingHint::AntiAliasGridFit :
				System::Drawing::Text::TextRenderingHint::SingleBitPerPixelGridFit);
			graphics->Clear(System::Drawing::Color::Transparent);
			graphics->DrawString(s, PreviewLabel->Font, brush, 0, 0);
			graphics->Flush();
			//System::Windows::Forms::MessageBox::Show(size.Width.ToString() + ", h =" + size.Height.ToString());

			delete graphics;
			delete brush;

			strip_bmp = StripBitmap(bmp);
			delete bmp;

			return strip_bmp;
		}

		System::String ^StripDupliChars(System::String ^str)
		{
			int i = 0;
			System::String ^new_str = gcnew System::String(L"");

			for (i = 0; i < str->Length; i++)
				if (!new_str->Contains(str[i].ToString()))
					new_str += str[i];

			return new_str;
		}

		System::Void ExportAny(System::String ^dpath)
		{
			System::Drawing::Bitmap ^bmp;
			System::String ^str = CharAnyEdit->Text;
			int i = 0;

			if (System::String::IsNullOrEmpty(str))
			{
				System::Windows::Forms::MessageBox::Show(L"Content can't be null.");
				return;
			}

			str = StripDupliChars(str);

			StatusProcessBar->Maximum = str->Length;
			StatusProcessBar->Step = 1;

			for (i = 0; i < str->Length; i++)
			{
				if (!System::Char::IsControl(str[i]))
				{
					bmp = Str2Bitmap(str[i].ToString());
					bmp->Save(dpath + "\\0x" + ((int)(str[i])).ToString("X4") + ".bmp", System::Drawing::Imaging::ImageFormat::Bmp);
					delete bmp;
				}

				StatusProcessBar->PerformStep();
			}
			
			StatusProcessBar->Value = 0;

			delete str;
		}

		System::Void ExportRange(System::String ^dpath)
		{
			System::Drawing::Bitmap ^bmp;
			int MinChar, MaxChar, tmp;
			System::Char ch;

			try {
				MinChar = int::Parse(CharMinEdit->Text, System::Globalization::NumberStyles::HexNumber);
				MaxChar = int::Parse(CharMaxEdit->Text, System::Globalization::NumberStyles::HexNumber);
			} catch(...) {
				System::Windows::Forms::MessageBox::Show(L"Make sure the unicode value is a HEX number.");
				return;
			}

			if (MaxChar < MinChar)
			{
				tmp = MinChar;
				MinChar = MaxChar;
				MaxChar = tmp;
			}

			if (!((MinChar > 0x001F && MaxChar < 0x007F) || MinChar > 0x9F))
				System::Windows::Forms::MessageBox::Show(L"注意：Unicode值为007F，或 0000-001F，0080-009F 范围内的字符为控制字符，会被忽略。");

			StatusProcessBar->Maximum = MaxChar - MinChar + 1;
			StatusProcessBar->Step = 1;

			for (ch = (char)MinChar; ch <= MaxChar; ch++)
			{
				if (!System::Char::IsControl(ch))
				{
					bmp = Str2Bitmap(ch.ToString());
					bmp->Save(dpath + "\\0x" + ((int)ch).ToString("X4") + ".bmp", System::Drawing::Imaging::ImageFormat::Bmp);
					delete bmp;
				}

				StatusProcessBar->PerformStep();
			}

			StatusProcessBar->Value = 0;
		}



	private: System::Void ExportButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (System::Windows::Forms::DialogResult::OK == FolderSelectDlg->ShowDialog())
				 {
					 if (CharRangeButton->Checked)
						ExportRange(FolderSelectDlg->SelectedPath);
					 else if(CharAnyButton->Checked)
						 ExportAny(FolderSelectDlg->SelectedPath);
					 else
						 System::Windows::Forms::MessageBox::Show(L"Please choose a way to get content");
				 }
			 }

	private: System::Void FontButton_Click(System::Object^  sender, System::EventArgs^  e) {
				 FontSelectDlg->Font = PreviewLabel->Font;
				 if (System::Windows::Forms::DialogResult::OK == FontSelectDlg->ShowDialog())
					 PreviewLabel->Font = FontSelectDlg->Font;
			 }

private: System::Void FrontColorButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ColorSelectDlg->Color = PreviewLabel->ForeColor;
			 if (System::Windows::Forms::DialogResult::OK == ColorSelectDlg->ShowDialog())
				 PreviewLabel->ForeColor = ColorSelectDlg->Color;
		 }

private: System::Void BackColorButton_Click(System::Object^  sender, System::EventArgs^  e) {
			 ColorSelectDlg->Color = PreviewLabel->BackColor;
			if (System::Windows::Forms::DialogResult::OK == ColorSelectDlg->ShowDialog())
				PreviewLabel->BackColor = ColorSelectDlg->Color;
		 }
private: System::Void CharRangeOnChecked(System::Object^  sender, System::EventArgs^  e) {
			 if (CharRangeButton->Checked)
			 {
				 CharMinEdit->Enabled = true;
				 CharMaxEdit->Enabled = true;
			 }
			 else
			 {
				 CharMinEdit->Enabled = false;
				 CharMaxEdit->Enabled = false;
			 }
		 }

private: System::Void CharAnyOnChecked(System::Object^  sender, System::EventArgs^  e) {
			 if (CharAnyButton->Checked)
				 CharAnyEdit->Enabled = true;
			 else
				CharAnyEdit->Enabled = false;
		 }

private: System::Void ReverseColorButton_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 System::Drawing::Color tmp;

			 tmp = PreviewLabel->ForeColor;
			 PreviewLabel->ForeColor = PreviewLabel->BackColor;
			 PreviewLabel->BackColor = tmp;
		 }
};
}

