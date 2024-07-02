#pragma once

class TAbstract{
public:
    virtual ~TAbstract()
    {
        std::cout << "TAbstract Deconstruct..." << std::endl;
    }

    virtual void showName() = 0;
public:
    TAbstract()
    {
        std::cout << "TAbstract Construct..." << std::endl;
    }
private:
};


class TAbstractionImplement{
public:
    virtual void showName() = 0;    //定义操作接口
    virtual ~TAbstractionImplement()
    {
        std::cout << "TAbstractionImplement Deconstruct..." << std::endl;
    }
protected:
    TAbstractionImplement()
    {
        std::cout << "TAbstractionImplement Construct..." << std::endl;
    }
};


template <typename AbstractType, typename ImplementType>
class TRefineAbstract : public TAbstract
{
public:
    TRefineAbstract(ImplementType* imp) : imp_(imp) {
        std::cout << "TRefineAbstract Construct..." << std::endl;
    }

    ~TRefineAbstract() {
        std::cout << "TRefineAbstract Deconstruct..." << std::endl;
        // delete imp_;
    }

    void showName() {
        imp_->showName();
    }

private:
    ImplementType* imp_;
};


template <typename ImplementType>
class TConcreteAbstractionImplement : public TAbstractionImplement
{
public:
    TConcreteAbstractionImplement()
    {
        std::cout << "TConcreteAbstractionImplement Construct..." << std::endl;
    }

    ~TConcreteAbstractionImplement()
    {
        std::cout << "TConcreteAbstractionImplement Deconstruct..." << std::endl;
    }

    void showName()
    {
        std::cout << "TConcreteAbstractionImplement name..." << std::endl;
    }
protected:
private:
};