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

integer::integer(){
    marked = false;
    number = 0;
}