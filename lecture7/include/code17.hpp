class Counter {
   private:
    static int count;

   public:
    static void increment() { count++; }
    static int get_count() { return count; }
};