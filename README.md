# 🎓 TermTracker - GPA Calculator

A comprehensive and user-friendly GPA (Grade Point Average) calculator written in C++. This program helps students calculate their academic GPA based on course grades and credit hours.

## ✨ Features

- **🧮 Accurate GPA Calculation**: Calculates weighted GPA based on grades and credit hours
- **📊 Grade Conversion**: Converts numerical grades to both GPA points and letter grades
- **👤 User-Friendly Interface**: Clean, intuitive command-line interface
- **🔄 Multiple Sessions**: Calculate GPA for multiple terms or semesters
- **✅ Input Validation**: Validates grade ranges and credit hour limits
- **📋 Detailed Results**: Shows individual course grades and overall GPA

## 🎯 Grade Scale

| Numerical Grade | Letter Grade | GPA Points |
|----------------|--------------|------------|
| 90-100         | A            | 4.0        |
| 85-89          | B+           | 3.7        |
| 80-84          | B            | 3.3        |
| 75-79          | C+           | 3.0        |
| 70-74          | C-           | 2.7        |
| 65-69          | C            | 2.3        |
| 60-64          | D            | 2.0        |
| 55-59          | D-           | 1.3        |
| 50-54          | F            | 1.0        |
| 0-49           | F            | 0.0        |

## 🚀 Getting Started

### Prerequisites

- C++ compiler (g++, clang++, or Microsoft Visual C++)
- Windows, macOS, or Linux operating system

### Installation

1. **Clone the repository**
   ```bash
   git clone https://github.com/yourusername/TermTracker.git
   cd TermTracker
   ```

2. **Compile the program**
   ```bash
   g++ -o TermTracker TermTracker.cpp
   ```

3. **Run the program**
   ```bash
   ./TermTracker
   ```

### For Windows Users

If using MinGW or MSYS2:
```bash
g++ -o TermTracker.exe TermTracker.cpp
TermTracker.exe
```

## 💻 Usage

1. **Start the program** - The welcome screen will appear
2. **Enter your name** - First and last name for personalization
3. **Input course data** for each subject:
   - Enter the numerical grade (0-100)
   - Enter the credit hours (typically 1-6)
   - Repeat for all courses
4. **Finish input** - Enter `-1` when done adding courses
5. **View results** - See individual grades and calculated GPA
6. **Repeat if needed** - Calculate for another term/semester

### Example Session

```
============================
Welcome to the GPA Calculator
============================

Enter the first name: john
Enter the last name: doe
Hello MR/MISS John  Doe

The material (1)
Score out of (100): 85
Enter the number of hours for the subject: 3

The material (2)
Score out of (100): 92
Enter the number of hours for the subject: 4

The material (3)
Score out of (100): -1

===================
Name: John  Doe
#material (1) The degree(85) Appreciation (B+)
#material (2) The degree(92) Appreciation (A)
Gpa = (3.82)
===================
```

## 🛠️ Technical Details

### Functions Overview

- **`formatName()`**: Capitalizes and formats user names
- **`getGradePoints()`**: Converts numerical grades to GPA points
- **`getLetterGrade()`**: Converts numerical grades to letter grades
- **`calculateGPA()`**: Calculates weighted GPA using quality points method

### Input Validation

- ✅ Grades must be between 0-100
- ✅ Credit hours must be 6 or less
- ✅ Handles invalid input gracefully

## 📁 Project Structure

```
TermTracker/
│
├── TermTracker.cpp     # Main source code
├── TermTracker.exe     # Compiled executable (Windows)
└── README.md          # Project documentation
```

## 🤝 Contributing

Contributions are welcome! Please feel free to submit a Pull Request. For major changes, please open an issue first to discuss what you would like to change.

### Development Guidelines

1. Follow existing code style and formatting
2. Add comments for new functions
3. Test your changes thoroughly
4. Update documentation as needed

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👨‍💻 Author

- **Your Name** - *Initial work* - [YourGitHub](https://github.com/Amr4924)

## 🙏 Acknowledgments

- Inspired by the need for quick and accurate GPA calculations
- Built with simplicity and usability in mind
- Thanks to the C++ community for excellent documentation

## 📞 Support

If you have any questions or run into issues, please:

1. Check the existing issues on GitHub
2. Create a new issue with detailed description
3. Contact the author directly

---

⭐ **If you found this project helpful, please give it a star!** ⭐
