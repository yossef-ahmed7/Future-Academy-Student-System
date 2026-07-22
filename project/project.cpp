#include <iostream>
#include <string>
using namespace std;
class Computer_Science {
public :
	void CS_subject(int level, int semester) {
		if (level == 1 && semester == 1) {
			cout << " ------------------------------------------------\n ";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "English Language\n";
			cout << "Calculus\n";
			cout << "Physics\n";
			cout << "Computer Science Fundamental\n";
			cout << "Structured Programming\n";
			cout << "Humanities 1\n";

		}
		else if (level == 1 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Technical Writing\n";
			cout << "Human Rights and The Fight Against Corruption\n";
			cout << "Object Oriented Programming (OOP)\n";
			cout << "Electronics\n";
			cout << "Humanities 2\n";
			cout << "Discrete Mathematics\n";
		}
		else if (level == 2 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Introduction to Information Systems\n";
			cout << "Data Structures\n";
			cout << "Probability and Statistics and Statistical Analysis\n";
			cout << "Logic Design\n";
			cout << "Linear Algebra\n";
			cout << "Databases 1\n";
		}
		else if (level == 2 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Systems Analysis and Design 1\n";
			cout << "Introduction to Computer Networks\n";
			cout << "Design and Analysis of Algorithms\n";
			cout << "Differential Equations and Transformations\n";
			cout << "Computer Architecture\n";
		}
		else if (level == 3 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Advanced Computer Networks\n";
			cout << "Numerical Computing\n";
			cout << "Artificial Intelligence\n";
			cout << "Computer Graphics\n";
			cout << "Microprocessor and Assembly Language\n";
			cout << "Elective Subject 1\n";
		}
		else if (level == 3 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Operating Systems\n";
			cout << "Information Storage and Management\n";
			cout << "Neural Network\n";
			cout << "Image Processing\n";
			cout << "Software Engineering 1\n";
			cout << "Elective Subject 2\n";
		}
		else if (level == 4 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Computer Security\n";
			cout << "Compilers\n";
			cout << "Machine Learning\n";
			cout << "Elective Subject 3\n";
			cout << "Humanities 3\n";
			cout << "Project 1\n";
		}
		else if (level == 4 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Project 1\n";
			cout << "Internet of Things (IoT)\n";
			cout << "Cloud Computing\n";
			cout << "Elective Subject 4\n";
			cout << "Humanities 4\n";
			cout << "Project 2\n";
		}
	}
};
class Business_Information_Systems {
public:
	void BIS_subject(int level, int semester) {
		if (level == 1 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "مبادئ الاقتصاد\n";
			cout << "لغة أجنبية 1\n";
			cout << "مبادئ المحاسبة المالية\n";
			cout << "مبادئ إدارة أعمال\n";
			cout << "مبادئ القانون\n";
			cout << "\n--- (مقررات اختياريه (يختار الطالب مقرر واحد ---\n\n";
			cout << "مبادئ العلوم السياسيه\n";
			cout << "الهويه الوطنيه و انجازاتها\n";
		}
		else if (level == 1 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "التفكير الابتكاري\n";
			cout << "السلوك التنظيمي\n";
			cout << "طرق ومهارات الاتصال\n";
			cout << "رياضيات الأعمال \n";
			cout << "\n--- (مقررات اختياريه (يختار الطالب مقرر واحد ---\n\n";
			cout << "حقوق الإنسان\n";
			cout << "الانسان و عبقريه المكان\n";
		}
		else if (level == 2 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "مبادئ الاقتصاد الجزئي\n";
			cout << " اداره اللوجيستيات و سلاسل الامداد\n";
			cout << "مبادئ محاسبة التكاليف\n";
			cout << "مبادئ التسويق\n";
			cout << "القانون التجاري\n";
		}
		else if (level == 2 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "تحليلات الأعمال\n";
			cout << "مبادئ المحاسبة الإدارية\n";
			cout << "لغة أجنبية 2\n";
			cout << "مبادئ الانتاج و العمليات\n";
			cout << "مبادئ الإدارة المالية\n";
			cout << "نظم المعلومات الإدارية\n";
		}
		else if (level == 3 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "تصميم وبرمجة الحاسب الآلي\n";
			cout << "قواعد البيانات\n";
			cout << "مبادئ الاقتصاد الكلي\n";
			cout << "مبادئ الاستثمار\n";
			cout << "إدارة الموارد البشرية\n";
			cout << "\n--- (مقررات اختياريه (يختار الطالب مقرر واحد ---\n\n";
			cout << "التأمين وإدارة المخاطر\n";
			cout << "المحاسبة في الوحدات الحكوميه غير الهادفة للربح\n";
			cout << "اقتصاديات الخدمات العامة\n";
			cout << "منظمات دولية\n";
			cout << "مبادئ نظم المعلومات\n";
		}
		else if (level == 3 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "ريادة الأعمال والمشروعات الصغيرة\n";
			cout << "الإدارة الاستراتيجية\n";
			cout << "تحليل وتصميم نظم المعلومات\n";
			cout << "البنيه التحتيه لتكنولوجيا المعلومات\n";
			cout << "\n--- (مقررات اختياريه (يختار الطالب مقرر واحد ---\n\n";
			cout << "إدارة الجودة الشاملة\n";
			cout << "إدارة التفاوض\n";
			cout << "إدارة المؤسسات العامة\n";
			cout << "إدارة الأزمات\n";
			cout << "نظريه التنظيم\n";
			cout << "اقتصاد دولي\n";
			cout << "مبادئ قواعد البيانات\n";
		}
		else if (level == 4 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "مبادئ المالية العامة\n";
			cout << "الإحصاء التطبيقي\n";
			cout << "أنظمة معلومات المؤسسات\n";
			cout << "الأعمال الإلكترونية\n";
			cout << "\n--- (مقررات اختياريه (يختار الطالب مقرر واحد ---\n\n";
			cout << "تطبيقات في برمجة الحاسب الآلي\n";
			cout << "تكنولوجيا المعلومات والابتكار\n";
			cout << "إدارة مخاطر وأمن تكنولوجيا المعلومات\n";
			cout << "إدارة المشروع\n";
			cout << "نظم المعلومات المحاسبية\n";
			cout << "دراسة جدوى المشروعات\n";
		}
		else if (level == 4 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "تحليلات الأعمال والتنقيب في البيانات\n";
			cout << "الأساليب الكمية واتخاذ القرارات\n";
			cout << "استراتيجية نظم المعلومات\n";
			cout << "\n--- (مقررات اختياريه (يختار الطالب مقرر واحد ---\n\n";
			cout << "تطبيقات في برمجة الحاسب الآلي\n";
			cout << "تكنولوجيا المعلومات والابتكار\n";
			cout << "إدارة مخاطر وأمن تكنولوجيا المعلومات\n";
			cout << "إدارة المشروع\n";
			cout << "نظم المعلومات المحاسبية\n";
			cout << "دراسة جدوى المشروعات\n";
		}
	}
};
class Business_Administration {
public:
	void BA_subject(int level, int semester) {
		if (level == 1 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Economics\n";
			cout << "Foreign Language 1\n";
			cout << "Principles of Financial Accounting\n";
			cout << "Principles of Business Administration\n";
			cout << "Principles of Law\n";
			cout << "\nOptional Courses (One course must be chosen by the student)\n\n";
			cout << "Principles of Political Science\n";
			cout << "National Identity & Achievements\n";

		}
		else if (level == 1 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Creative Thinking\n";
			cout << "Organizational Behavior\n";
			cout << "Communication Methods and Skills\n";
			cout << "Business Mathematics\n";
			cout << "\nOptional Courses (One course must be chosen by the student)\n\n";
			cout << "Human Rights\n";
			cout << "Man & Genius of Place\n";
		}
		else if (level == 2 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Microeconomics\n";
			cout << "Logistics and Supply Chain Management\n";
			cout << "Principles of Cost Accounting\n";
			cout << "Principles of Marketing\n";
			cout << "Commercial Law\n";
		}
		else if (level == 2 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Business Analytics\n";
			cout << "Principles of Management Accounting\n";
			cout << "Foreign Language (2)\n";
			cout << "Production and Operations Management (POM)\n";
			cout << "Principles of Financial Management\n";
			cout << "Management Information Systems (MIS)\n";
		}
		else if (level == 3 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Macroeconomics\n";
			cout << "HR Management\n";
			cout << "Investment Principles\n";
			cout << "Business Ethics and Governance  (Subspeciality)\n";
			cout << "\nSubspeciality (One course must be chosen by the student)\n\n";
			cout << "Marketing Management\n";
			cout << "International Marketing\n";
			cout << "Integrated Marketing Communication (IMC)\n";
			cout << "Service Marketing\n";
			cout << "\nOptional Courses (One course must be chosen by the student)\n\n";
			cout << "Insurance and Risk Management\n";
			cout << "Accounting for Governmental and Non-profit Organizations\n";
			cout << "Economics of Public Services\n";
			cout << "International Organizations (IOs)\n";
		}
		else if (level == 3 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Strategic Management\n";
			cout << "Entrepreneurship and Small Business\n";
			cout << "\nSubspeciality (One course must be chosen by the student)\n\n";
			cout << "Marketing Management\n";
			cout << "International Marketing\n";
			cout << "Integrated Marketing Communication (IMC)\n";
			cout << "Service Marketing\n";		
			cout << "\nSubspeciality (One course must be chosen by the student)\n\n";
			cout << "Enterprise Information Systems\n";
			cout << "International Business Administration\n";
			cout << "Project Management\n";
			cout << "Economics of Money and Banking\n";
			cout << "\nOptional Courses (Two course must be chosen by the student)\n\n";
			cout << "Total Quality Management (TQM)\n";
			cout << "Negotiation Management\n";
			cout << "Public Enterprise Management\n";
			cout << "Crisis Management\n";
			cout << "Organization Theory\n";
			cout << "International Economics\n";
		}
		else if (level == 4 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Public Finance\n";
			cout << "Applied Statistics\n";
			cout << "\nSubspeciality (One course must be chosen by the student)\n\n";
			cout << "Advanced Financial Management\n";
			cout << "Portfolio and Derivatives Management\n";
			cout << "International Finance\n";
			cout << "Accounting Information System (AIS)\n";
			cout << "\nSubspeciality (One course must be chosen by the student)\n\n";
			cout << "Enterprise Information Systems\n";
			cout << "International Business Administration\n";
			cout << "Project Management\n";
			cout << "Economics of Money and Banking\n";
			cout << "\nSubspeciality (One course must be chosen by the student)\n\n";
			cout << "Strategic HR Management\n";
			cout << "Performance Management and Incentives\n";
			cout << "HR Training & Development\n";
			cout << "Leadership\n";
			cout << "Change Management\n";
		}
		else if (level == 4 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "E-Business\n";
			cout << "Quantitative Methods of Decision Making\n";
			cout << "\nSubspeciality (One course must be chosen)\n\n";
			cout << "Advanced Financial Management\n";
			cout << "Portfolio and Derivatives Management\n";
			cout << "International Finance\n";
			cout << "Accounting Information System (AIS)\n";
			cout << "\nOptional Courses (Two course must be chosen)\n\n";
			cout << "Strategic HR Management\n";
			cout << "Performance Management and Incentives\n";
			cout << "HR Training & Development\n";
			cout << "Leadership\n";
			cout << "Change Management\n";
		}
	}
};
class Accounting {
public:
	void ACC_subject(int level, int semester) {
		if (level == 1 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Economics\n";
			cout << "Foreign Language 1\n";
			cout << "Principles of Financial Accounting\n";
			cout << "Principles of Business Administration\n";
			cout << "Principles of Law\n";
			cout << "\nOptional Courses (One course must be chosen by the student)\n\n";
			cout << "Principles of Political Science\n";
			cout << "National Identity & Achievements\n";

		}
		else if (level == 1 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Creative Thinking\n";
			cout << "Organizational Behavior\n";
			cout << "Communication Methods and Skills\n";
			cout << "Business Mathematics\n";
			cout << "\nOptional Courses (One course must be chosen by the student)\n\n";
			cout << "Human Rights\n";
			cout << "Man & Genius of Place\n";
		}
		else if (level == 2 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Microeconomics\n";
			cout << "Logistics and Supply Chain Management\n";
			cout << "Principles of Cost Accounting\n";
			cout << "Principles of Marketing\n";
			cout << "Commercial Law\n";
		}
		else if (level == 2 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Business Analytics\n";
			cout << "Principles of Management Accounting\n";
			cout << "Foreign Language (2)\n";
			cout << "Production and Operations Management (POM)\n";
			cout << "Principles of Financial Management\n";
			cout << "Management Information Systems (MIS)\n";
		}
		else if (level == 3 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Macroeconomics\n";
			cout << "HR Management\n";
			cout << "Investment Principles\n";
			cout << "Business Ethics and Governance\n";
			cout << "Intermediate Accounting (1)\n";
			cout << "\nOptional Courses (One course must be chosen by the student)\n\n";
			cout << "Insurance and Risk Management\n";
			cout << "International Economics\n";
			cout << "Economics of Public Services\n";
			cout << "International Organizations (IOs)\n";
		}
		else if (level == 3 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Strategic Management\n";
			cout << "Entrepreneurship and Small Business\n";
			cout << "Intermediate Accounting (2)\n";
			cout << "Accounting Information System (AIS)\n";
			cout << "\nOptional Courses (Two course must be chosen by the student)\n\n";
			cout << "Total Quality Management (TQM)\n";
			cout << "Negotiation Management\n";
			cout << "Public Enterprise Management\n";
			cout << "Crisis Management\n";
			cout << "Organization Theory\n";
			cout << "Accounting for Governmental & Non-profit Organizations\n";
		}
		else if (level == 4 && semester == 1) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "Principles of Public Finance\n";
			cout << "Applied Statistics\n";
			cout << "Auditing\n";
			cout << "Advanced Financial Accounting\n";
			cout << "\nSubspeciality - Optional Courses (Two courses must be chosen by the student)\n\n";
			cout << "International Finance\n";
			cout << "Economics of Money and Banking\n";
			cout << "E-System Audit\n";
			cout << "Accounting for Specialized Institutions\n";
			cout << "Project Feasibility Study\n";
			cout << "Company Analysis and Evaluation\n";
			cout << "Advanced Cost Accounting\n";

		}
		else if (level == 4 && semester == 2) {
			cout << " ------------------------------------------------ \n";
			cout << " ------- The subjects that you will study ------- \n";
			cout << " ------------------------------------------------ \n";
			cout << "E-Business\n";
			cout << "Quantitative Methods of Decision Making\n";
			cout << "Tax Accounting\n";
			cout << "\nSubspeciality - Optional Courses (Two courses must be chosen by the student)\n\n";
			cout << "International Finance\n";
			cout << "Economics of Money and Banking\n";
			cout << "E-System Audit\n";
			cout << "Accounting for Specialized Institutions\n";
			cout << "Project Feasibility Study\n";
			cout << "Company Analysis and Evaluation\n";
			cout << "Contemporary Accounting Issues\n";
		}
	}
};
class FutureAcadimy :
	public Computer_Science,
	public Business_Information_Systems,
	public Business_Administration,
	public Accounting
{
private:
	string name;
	int ID;
	int ch;
	int semester;
	int level;
public:
	FutureAcadimy(string n = "", int id = 0, int dept = 0, int lvl = 0, int sem = 0) {
		name = n;
		ID = id;
		ch = dept;
		level = lvl;
		semester = sem;
	}
	void setName(string n) { 
		name = n; 
	}
	string getName() {
		return name; 
	}

	void setID(int id) {
		ID = id; 
	}
	int getID() { 
		return ID; 
	}

	void setDepartment(int dept) {
		ch = dept; 
	}
	int getDepartment() {
		return ch; 
	}

	void setLevel(int lvl) {
		level = lvl;
	}
	int getLevel() {
		return level; 
	}

	void setSemester(int sem) { 
		semester = sem; 
	}
	int getSemester() {
		return semester; 
	}

	void data() {
		string n;
		int id, dept, lvl, sem;

		cout << "Enter your name : ";
		cin.ignore();        // تنظيف الـ buffer
		getline(cin, n);  // قراءة الاسم كامل
		setName(n);

		cout << "Enter your ID : ";
		cin >> id;
		setID(id);

		cout << "[1] Computer Scince\n";
		cout << "[2] Business Information Systems\n";
		cout << "[3] Business Administration\n";
		cout << "[4] Accounting\n";
		cout << "Enter the number of your Department : ";
		cin >> dept;
		setDepartment(dept);

		cout << "[1] First Level\n";
		cout << "[2] Second Level\n";
		cout << "[3] Third Level\n";
		cout << "[4] Fourth Level\n";
		cout << "Enter the number of your Level : ";
		cin >> lvl;
		setLevel(lvl);

		cout << "[1] First Semester\n";
		cout << "[2] Second Semester\n";
		cout << "Enter the semester : ";
		cin >> sem;
		setSemester(sem);

}
	void showdata() {


		cout << "Name: " << getName() << endl;
		
		cout << "ID: " << getID() << endl;
		
		if (getDepartment() == 1) {
			cout << "Computer Science\n"; 

		}
		else if (getDepartment() == 2) {
			cout << "Business Information Systems\n";
		}
		else if (getDepartment() == 3) {
			cout << "Business Administration\n";
		}
		else if (getDepartment() == 4) {
			cout << "Accounting\n";
		}

		if(getLevel()==1){
			cout << "First Level\n";
		}
		else if(getLevel() == 2){
			cout << "Second Level\n";
		}
		else if (getLevel() == 3) {
			cout << "Third Level\n";
		}
		else if (getLevel() == 4) {
			cout << "Fourth Level\n";
		}

		if (getSemester() == 1) {
			cout << "First Semester\n";
		}
		else if (getSemester() == 2) {
			cout << "Second Semester\n";
		}


		if (getDepartment() == 1) {
			CS_subject(getLevel(), getSemester());
		}
		else if (getDepartment() == 2) {
			BIS_subject(getLevel(), getSemester());
		}
		else if (getDepartment() == 3) {
			BA_subject(getLevel(), getSemester());
		}
		else if (getDepartment() == 4) {
			ACC_subject(getLevel(), getSemester());
		}

	}
};
int main()
{
	const int size = 10;
	FutureAcadimy students[size];
	int count = 0;
	int choice;
		while (true) {
			cout << "\n[1] Add A new Student\n";
			cout << "[2] Login \n";
			cout << "[3] Exit\n";
			cout << "Enter the service number: ";
			cin >> choice;

			if (choice == 1) {
				if (count < size) {
					cout << "\n--- Enter data for student " << count + 1 << " ---\n";
					students[count].data();
					count++;
				}
				else {
					cout << "Maximum number of students\n";
				}
			}
			else if (choice == 2) {
				int searchID;
				cout << "Enter your ID: ";
				cin >> searchID;

				bool found = false;
				for (int i = 0; i < count; i++) {
					if (students[i].getID() == searchID) {
						cout << "\n---------------------\n";
						cout << "\n--- Student Found ---\n";
						cout << "\n---------------------\n";
						students[i].showdata();
						found = true;
						break;
					}
				}
				if (!found) {
					cout << "No student found with this ID.\n";
				}
			}
			else if (choice == 3) {
				cout << "Goodbye!\n";
				break;
			}
			else {
				cout << "Invalid choice, try again.\n";
			}
		}
}
