#include<iostream>
#include<string.h>
using namespace std;

class Book{
    private:
    char* title;
    char* author;
    int page_count;
    bool format;
    float chap_page;
    int numchapter;

    public:
        Book() {
            title = '\0';
            author ='\0';
            page_count = 0;
            format = 0;
            chap_page = '\0';
            numchapter = 0;
        }

        Book(const char* tit, const char* aut, int pac, bool ft, float cp, int nc) {
            title = new char[strlen(tit) + 1];
            strcpy(title, tit);
            author = new char[strlen(aut) + 1];
            strcpy(author, aut);
            page_count = pac;
            format = ft;
            chap_page = cp;
            numchapter = nc;
        }
          Book(const Book &obj){  
		title=obj.title;
        author=obj.author;
        page_count=obj.page_count;
        format=obj.format;
        chap_page=obj.chap_page;
        numchapter=obj.numchapter;
        	
		}

        ~Book() {
            delete[] title;
            delete[] author;
        }

        const char* getTitle() const { return title; }
        const char* getAuthor() const { return author; }
        int getPageCount() const { return page_count; }
        bool getFormat() const { return format; }
        float getChapPage() const { return chap_page; }
        int getNumChapter() const { return numchapter; }

        void setTitle(const char* tit) {
            delete[] title;
            title = new char[strlen(tit) + 1];
            strcpy(title, tit);
        }

        void setAuthor(const char* aut) {
            delete[] author;
            author = new char[strlen(aut) + 1];
            strcpy(author, aut);
        }

        void setPageCount(int pac) { page_count = pac; }
        void setFormat(bool ft) { format = ft; }
        void setChapPage(float cp) { chap_page = cp; }
        void setNumChapter(int nc) { numchapter = nc; }

        void displayBookInfo() const {
            cout << "Title: " << title << endl;
            cout << "Author: " << author << endl;
            cout << "Page count: " << page_count << endl;
            cout << "Format: " << (format ? "Digital" : "Print") << endl;
            cout << "Number of Chapters: " << numchapter << endl;
            cout << "Chapter Page: " << chap_page << endl;
            cout << "Chapter Page: " << chap_page << endl;
         
         
        }
};

int main() {
    Book book1("the BOOK", "ABC", 200,false, 100, 15);
    book1.displayBookInfo();
    Book b2=book1;
    cout<<"\nshallow copy"<<endl;
    b2.displayBookInfo();

    return 0;
}

