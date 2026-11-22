class Outer
{
private:
    int x;

public:
    class Inner
    {
    public:
        void display()
        {
            // cout << x;  // Error
        }
    };
};