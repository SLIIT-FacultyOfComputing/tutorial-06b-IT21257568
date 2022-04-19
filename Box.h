class Box {
    private:
       int length;
       int width;
       int height;
    public:
       // write prototypes of setters for length, width and height    
        void setLength(int L);
        void setWidth(int W);
        void setHeight(int H);
        int getLength();
        int getWidth();
        int getHeight();
       // write prototypes of getters for length, width and height
 
       int calcVolume();
};
