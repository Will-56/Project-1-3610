/**
 * This class is mainly so that I can give numbers a "flag" or a true or false attatched to them.
 * This makes it very easy to implement the Sieve of Eratosthenis algorithim, which uses marks on
 * numbers to determine if they are prime or composite.
 * 
 * Will Kashner 2026
 */

class integer{
    public:

    //constructor
    integer();

    //getters
    bool is_marked() const {return marked;}
    int num() const{return number;}

    //setters
    void mark() {marked = true;}
    void set_num(int n) {number = n;}

    private:
    bool marked;
    int number;
};

//constructor implementation
integer::integer(){
    marked = false;
    number = 0;
}