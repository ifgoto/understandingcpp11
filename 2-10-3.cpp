//g++ -c -std=c++11 2-10-3.cpp

struct Base {
    virtual void Turning() = 0;
    virtual void dijkstra() = 0;
    virtual void VNeumann (int g) = 0;
    virtual void DKnuth() const;
    void Print();
};

struct DerivedMid : public Base {
    //void Vneumann(double g);
};

struct DerivedTop : public DerivedMid {
    void Turning() override;
   // void Dikjstra() override;
   // void VNeumann(double g) override;
   // void DKnuth() override;
   // void Print() override;
};