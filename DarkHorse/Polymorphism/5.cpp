#include <iostream>
#include <string>

using namespace std;

class CPU {
public:
    virtual void calculate() = 0;
};

class VideoCard {
public:
    virtual void display() = 0;
};

class Memory {
public:
    virtual void storage() = 0;
};

class Computer {
public:
    Computer(CPU *cpu, VideoCard *vc, Memory *mem) {
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    void work() {
        m_cpu->calculate();
        m_vc->display();
        m_mem->storage();
    }
    ~Computer() {
        if (m_cpu != NULL) {
            delete m_cpu;
            m_cpu = NULL;
        }
        if (m_vc != NULL) {
            delete m_vc;
            m_vc = NULL;
        }
        if (m_mem != NULL) {
            delete m_mem;
            m_mem = NULL;
        }
    }
private:
    CPU *m_cpu;
    VideoCard *m_vc;
    Memory *m_mem;
};

// Intel 厂商
class Intel_CPU : public CPU {
public:
    virtual void calculate() {
        cout << "Intel CPU start working" << endl;
    }
};

class Intel_VideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Intel VideoCard start working" << endl;
    }
};

class Intel_Memory : public Memory {
public:
    virtual void storage() {
        cout << "Intel Memory start working" << endl;
    }
};

// Lenovo 厂商
class Lenovo_CPU : public CPU {
public:
    virtual void calculate() {
        cout << "Lenovo CPU start working" << endl;
    }
};

class Lenovo_VideoCard : public VideoCard {
public:
    virtual void display() {
        cout << "Lenovo VideoCard start working" << endl;
    }
};

class Lenovo_Memory : public Memory {
public:
    virtual void storage() {
        cout << "Lenovo Memory start working" << endl;
    }
};

void test01() {
    //电脑零件
    CPU *intelcpu = new Intel_CPU;
    VideoCard *intelCard = new Intel_VideoCard;
    Memory *intelmem = new Intel_Memory;

    //创建第一台电脑
    Computer *computer1 = new Computer(intelcpu, intelCard, intelmem);
    computer1->work();
    delete computer1;

    cout << "-------------------" << endl;
    cout << "The second Computer start working" << endl;

    //创建第二台电脑
    Computer *computer2 = new Computer(new Lenovo_CPU, new Lenovo_VideoCard, new Lenovo_Memory);
    computer2->work();
    delete computer2;
}

int main() {
    test01();

    return 0;
}