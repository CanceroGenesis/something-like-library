#include <iostream>
using namespace std;
class Reader
{
private:
	char *name; //FIO
	int date[3];
	char *books;
public:

	void setName(char *userName)
	{
		if ((userName != nullptr) && name != nullptr)
		{
			strcpy_s(name, 100, userName);
		}
	}
	char* getName(void)
	{
		char *temp = new char[100];
		strcpy_s(temp, 100, name);
		return name;
	}

	void setDate(int userDate)
	{
		for (int i = 0; i < 3; i++)
		{
			date[i] = userDate;
		}
	}
	int getDate(void)
	{
		for (int i = 0; i < 3; i++)
		{
			return date[i];
		}
	}

	void setBooks(char *userBooks)
	{
		if ((userBooks != nullptr) && books != nullptr)
		{
			strcpy_s(books, 100, userBooks);
		}
	}
	char* getBooks(void)
	{
		char *temp = new char[100];
		strcpy_s(temp, 100, books);
		return books;
	}

	Reader()
	{
		name = nullptr;
		name = new char[100];
		date[0] = 0;
		date[1] = 1;
		date[2] = 2;
		books = nullptr;
		books = new char[100];
	}

	Reader(int sizeName, int datest[3], int sizeBooks)
	{
		if (sizeName < 30)
		{
			name = new char[30];
		}
		else
		{
			name = new char[sizeName];
		}
		if (datest[3] < 3)
		{
			date[0] = 0;
			date[1] = 1;
			date[2] = 2;
		}
		else
		{
			date[3] = datest[3];
		}
		if (sizeBooks < 30)
		{
			name = new char[30];
		}
		else
		{
			name = new char[sizeBooks];
		}
	}

	~Reader()
	{
		if (name != nullptr)
		{
			delete[] name;
		}
		if (books != nullptr)
		{
			delete[] books;
		}
	}

	Reader(const Reader &obj, const Reader &obj1)
	{
		this->name = new char[30];
		strcpy_s(this->name, 30, obj.name);
		this->books = new char[50];
		strcpy_s(this->books, 50, obj1.books);
	}
};
class Book
{
private:
	char *author;
	char *nameof;
	int dateof[3];
	char *readername;
public:
	void setAuthor(char *userAuthor)
	{
		if ((userAuthor != nullptr) && author != nullptr)
		{
			strcpy_s(author, 100, userAuthor);
		}
	}
	char* getAuthor(void)
	{
		char *temp = new char[100];
		strcpy_s(temp, 100, author);
		return author;
	}

	void setNameof(char *userName)
	{
		if ((userName != nullptr) && nameof != nullptr)
		{
			strcpy_s(nameof, 100, userName);
		}
	}
	char* getNameof(void)
	{
		char *temp = new char[100];
		strcpy_s(temp, 100, nameof);
		return nameof;
	}

	void setDateof(int userDate)
	{
		for (int i = 0; i < 3; i++)
		{
			dateof[i] = userDate;
		}
	}
	int getDateof(void)
	{
		for (int i = 0; i < 3; i++)
		{
			return dateof[i];
		}
	}

	void setReaderName(char *userReaderName)
	{
		if ((userReaderName != nullptr) && readername != nullptr)
		{
			strcpy_s(readername, 100, userReaderName);
		}
	}
	char* getReaderName(void)
	{
		char *temp = new char[100];
		strcpy_s(temp, 100, readername);
		return readername;
	}

	Book()
	{
		author = nullptr;
		author = new char[100];
		nameof = nullptr;
		nameof = new char[100];
		dateof[0] = 0;
		dateof[1] = 1;
		dateof[2] = 2;
		readername = nullptr;
		readername = new char[100];
	}

	Book(int sizeAuthor, int sizeNameof, int dateofst[3], int sizeReaderName)
	{
		if (sizeAuthor < 30)
		{
			author = new char[30];
		}
		else
		{
			author = new char[sizeAuthor];
		}

		if (sizeNameof < 30)
		{
			nameof = new char[30];
		}
		else
		{
			nameof = new char[sizeNameof];
		}

		if (dateofst[3] < 3)
		{
			dateof[0] = 0;
			dateof[1] = 1;
			dateof[2] = 2;
		}
		else
		{
			dateof[3] = dateofst[3];
		}

		if (sizeReaderName < 30)
		{
			readername = new char[30];
		}
		else
		{
			readername = new char[sizeReaderName];
		}
	}

	~Book()
	{
		if (author != nullptr)
		{
			delete[] author;
		}
		if (nameof != nullptr)
		{
			delete[] nameof;
		}
		if (readername != nullptr)
		{
			delete[] readername;
		}
	}

	Book(const Book &obj, const Book &obj1, const Book &obj2)
	{
		this->author = new char[30];
		strcpy_s(this->author, 30, obj.author);
		this->nameof = new char[50];
		strcpy_s(this->nameof, 50, obj1.nameof);
		this->readername = new char[50];
		strcpy_s(this->readername, 50, obj2.readername);
	}
};
void main()
{
	Reader obj;
	char *name = nullptr;
	name = new char[100];
	cout << "Write the full name of the reader: ";
	cin.getline(name, 100);
	obj.setName(name);
	obj.getName();

	int date[3];
	cout << "Write the full date of birth of the reader: ";
	for (int i = 0; i < 3; i++)
	{
		cin >> date[i];
		obj.setDate(date[i]);
	}
	obj.getDate();

	char *books = nullptr;
	books = new char[100];
	char c = getchar();
	cout << "Write the list of the books of the reader: ";
	cin.getline(books, 100);
	obj.setBooks(books);
	obj.getBooks();




	Book obj1;
	char *author = nullptr;
	author = new char[100];
	cout << "Write the full name of the author: ";
	cin.getline(author, 100);
	obj1.setAuthor(author);
	obj1.getAuthor();

	char *nameof = nullptr;
	nameof = new char[100];
	cout << "Write the full name of the book of this author: ";
	cin.getline(nameof, 100);
	obj1.setNameof(nameof);
	obj1.getNameof();

	int dateof[3];
	cout << "Write the full date when this book was published: ";
	for (int i = 0; i < 3; i++)
	{
		cin >> dateof[i];
		obj1.setDateof(dateof[i]);
	}
	obj1.getDateof();

	char *readername = nullptr;
	readername = new char[100];
	char a = getchar();
	cout << "Write the name of the reader of this book: ";
	cin.getline(readername, 100);
	obj1.setReaderName(readername);
	obj1.getReaderName();


	system("pause");
	return;
}