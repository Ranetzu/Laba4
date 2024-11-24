#include "MyForm.h"
#include "Windows.h"

using namespace Project21;
using namespace System; 
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project21::MyForm form; 
	Application::Run(% form);
}